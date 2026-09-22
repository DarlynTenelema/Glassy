#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
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

struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct InputBindingComposite_1_t98486D7ED7AEBFE8ABEE6EF136219EF0B2D18B09;
struct InputProcessor_1_t1B867C38628FAD36851704361A9075C78FC620A0;
struct InputProcessor_1_t63169397DBC7FB0CF6D6160EA778A6717BC12018;
struct InputProcessor_1_tAAC8F976DB5D03F250579CEB3CD7D7630C5EFDE9;
struct InputProcessor_1_t5AC9E7C228F668214A5AE7276B57B9C3DB4DBDC1;
struct InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B;
struct InputProcessor_1_tD234B7759A8C8888379215D9C740842DBF801EEE;
struct List_1_tFED1C27AA4B8AC9813FF4858B3ABB1B3F74558EF;
struct InputProcessor_1U5BU5D_t5CD886D72C9A397221BED521C6A36D135C95FB6E;
struct InputProcessor_1U5BU5D_t65F48DB313FAA298816DEAEB94439DB67C6D0E8D;
struct InputProcessor_1U5BU5D_t220C3082A68C5F8C3562FBA5DEC92D06DF6EEC7A;
struct InputProcessor_1U5BU5D_t7C4250597CF224560443C21634D3AD3B4B4267AD;
struct InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E;
struct InputProcessor_1U5BU5D_t37ED9D8E6EA5F3F57C79D6A374699DBE2B1E4D2A;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
struct StateChangeMonitorTimeoutU5BU5D_tC50E6F92A1C5CE6397F411E0967B3A428FFF1C77;
struct OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8;
struct OnScreenDeviceInfoU5BU5D_t0C70881971941DEFDD18CFFD3E4133B5CA0B7F30;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IInputStateChangeMonitor_t043FD8736A6F45C06A2FAFFC5BE70A565F999598;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InputManager_t69FCFDAC90F8EBB8EF4950CC0BE617D842A39210;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_ScriptingModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_InputSystem[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral103D4F25F053C03A7B76B4D2636A9A09873C0368;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral3356214D501D9273DB4022DE33B10D82F6557224;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5087AA321712F96C5FBDD78208956F7623FAD0D5;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C String_t* _stringLiteral6A16692A8FFF7E03F7605208D97CD8EA87554CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4C9FA48FD2A2F435C80D4EE2A360E4F1BC670A;
IL2CPP_EXTERN_C String_t* _stringLiteral991EE12E665ED6D632A6A05B1ED57EE663CCC920;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CB893981937B6A3E19D06EF1C6E0ABDCB4F113;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC5AAE312BC2C2A32DA15ABE4DBCB8869E6D272CB;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12;
IL2CPP_EXTERN_C String_t* _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_AppendWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAB527E70D2DFE8C564E67D6328A077D642EA9E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_EraseAtWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m08E195F444F3FD889662E62194E060EB295E0037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_IndexOfReference_TisInputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_TisInputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_mFF3C6B920686BD33ABEB2D3CD00012EFCD857912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m18F287528E2007346B9E9B721D3A51A2EE2B005B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_SwapElements_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m640045697F1A6F2BD8DE3B91C7F66A01A2B0617D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m44EAE568720002EAD1F4ECE1CBA62E756FB05AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Copy_mBF4556275F19B6725B735C61ECAD5908787D71D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m5CBF60E97954A416106547EF28316741B674D253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mEB87E39B53D707EB3D802BD45DAA8C734FAB6AF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Allocator_t996642592271AAD9EE688F142741D512C07B5824_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InlinedArray_1_tAF777FBA18631DD7005506989AFF69747D31C7C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputBindingComposite_1_tBDF5298257039EEDB07762B01F3C2729012FBFB3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputControlListDebugView_1_t81FF9E1CACE802DE2DDABCC8C858989A22145982_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputControlList_1_t39EA6033CE1FFCCB435F68644BFDB806B24ACB44_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringBuilder_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64U2A_t66E9C0C66FC2DD71E964B67602EBFFDCB6F35307_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
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
struct Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69 
{
	uint64_t* ___m_Indices;
	int32_t ___m_Count;
	int32_t ___m_Current;
};
struct InlinedArray_1_tCBB0B493F330EB525B8BC9CFC3F107CAA76A7DDE 
{
	int32_t ___length;
	InputProcessor_1_t1B867C38628FAD36851704361A9075C78FC620A0* ___firstValue;
	InputProcessor_1U5BU5D_t5CD886D72C9A397221BED521C6A36D135C95FB6E* ___additionalValues;
};
struct InlinedArray_1_t12A45F33DFA810A5DC86B2AF8F986BCC079A4087 
{
	int32_t ___length;
	InputProcessor_1_t63169397DBC7FB0CF6D6160EA778A6717BC12018* ___firstValue;
	InputProcessor_1U5BU5D_t65F48DB313FAA298816DEAEB94439DB67C6D0E8D* ___additionalValues;
};
struct InlinedArray_1_tD2A5516062C16A2915875F3C5B996717F9303DBC 
{
	int32_t ___length;
	InputProcessor_1_tAAC8F976DB5D03F250579CEB3CD7D7630C5EFDE9* ___firstValue;
	InputProcessor_1U5BU5D_t220C3082A68C5F8C3562FBA5DEC92D06DF6EEC7A* ___additionalValues;
};
struct InlinedArray_1_t7FD41B9AD95628AF60A2C8C4B3F3BB0A8B1BF6EB 
{
	int32_t ___length;
	InputProcessor_1_t5AC9E7C228F668214A5AE7276B57B9C3DB4DBDC1* ___firstValue;
	InputProcessor_1U5BU5D_t7C4250597CF224560443C21634D3AD3B4B4267AD* ___additionalValues;
};
struct InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 
{
	int32_t ___length;
	InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B* ___firstValue;
	InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E* ___additionalValues;
};
struct InlinedArray_1_t6E2BC68EDE9604FC8F6F2882E41E78DEBFFC86C7 
{
	int32_t ___length;
	InputProcessor_1_tD234B7759A8C8888379215D9C740842DBF801EEE* ___firstValue;
	InputProcessor_1U5BU5D_t37ED9D8E6EA5F3F57C79D6A374699DBE2B1E4D2A* ___additionalValues;
};
struct InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 
{
	int32_t ___length;
	uint64_t ___firstValue;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___additionalValues;
};
typedef Il2CppFullySharedGenericStruct InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3;
struct InputBindingComposite_1_tA801F27AF2F3F27582B88E358BEAD6F15CA04D13  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};
struct InputBindingComposite_1_t8E0A4E893C5E7D03D76B0149D8E9A5D2B3FF0E4C  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};
struct InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};
struct InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};
struct InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};
struct InputBindingComposite_1_t98486D7ED7AEBFE8ABEE6EF136219EF0B2D18B09  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};
struct InputControlListDebugView_1_tF50DA37E00EC5333B067B5385186DA12D8700025 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___m_Controls;
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
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_BindingIndex;
};
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_BindingIndex;
};
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_BindingIndex;
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
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
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
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
	InputManager_t69FCFDAC90F8EBB8EF4950CC0BE617D842A39210* ___m_Manager;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
	InputManager_t69FCFDAC90F8EBB8EF4950CC0BE617D842A39210* ___m_Manager;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
	InputManager_t69FCFDAC90F8EBB8EF4950CC0BE617D842A39210* ___m_Manager;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct StateChangeMonitorTimeout_t155BA6A9DDCDB6474629D31735C037134B0C3049 
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control;
	double ___time;
	RuntimeObject* ___monitor;
	int64_t ___monitorIndex;
	int32_t ___timerIndex;
};
struct StateChangeMonitorTimeout_t155BA6A9DDCDB6474629D31735C037134B0C3049_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control;
	double ___time;
	RuntimeObject* ___monitor;
	int64_t ___monitorIndex;
	int32_t ___timerIndex;
};
struct StateChangeMonitorTimeout_t155BA6A9DDCDB6474629D31735C037134B0C3049_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control;
	double ___time;
	RuntimeObject* ___monitor;
	int64_t ___monitorIndex;
	int32_t ___timerIndex;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	uint32_t ___userId;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	uint32_t ___userId;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	uint32_t ___userId;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092;
struct InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 
{
	int32_t ___length;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___firstValue;
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___additionalValues;
};
struct InlinedArray_1_t1CE3E035944588D067779CB78450605FD753F5F0 
{
	int32_t ___length;
	StateChangeMonitorTimeout_t155BA6A9DDCDB6474629D31735C037134B0C3049 ___firstValue;
	StateChangeMonitorTimeoutU5BU5D_tC50E6F92A1C5CE6397F411E0967B3A428FFF1C77* ___additionalValues;
};
struct InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C 
{
	int32_t ___length;
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___firstValue;
	OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8* ___additionalValues;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 
{
	uint32_t ___m_ParentBoneIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
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
struct Eyes_t239151DFDE1BB47589CEBD22261A793F142B211D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LeftEyePosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_LeftEyeRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RightEyePosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RightEyeRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FixationPoint;
	float ___m_LeftEyeOpenAmount;
	float ___m_RightEyeOpenAmount;
};
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	uint32_t ___m_ByteOffset;
	uint32_t ___U3CbitOffsetU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
};
struct InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D 
{
	uint32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct ControlFlags_t9C297F208DE19CEB00A0560F7FDE59F6A2004132 
{
	int32_t ___value__;
};
struct DeviceFlags_tF02F85DA24FF16879A67B540FCA560EC955CE728 
{
	int32_t ___value__;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
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
#pragma pack(push, tp, 1)
struct PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					bool ___isTracked;
				};
				#pragma pack(pop, tp)
				struct
				{
					bool ___isTracked_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_OffsetPadding[4];
					uint32_t ___trackingState;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_OffsetPadding_forAlignmentOnly[4];
					uint32_t ___trackingState_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___position_OffsetPadding_forAlignmentOnly[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_OffsetPadding[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rotation_OffsetPadding_forAlignmentOnly[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_OffsetPadding[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___velocity_OffsetPadding_forAlignmentOnly[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_OffsetPadding[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___angularVelocity_OffsetPadding_forAlignmentOnly[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_forAlignmentOnly;
				};
			};
		};
		uint8_t PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2__padding[60];
	};
};
#pragma pack(pop, tp)
struct PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___isTracked;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___isTracked_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_OffsetPadding[4];
					uint32_t ___trackingState;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_OffsetPadding_forAlignmentOnly[4];
					uint32_t ___trackingState_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding_forAlignmentOnly[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_OffsetPadding[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_OffsetPadding_forAlignmentOnly[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_OffsetPadding[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_OffsetPadding_forAlignmentOnly[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_OffsetPadding[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_OffsetPadding_forAlignmentOnly[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2__padding[60];
	};
};
struct PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___isTracked;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___isTracked_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_OffsetPadding[4];
					uint32_t ___trackingState;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_OffsetPadding_forAlignmentOnly[4];
					uint32_t ___trackingState_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding_forAlignmentOnly[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_OffsetPadding[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_OffsetPadding_forAlignmentOnly[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_OffsetPadding[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_OffsetPadding_forAlignmentOnly[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_OffsetPadding[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_OffsetPadding_forAlignmentOnly[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2__padding[60];
	};
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
struct InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4 
{
	int32_t ___m_Count;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices;
	int32_t ___m_Allocator;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
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
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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
struct InputControl_1_tA729D33AC5D46954DC53858EA2B44E2E860427EB  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tCBB0B493F330EB525B8BC9CFC3F107CAA76A7DDE ___m_ProcessorStack;
	Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 ___m_CachedValue;
	Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tAB235074529ACCAD7E120E570876162E4DE74620  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t12A45F33DFA810A5DC86B2AF8F986BCC079A4087 ___m_ProcessorStack;
	bool ___m_CachedValue;
	bool ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t3D0405353C1510181388B799CAB07DCE5DC27CA8  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tD2A5516062C16A2915875F3C5B996717F9303DBC ___m_ProcessorStack;
	double ___m_CachedValue;
	double ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tE33864EBE2D643F2DE77C311C920AB34A1B63197  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t7FD41B9AD95628AF60A2C8C4B3F3BB0A8B1BF6EB ___m_ProcessorStack;
	Eyes_t239151DFDE1BB47589CEBD22261A793F142B211D ___m_CachedValue;
	Eyes_t239151DFDE1BB47589CEBD22261A793F142B211D ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 ___m_ProcessorStack;
	int32_t ___m_CachedValue;
	int32_t ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t397D69C473620E11E58D59DB7685FDC86294B22A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t6E2BC68EDE9604FC8F6F2882E41E78DEBFFC86C7 ___m_ProcessorStack;
	PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2 ___m_CachedValue;
	PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
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
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0_StaticFields
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Composites;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
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
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17  : public RuntimeArray
{
	ALIGN_FIELD (8) InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* m_Items[1];

	inline InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A_fshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Copy_TisIl2CppFullySharedGenericAny_mCBAFE4FAA00288B66F1CCF0385F38023009DFF0F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_set_Item_m9AF315CB1DC3C2D2118E0D067F899B774C6F5E8F_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Join_TisIl2CppFullySharedGenericAny_mBD7E08FAE557F56197D2EFEFF4F91E6EC8D256BC_fshared (Il2CppFullySharedGenericAny ___0_value, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericAny_m9F7345A47A2A570DC1D4E1EB2FB6EE86F5323295_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_count, Il2CppFullySharedGenericAny ___2_value, int32_t ___3_capacityIncrement, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InlinedArray_1_get_Capacity_mCCF5A3E0A6A2338FDA0E690FA4510EEEADBD9802_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InlinedArray_1_Append_mD98CE99B949E6C060644EA511BA1A43A920DC4DA_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_RemoveAt_mD276B448C3B12DCA1B8AA28ABC4B7632C147721D_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericAny_m9459CCF36C0A36FDBD1E4C86B7C9E1F891EB6DA1_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAtByMovingTail_TisIl2CppFullySharedGenericAny_m8DD3D84F1C2708D1A4E4DE97376266B0131F9302_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InlinedArray_1_IndexOf_m768BC79A0A65BB5C0350AA1D1F78AEF2D90FE2C5_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_RemoveAtByMovingTailWithCapacity_mFD9E61BCB0F1A1288BD31A4F2FB8B1CEB6504063_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_get_Item_m559A0B1FCFEC59844BBCB769C3C743C5F46A2201_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InlinedArray_1_Contains_m0242F511B2C1CCB418ACE7328A2C803568B8A065_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InlinedArray_1_GetEnumerator_m2F7C1450CA7DE6BDE2ADB92FBC74A7B3BA7DE491_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InlinedArray_1_System_Collections_IEnumerable_GetEnumerator_m814CC9E74318257EDDAFCA002C726DEE9CE01D08_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisIl2CppFullySharedGenericStruct_m8D42BD9F3A34A0C9A6BF4AA6104B9DAE7B629DE7_fshared_inline (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* InputControlList_1_ToArray_m61A57DF6EA035FADB3AFC858998677D6AFB628E7_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, bool ___0_dispose, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_gshared_inline (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Resize_TisIl2CppFullySharedGenericStruct_m8CBA4585E072FC19FA97B9185B76F96FB04CADC2_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_newSize, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputControlList_1_get_IsReadOnly_m055241CA43536059C1DF78259A3A1B4FEFECD7BE_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* InputControlList_1_FromIndex_m442B00B502638B69F62E6669FB5DEDFA50ED17B6_gshared (uint64_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* InputControlList_1_get_Item_m32281FBDE7E699572E48C84925EFBA9D731A5767_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InputControlList_1_ToIndex_mFDE26AE77A6581F2589932718D3BC2FD69E033DD_gshared (Il2CppSharedGenericObject* ___0_control, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_set_Item_m7FD3832080D510959722D0707BEAED9C520A77B1_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_set_Capacity_m25ABAD33A2CBB851EB36D5AAC60589CAF98ED250_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1__ctor_mB6B28245E1F880FEEA04CCE9B238C2767DBA1F0B_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_allocator, int32_t ___1_initialCapacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Add_mA8854B3625D5657F02003C62046620E38B0E40A3_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlList_1_get_Capacity_mBE468F95F5E377CB5D9D42223FF543B9448555A7_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericStruct_m3CE052066E241AAEA49347EE03362D788D2C4AB9_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t* ___1_count, Il2CppFullySharedGenericStruct ___2_value, int32_t ___3_capacityIncrement, int32_t ___4_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericStruct_m5A97B43CBBF791242EAC04B5E8CC3D9701690DD7_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputControlList_1_Remove_m17FD04E1FFFD6916E72F50AA4FA3C07CE2FB9C59_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_RemoveAt_mB579D468B0000919C624BF1D35FDDB3C43E91317_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_CopyTo_m7747E34F8F4CC4726FF99217DACD69DE3D0956F8_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlList_1_IndexOf_m7F4B6B8D4EEFB8C2B6294E0CD40E4279B56D1DF5_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlList_1_IndexOf_mCDEB5E92194101A81BE06B7B41B29CC7276E2D78_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Insert_mCDAF378A49E9B1A539CED823D80A7087E3176392_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Clear_m0276C95AD120462C9F94398DDDA75755B63FFB3F_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputControlList_1_Contains_m7BA29BC019345B8994B5D6CD741FDDF1A36A077B_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_SwapElements_TisIl2CppFullySharedGenericStruct_m0B01A34B30BEA683D319F3AEC4F2ABEFB36CBE55_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index1, int32_t ___2_index2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Dispose_m8A27BD8E0A8C118B0FF8E23A2CE3458C7B82771A_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD8A207CB41B6E1C5B7AA4A220CB03058AF6CC858_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4 ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControlList_1_GetEnumerator_m1B8EA6DBD6935CD678D05DF08391AAD01AF62D63_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControlList_1_System_Collections_IEnumerable_GetEnumerator_mDC729D11E38C2C3397DB6D5A1DE0A9ED45D16D21_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControlList_1_ToString_mEA39E74EBE4F19B7B9C6B05877D25DFCAF0D3414_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_fshared_inline (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) ;

inline int32_t Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A_fshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Copy_TisIl2CppFullySharedGenericAny_mCBAFE4FAA00288B66F1CCF0385F38023009DFF0F (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ArrayHelpers_Copy_TisIl2CppFullySharedGenericAny_mCBAFE4FAA00288B66F1CCF0385F38023009DFF0F_fshared)(___0_array, method);
}
inline void InlinedArray_1_set_Item_m9AF315CB1DC3C2D2118E0D067F899B774C6F5E8F (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))InlinedArray_1_set_Item_m9AF315CB1DC3C2D2118E0D067F899B774C6F5E8F_fshared)((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)__this, ___0_index, ___1_value, method);
}
inline void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_fshared)(___0_array, ___1_newSize, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Join_TisIl2CppFullySharedGenericAny_mBD7E08FAE557F56197D2EFEFF4F91E6EC8D256BC (Il2CppFullySharedGenericAny ___0_value, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Il2CppFullySharedGenericAny, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ArrayHelpers_Join_TisIl2CppFullySharedGenericAny_mBD7E08FAE557F56197D2EFEFF4F91E6EC8D256BC_fshared)(___0_value, ___1_values, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
inline int32_t ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericAny_m9F7345A47A2A570DC1D4E1EB2FB6EE86F5323295 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_count, Il2CppFullySharedGenericAny ___2_value, int32_t ___3_capacityIncrement, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t*, Il2CppFullySharedGenericAny, int32_t, const RuntimeMethod*))ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericAny_m9F7345A47A2A570DC1D4E1EB2FB6EE86F5323295_fshared)(___0_array, ___1_count, ___2_value, ___3_capacityIncrement, method);
}
inline int32_t InlinedArray_1_get_Capacity_mCCF5A3E0A6A2338FDA0E690FA4510EEEADBD9802 (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, const RuntimeMethod*))InlinedArray_1_get_Capacity_mCCF5A3E0A6A2338FDA0E690FA4510EEEADBD9802_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t InlinedArray_1_Append_mD98CE99B949E6C060644EA511BA1A43A920DC4DA (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, Il2CppFullySharedGenericAny, const RuntimeMethod*))InlinedArray_1_Append_mD98CE99B949E6C060644EA511BA1A43A920DC4DA_fshared)((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)__this, ___0_value, method);
}
inline void InlinedArray_1_RemoveAt_mD276B448C3B12DCA1B8AA28ABC4B7632C147721D (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, int32_t, const RuntimeMethod*))InlinedArray_1_RemoveAt_mD276B448C3B12DCA1B8AA28ABC4B7632C147721D_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
inline void ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericAny_m9459CCF36C0A36FDBD1E4C86B7C9E1F891EB6DA1 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t*, int32_t, const RuntimeMethod*))ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericAny_m9459CCF36C0A36FDBD1E4C86B7C9E1F891EB6DA1_fshared)(___0_array, ___1_count, ___2_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void ArrayHelpers_EraseAtByMovingTail_TisIl2CppFullySharedGenericAny_m8DD3D84F1C2708D1A4E4DE97376266B0131F9302 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t*, int32_t, const RuntimeMethod*))ArrayHelpers_EraseAtByMovingTail_TisIl2CppFullySharedGenericAny_m8DD3D84F1C2708D1A4E4DE97376266B0131F9302_fshared)(___0_array, ___1_count, ___2_index, method);
}
inline int32_t InlinedArray_1_IndexOf_m768BC79A0A65BB5C0350AA1D1F78AEF2D90FE2C5 (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, Il2CppFullySharedGenericAny, const RuntimeMethod*))InlinedArray_1_IndexOf_m768BC79A0A65BB5C0350AA1D1F78AEF2D90FE2C5_fshared)((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)__this, ___0_value, method);
}
inline void InlinedArray_1_RemoveAtByMovingTailWithCapacity_mFD9E61BCB0F1A1288BD31A4F2FB8B1CEB6504063 (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, int32_t, const RuntimeMethod*))InlinedArray_1_RemoveAtByMovingTailWithCapacity_mFD9E61BCB0F1A1288BD31A4F2FB8B1CEB6504063_fshared)(__this, ___0_index, method);
}
inline void InlinedArray_1_get_Item_m559A0B1FCFEC59844BBCB769C3C743C5F46A2201 (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))InlinedArray_1_get_Item_m559A0B1FCFEC59844BBCB769C3C743C5F46A2201_fshared)((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)__this, ___0_index, il2cppRetVal, method);
}
inline bool InlinedArray_1_Contains_m0242F511B2C1CCB418ACE7328A2C803568B8A065 (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, Il2CppFullySharedGenericAny, RuntimeObject*, const RuntimeMethod*))InlinedArray_1_Contains_m0242F511B2C1CCB418ACE7328A2C803568B8A065_fshared)((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)__this, ___0_value, ___1_comparer, method);
}
inline RuntimeObject* InlinedArray_1_GetEnumerator_m2F7C1450CA7DE6BDE2ADB92FBC74A7B3BA7DE491 (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, const RuntimeMethod*))InlinedArray_1_GetEnumerator_m2F7C1450CA7DE6BDE2ADB92FBC74A7B3BA7DE491_fshared)(__this, method);
}
inline RuntimeObject* InlinedArray_1_System_Collections_IEnumerable_GetEnumerator_m814CC9E74318257EDDAFCA002C726DEE9CE01D08 (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, const RuntimeMethod*))InlinedArray_1_System_Collections_IEnumerable_GetEnumerator_m814CC9E74318257EDDAFCA002C726DEE9CE01D08_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline void* UnsafeUtility_AddressOf_TisIl2CppFullySharedGenericStruct_m8D42BD9F3A34A0C9A6BF4AA6104B9DAE7B629DE7_inline (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtility_AddressOf_TisIl2CppFullySharedGenericStruct_m8D42BD9F3A34A0C9A6BF4AA6104B9DAE7B629DE7_fshared_inline)(___0_output, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A (InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0* __this, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* InputControlList_1_ToArray_m61A57DF6EA035FADB3AFC858998677D6AFB628E7 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, bool ___0_dispose, const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, bool, const RuntimeMethod*))InputControlList_1_ToArray_m61A57DF6EA035FADB3AFC858998677D6AFB628E7_gshared)(__this, ___0_dispose, method);
}
inline int32_t InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_inline (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, const RuntimeMethod*))InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_gshared_inline)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_mEB87E39B53D707EB3D802BD45DAA8C734FAB6AF2_inline (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m5CBF60E97954A416106547EF28316741B674D253 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared)(__this, method);
}
inline void ArrayHelpers_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m18F287528E2007346B9E9B721D3A51A2EE2B005B (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___0_array, int32_t ___1_newSize, int32_t ___2_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_Resize_TisIl2CppFullySharedGenericStruct_m8CBA4585E072FC19FA97B9185B76F96FB04CADC2_fshared)(___0_array, ___1_newSize, ___2_allocator, method);
}
inline bool InputControlList_1_get_IsReadOnly_m055241CA43536059C1DF78259A3A1B4FEFECD7BE (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, const RuntimeMethod*))InputControlList_1_get_IsReadOnly_m055241CA43536059C1DF78259A3A1B4FEFECD7BE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* InputControlList_1_FromIndex_m442B00B502638B69F62E6669FB5DEDFA50ED17B6 (uint64_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (uint64_t, const RuntimeMethod*))InputControlList_1_FromIndex_m442B00B502638B69F62E6669FB5DEDFA50ED17B6_gshared)(___0_index, method);
}
inline Il2CppSharedGenericObject* InputControlList_1_get_Item_m32281FBDE7E699572E48C84925EFBA9D731A5767 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, int32_t, const RuntimeMethod*))InputControlList_1_get_Item_m32281FBDE7E699572E48C84925EFBA9D731A5767_gshared)(__this, ___0_index, method);
}
inline uint64_t InputControlList_1_ToIndex_mFDE26AE77A6581F2589932718D3BC2FD69E033DD (Il2CppSharedGenericObject* ___0_control, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))InputControlList_1_ToIndex_mFDE26AE77A6581F2589932718D3BC2FD69E033DD_gshared)(___0_control, method);
}
inline void InputControlList_1_set_Item_m7FD3832080D510959722D0707BEAED9C520A77B1 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))InputControlList_1_set_Item_m7FD3832080D510959722D0707BEAED9C520A77B1_gshared)(__this, ___0_index, ___1_value, method);
}
inline void InputControlList_1_set_Capacity_m25ABAD33A2CBB851EB36D5AAC60589CAF98ED250 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, int32_t, const RuntimeMethod*))InputControlList_1_set_Capacity_m25ABAD33A2CBB851EB36D5AAC60589CAF98ED250_gshared)(__this, ___0_value, method);
}
inline void InputControlList_1__ctor_mB6B28245E1F880FEEA04CCE9B238C2767DBA1F0B (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_allocator, int32_t ___1_initialCapacity, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, int32_t, int32_t, const RuntimeMethod*))InputControlList_1__ctor_mB6B28245E1F880FEEA04CCE9B238C2767DBA1F0B_gshared)(__this, ___0_allocator, ___1_initialCapacity, method);
}
inline void InputControlList_1_Add_mA8854B3625D5657F02003C62046620E38B0E40A3 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, Il2CppSharedGenericObject*, const RuntimeMethod*))InputControlList_1_Add_mA8854B3625D5657F02003C62046620E38B0E40A3_gshared)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
inline int32_t InputControlList_1_get_Capacity_mBE468F95F5E377CB5D9D42223FF543B9448555A7 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, const RuntimeMethod*))InputControlList_1_get_Capacity_mBE468F95F5E377CB5D9D42223FF543B9448555A7_gshared)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0_inline (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___0_destination, uint8_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
inline int32_t ArrayHelpers_AppendWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAB527E70D2DFE8C564E67D6328A077D642EA9E25 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___0_array, int32_t* ___1_count, uint64_t ___2_value, int32_t ___3_capacityIncrement, int32_t ___4_allocator, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t*, Il2CppFullySharedGenericStruct, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericStruct_m3CE052066E241AAEA49347EE03362D788D2C4AB9_fshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)___0_array, ___1_count, (Il2CppFullySharedGenericStruct)&___2_value, ___3_capacityIncrement, ___4_allocator, method);
}
inline int32_t Enumerable_Count_TisIl2CppSharedGenericObject_mF3369EA7F96F7D6C91301FC628A8EBBFE1B16F82 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A_fshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void NativeArray_1_Copy_mBF4556275F19B6725B735C61ECAD5908787D71D4 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_src, int32_t ___1_srcIndex, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B, int32_t, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B, int32_t, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59_fshared)(___0_src, ___1_srcIndex, ___2_dst, ___3_dstIndex, ___4_length, method);
}
inline void ArrayHelpers_EraseAtWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m08E195F444F3FD889662E62194E060EB295E0037 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B, int32_t*, int32_t, const RuntimeMethod*))ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericStruct_m5A97B43CBBF791242EAC04B5E8CC3D9701690DD7_fshared)(___0_array, ___1_count, ___2_index, method);
}
inline bool InputControlList_1_Remove_m17FD04E1FFFD6916E72F50AA4FA3C07CE2FB9C59 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, Il2CppSharedGenericObject*, const RuntimeMethod*))InputControlList_1_Remove_m17FD04E1FFFD6916E72F50AA4FA3C07CE2FB9C59_gshared)(__this, ___0_item, method);
}
inline void InputControlList_1_RemoveAt_mB579D468B0000919C624BF1D35FDDB3C43E91317 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, int32_t, const RuntimeMethod*))InputControlList_1_RemoveAt_mB579D468B0000919C624BF1D35FDDB3C43E91317_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
inline void InputControlList_1_CopyTo_m7747E34F8F4CC4726FF99217DACD69DE3D0956F8 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, const RuntimeMethod*))InputControlList_1_CopyTo_m7747E34F8F4CC4726FF99217DACD69DE3D0956F8_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline int32_t InputControlList_1_IndexOf_m7F4B6B8D4EEFB8C2B6294E0CD40E4279B56D1DF5 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, Il2CppSharedGenericObject*, int32_t, int32_t, const RuntimeMethod*))InputControlList_1_IndexOf_m7F4B6B8D4EEFB8C2B6294E0CD40E4279B56D1DF5_gshared)(__this, ___0_item, ___1_startIndex, ___2_count, method);
}
inline int32_t InputControlList_1_IndexOf_mCDEB5E92194101A81BE06B7B41B29CC7276E2D78 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, Il2CppSharedGenericObject*, const RuntimeMethod*))InputControlList_1_IndexOf_mCDEB5E92194101A81BE06B7B41B29CC7276E2D78_gshared)(__this, ___0_item, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m44EAE568720002EAD1F4ECE1CBA62E756FB05AFA_inline (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
inline void InputControlList_1_Insert_mCDAF378A49E9B1A539CED823D80A7087E3176392 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))InputControlList_1_Insert_mCDAF378A49E9B1A539CED823D80A7087E3176392_gshared)(__this, ___0_index, ___1_item, method);
}
inline void InputControlList_1_Clear_m0276C95AD120462C9F94398DDDA75755B63FFB3F (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, const RuntimeMethod*))InputControlList_1_Clear_m0276C95AD120462C9F94398DDDA75755B63FFB3F_gshared)(__this, method);
}
inline bool InputControlList_1_Contains_m7BA29BC019345B8994B5D6CD741FDDF1A36A077B (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, Il2CppSharedGenericObject*, const RuntimeMethod*))InputControlList_1_Contains_m7BA29BC019345B8994B5D6CD741FDDF1A36A077B_gshared)(__this, ___0_item, method);
}
inline void ArrayHelpers_SwapElements_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m640045697F1A6F2BD8DE3B91C7F66A01A2B0617D (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_array, int32_t ___1_index1, int32_t ___2_index2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_SwapElements_TisIl2CppFullySharedGenericStruct_m0B01A34B30BEA683D319F3AEC4F2ABEFB36CBE55_fshared)(___0_array, ___1_index1, ___2_index2, method);
}
inline void InputControlList_1_Dispose_m8A27BD8E0A8C118B0FF8E23A2CE3458C7B82771A (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, const RuntimeMethod*))InputControlList_1_Dispose_m8A27BD8E0A8C118B0FF8E23A2CE3458C7B82771A_gshared)(__this, method);
}
inline int32_t ArrayHelpers_AppendWithCapacity_TisIl2CppSharedGenericObject_mA8071871C71EB89DDF53669DC9021222656DF1AD (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, int32_t* ___1_count, Il2CppSharedGenericObject* ___2_value, int32_t ___3_capacityIncrement, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t*, Il2CppFullySharedGenericAny, int32_t, const RuntimeMethod*))ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericAny_m9F7345A47A2A570DC1D4E1EB2FB6EE86F5323295_fshared)((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)___0_array, ___1_count, (Il2CppFullySharedGenericAny)___2_value, ___3_capacityIncrement, method);
}
inline void Enumerator__ctor_mD8A207CB41B6E1C5B7AA4A220CB03058AF6CC858 (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4 ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69*, InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4, const RuntimeMethod*))Enumerator__ctor_mD8A207CB41B6E1C5B7AA4A220CB03058AF6CC858_gshared)(__this, ___0_list, method);
}
inline RuntimeObject* InputControlList_1_GetEnumerator_m1B8EA6DBD6935CD678D05DF08391AAD01AF62D63 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, const RuntimeMethod*))InputControlList_1_GetEnumerator_m1B8EA6DBD6935CD678D05DF08391AAD01AF62D63_gshared)(__this, method);
}
inline RuntimeObject* InputControlList_1_System_Collections_IEnumerable_GetEnumerator_mDC729D11E38C2C3397DB6D5A1DE0A9ED45D16D21 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, const RuntimeMethod*))InputControlList_1_System_Collections_IEnumerable_GetEnumerator_mDC729D11E38C2C3397DB6D5A1DE0A9ED45D16D21_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
inline String_t* InputControlList_1_ToString_mEA39E74EBE4F19B7B9C6B05877D25DFCAF0D3414 (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*, const RuntimeMethod*))InputControlList_1_ToString_mEA39E74EBE4F19B7B9C6B05877D25DFCAF0D3414_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
inline int32_t ArrayHelpers_IndexOfReference_TisInputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_TisInputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_mFF3C6B920686BD33ABEB2D3CD00012EFCD857912 (InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___0_array, InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___1_value, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17*, InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, int32_t, const RuntimeMethod*))ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F_fshared)(___0_array, ___1_value, ___2_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputSystem_GetDeviceById_mC5C12308F6B71C9AAD24CFBB984E5C3C79F6C099 (int32_t ___0_deviceId, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
}
inline int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
inline void* UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_inline (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_fshared_inline)(___0_output, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 34343
// Method Definition Index: 34344
// Method Definition Index: 34345
// Method Definition Index: 34346
// Method Definition Index: 34347
// Method Definition Index: 34348
// Method Definition Index: 34349
// Method Definition Index: 34350
// Method Definition Index: 34351
// Method Definition Index: 34352
// Method Definition Index: 34353
// Method Definition Index: 34355
// Method Definition Index: 34356
// Method Definition Index: 34357
// Method Definition Index: 34358
// Method Definition Index: 34359
// Method Definition Index: 34360
// Method Definition Index: 34361
// Method Definition Index: 34362
// Method Definition Index: 34363
// Method Definition Index: 34364
// Method Definition Index: 34365
// Method Definition Index: 34366
// Method Definition Index: 34367
// Method Definition Index: 34368
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 34343
// Method Definition Index: 34344
// Method Definition Index: 34345
// Method Definition Index: 34346
// Method Definition Index: 34347
// Method Definition Index: 34348
// Method Definition Index: 34349
// Method Definition Index: 34350
// Method Definition Index: 34351
// Method Definition Index: 34352
// Method Definition Index: 34353
// Method Definition Index: 34355
// Method Definition Index: 34356
// Method Definition Index: 34357
// Method Definition Index: 34358
// Method Definition Index: 34359
// Method Definition Index: 34360
// Method Definition Index: 34361
// Method Definition Index: 34362
// Method Definition Index: 34363
// Method Definition Index: 34364
// Method Definition Index: 34365
// Method Definition Index: 34366
// Method Definition Index: 34367
// Method Definition Index: 34368
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 34343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InlinedArray_1_get_Capacity_mCCF5A3E0A6A2338FDA0E690FA4510EEEADBD9802_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77907));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77908));
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B2_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77909));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
		G_B1_0 = L_1;
	}
	{
		G_B3_0 = 1;
		goto IL_0011;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)G_B2_0)->max_length),NULL));
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0011:
	{
		return G_B3_0;
	}
}
// Method Definition Index: 34344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1__ctor_mDCD02FE1BC2BE32BB54840E59D68173435E4AE79_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77910));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77911));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77912));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77913));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), 1);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:32>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77914));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:33>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77915));
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:34>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77916));
		return;
	}
}
// Method Definition Index: 34345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1__ctor_m110AA4CBF23C99CCE8B61AA1B149FE13F7BDB5C7_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_firstValue, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_additionalValues, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_firstValue : &___0_firstValue), (&___1_additionalValues));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77917));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77918));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77919));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:38>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77920));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___1_additionalValues;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(1, L_1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:39>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77921));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_firstValue : &___0_firstValue), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_2, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:40>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77922));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_additionalValues;
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_3);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:41>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77923));
		return;
	}
}
// Method Definition Index: 34346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1__ctor_m794FFE720732B973BF3A2FE07516AFAEC25CB3BB_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, RuntimeObject* ___0_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_14 = L_11;
	const Il2CppFullySharedGenericAny L_17 = L_11;
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	memset(V_3, 0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_3);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77924));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77925));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:44>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77926));
		il2cpp_codegen_initobj(__this, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77927));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:46>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77928));
		RuntimeObject* L_0 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77929));
		int32_t L_1;
		L_1 = Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77929));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_1);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:47>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77930));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77931));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:48>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77932));
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), (uint32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1)));
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77933));
		goto IL_003d;
	}

IL_0036:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:50>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77934));
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:52>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77935));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77936));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:53>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77937));
		RuntimeObject* L_6 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77938));
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77938));
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77952));
					RuntimeObject* L_8 = V_2;
					if (!L_8)
					{
						goto IL_008c;
					}
				}
				{
					RuntimeObject* L_9 = V_2;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77953));
					NullCheck((RuntimeObject*)L_9);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77953));
				}

IL_008c:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77954));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77939));
				goto IL_0078_1;
			}

IL_0049_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:53>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77940));
				RuntimeObject* L_10 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77941));
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77941));
				il2cpp_codegen_memcpy(V_3, L_11, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77942));
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:55>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77943));
				int32_t L_12 = V_0;
				V_4 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77944));
				bool L_13 = V_4;
				if (!L_13)
				{
					goto IL_0064_1;
				}
			}
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:56>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77945));
				il2cpp_codegen_memcpy(L_14, V_3, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
				il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_14, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77946));
				goto IL_0073_1;
			}

IL_0064_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:58>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77947));
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
				int32_t L_16 = V_0;
				il2cpp_codegen_memcpy(L_17, V_3, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
				NullCheck(L_15);
				il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_16, 1)))), L_17, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_16, 1)))), (void*)L_17);
			}

IL_0073_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:59>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77948));
				int32_t L_18 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77949));
			}

IL_0078_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:53>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77950));
				RuntimeObject* L_19 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77951));
				NullCheck((RuntimeObject*)L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77951));
				if (L_20)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_008d;
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

IL_008d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77955));
		return;
	}
}
// Method Definition Index: 34347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_get_Item_m559A0B1FCFEC59844BBCB769C3C743C5F46A2201_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_11 = L_7;
	const Il2CppFullySharedGenericAny L_12 = L_7;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	memset(V_2, 0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77956));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77957));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77958));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:67>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77959));
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77960));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:68>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77961));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77962));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77962));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:70>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77963));
		int32_t L_5 = ___0_index;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77964));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:71>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77965));
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(V_2, L_7, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		goto IL_0045;
	}

IL_0034:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:73>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77966));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(V_2, L_11, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		goto IL_0045;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:74>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77967));
		il2cpp_codegen_memcpy(L_12, V_2, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		return;
	}
}
// Method Definition Index: 34348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_set_Item_m9AF315CB1DC3C2D2118E0D067F899B774C6F5E8F_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_10 = L_7;
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77968));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77969));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77970));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:77>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77971));
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77972));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:78>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77973));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77974));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77974));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:80>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77975));
		int32_t L_5 = ___0_index;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77976));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77977));
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_value : &___1_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_7, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77978));
		goto IL_0043;
	}

IL_0034:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:83>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77979));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_9 = ___0_index;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_value : &___1_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_9, 1)))), L_10, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_9, 1)))), (void*)L_10);
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:84>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77980));
		return;
	}
}
// Method Definition Index: 34349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_Clear_m631089AE53D34CFE17FE84B5C40BB48B807ADEDB_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77981));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77982));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77983));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77984));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), 0);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:90>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77985));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:91>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77986));
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:92>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77987));
		return;
	}
}
// Method Definition Index: 34350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_ClearWithCapacity_mD5DF7D5EF6E60D612E51EB579881396B1E84674B_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	memset(V_1, 0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77988));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77989));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77990));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:96>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77991));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:97>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77992));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77993));
		goto IL_002a;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:98>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77994));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_1 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(L_2, V_1, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)), L_2, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)), (void*)L_2);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:97>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77995));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:97>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77996));
		int32_t L_4 = V_0;
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77997));
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_0011;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:99>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77998));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), 0);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:100>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77999));
		return;
	}
}
// Method Definition Index: 34351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_Clone_m565C6D416BBBD335802C6A451002530267D9922F_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 L_5 = alloca(SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
	const InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 L_6 = L_5;
	InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 V_0 = alloca(SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
	memset(V_0, 0, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
	InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 V_1 = alloca(SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
	memset(V_1, 0, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78000));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78001));
	InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* G_B2_0 = NULL;
	InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* G_B1_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B3_0 = NULL;
	InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78002));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:105>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:106>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:107>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:108>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:109>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:110>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78003));
		il2cpp_codegen_initobj((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)V_0, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_1, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (L_2)
		{
			G_B2_0 = ((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)(InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)V_0);
			goto IL_0030;
		}
		G_B1_0 = ((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)(InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)V_0);
	}
	{
		G_B3_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(NULL));
		G_B3_1 = ((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)G_B1_0);
		goto IL_003b;
	}

IL_0030:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78004));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
		L_4 = ArrayHelpers_Copy_TisIl2CppFullySharedGenericAny_mCBAFE4FAA00288B66F1CCF0385F38023009DFF0F(L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78004));
		G_B3_0 = L_4;
		G_B3_1 = ((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)G_B2_0);
	}

IL_003b:
	{
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(G_B3_1, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), G_B3_0);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		goto IL_0044;
	}

IL_0044:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:111>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78005));
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		return;
	}
}
// Method Definition Index: 34352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_SetLength_m9D159F9486ECFD48EF681555E525CC09BAF95B66_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	memset(V_2, 0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_size));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78006));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78007));
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78008));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:116>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78009));
		int32_t L_0 = ___0_size;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78010));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78011));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78012));
		int32_t L_3 = ___0_size;
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78013));
		goto IL_0028;
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78014));
		int32_t L_4 = V_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(L_5, V_2, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78015));
		InlinedArray_1_set_Item_m9AF315CB1DC3C2D2118E0D067F899B774C6F5E8F(__this, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? il2cpp_codegen_memcpy(L_6, L_5, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A): *(void**)L_5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78015));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78016));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78017));
		int32_t L_8 = V_1;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78018));
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_0013;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78019));
	}

IL_0036:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78020));
		int32_t L_11 = ___0_size;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_11);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:124>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78021));
		int32_t L_12 = ___0_size;
		if ((((int32_t)L_12) <= ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___0_size;
		G_B9_0 = ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1))))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B9_0 = 1;
	}

IL_0059:
	{
		G_B11_0 = G_B9_0;
		goto IL_005c;
	}

IL_005b:
	{
		G_B11_0 = 0;
	}

IL_005c:
	{
		V_4 = (bool)G_B11_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78022));
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0071;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:125>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78023));
		int32_t L_18 = ___0_size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78024));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712((((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), ((int32_t)il2cpp_codegen_subtract(L_18, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78024));
	}

IL_0071:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:126>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78025));
		return;
	}
}
// Method Definition Index: 34353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* InlinedArray_1_ToArray_mBC38AB66FBB7DCD9FD62C19077D907BBDEBAC6C3_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78026));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78027));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78028));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:130>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78029));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78030));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = ArrayHelpers_Join_TisIl2CppFullySharedGenericAny_mBD7E08FAE557F56197D2EFEFF4F91E6EC8D256BC((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A): *(void**)L_0), L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78030));
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:131>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78031));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 34355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InlinedArray_1_IndexOf_m768BC79A0A65BB5C0350AA1D1F78AEF2D90FE2C5_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_14 = L_4;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_15 = L_5;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78049));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78050));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78051));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:147>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78052));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78053));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78053));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:148>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78054));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78055));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78056));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:150>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78057));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3 = V_0;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78058));
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_5: *(void**)L_5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78058));
		V_2 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78059));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:151>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78060));
		V_3 = 0;
		goto IL_007e;
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:152>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78061));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_4 = (bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78062));
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78063));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78064));
		V_5 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78065));
		goto IL_0066;
	}

IL_003f:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:155>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78066));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		il2cpp_codegen_memcpy(L_14, (L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78067));
		NullCheck(L_10);
		bool L_16;
		L_16 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_15: *(void**)L_15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78067));
		V_6 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78068));
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:156>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78069));
		int32_t L_18 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_007e;
	}

IL_0060:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78070));
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0066:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78071));
		int32_t L_20 = V_5;
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78072));
		bool L_22 = V_7;
		if (L_22)
		{
			goto IL_003f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78073));
	}

IL_0079:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78074));
	}

IL_007a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:160>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78075));
		V_3 = (-1);
		goto IL_007e;
	}

IL_007e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78076));
		int32_t L_23 = V_3;
		return L_23;
	}
}
// Method Definition Index: 34356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InlinedArray_1_Append_mD98CE99B949E6C060644EA511BA1A43A920DC4DA_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_7 = L_2;
	const Il2CppFullySharedGenericAny L_11 = L_2;
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78077));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78078));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78079));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:165>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78080));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78081));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78082));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:167>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78083));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_2, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78084));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78085));
		goto IL_006b;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:169>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78086));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_2 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78087));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78088));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78089));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), (uint32_t)1);
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_5);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78090));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), L_7, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), (void*)L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78091));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78092));
		goto IL_006b;
	}

IL_0043:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78093));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:176>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78094));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78095));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712((((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78095));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:177>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78096));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		NullCheck(L_9);
		il2cpp_codegen_memcpy((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_10, 1)))), L_11, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_10, 1)))), (void*)L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78097));
	}

IL_006b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:180>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78098));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_0 = L_12;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:181>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78099));
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_13, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:182>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78100));
		int32_t L_14 = V_0;
		V_3 = L_14;
		goto IL_0084;
	}

IL_0084:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:183>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78101));
		int32_t L_15 = V_3;
		return L_15;
	}
}
// Method Definition Index: 34357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InlinedArray_1_AppendWithCapacity_m284A6934B7E03A25141D0E348AD204C9AA4EC383_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, int32_t ___1_capacityIncrement, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), (&___1_capacityIncrement));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78102));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78103));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78104));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:187>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78105));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78106));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78107));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:189>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78108));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_2, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78109));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78110));
		goto IL_0034;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78111));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:193>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78112));
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:194>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78113));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		int32_t L_5 = ___1_capacityIncrement;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78114));
		int32_t L_7;
		L_7 = ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericAny_m9F7345A47A2A570DC1D4E1EB2FB6EE86F5323295((((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), (&V_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A): *(void**)L_4), L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78114));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78115));
	}

IL_0034:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:197>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78116));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_0 = L_8;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:198>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78117));
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_9, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:199>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78118));
		int32_t L_10 = V_0;
		V_3 = L_10;
		goto IL_004d;
	}

IL_004d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:200>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78119));
		int32_t L_11 = V_3;
		return L_11;
	}
}
// Method Definition Index: 34358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_AssignWithCapacity_m69BD0D08A5EE155682ED2E9A6956F4CD936C112E_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 ___0_values, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 L_1 = alloca(SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
	const InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 L_3 = L_1;
	const InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 L_6 = L_1;
	const InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 L_9 = L_1;
	const InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 L_13 = L_1;
	const InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 L_17 = L_1;
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_values : &___0_values));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78120));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78121));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78122));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:204>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78123));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78124));
		int32_t L_0;
		L_0 = InlinedArray_1_get_Capacity_mCCF5A3E0A6A2338FDA0E690FA4510EEEADBD9802(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78124));
		il2cpp_codegen_memcpy(L_1, ___0_values, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_1, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, ___0_values, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_3, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		G_B3_0 = ((((int32_t)L_4) > ((int32_t)1))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78125));
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:205>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78126));
		il2cpp_codegen_memcpy(L_6, ___0_values, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), (uint32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)));
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_8);
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:207>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78127));
		il2cpp_codegen_memcpy(L_9, ___0_values, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_10);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:208>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78128));
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_1 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78129));
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:209>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78130));
		il2cpp_codegen_memcpy(L_13, ___0_values, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_14, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	}

IL_0057:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78131));
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_2 = (bool)((((int32_t)L_15) > ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78132));
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_007e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:211>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78133));
		il2cpp_codegen_memcpy(L_17, ___0_values, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78134));
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_18, (RuntimeArray*)L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78134));
	}

IL_007e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78135));
		return;
	}
}
// Method Definition Index: 34359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_Append_mAC8AE7C303BD612C0045F963A946E62C0CCF2562_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, RuntimeObject* ___0_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	memset(V_1, 0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78136));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78137));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78138));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78139));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:216>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78140));
		RuntimeObject* L_0 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78141));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78141));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78149));
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78150));
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78150));
				}

IL_002e:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78151));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78142));
				goto IL_001a_1;
			}

IL_000b_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:216>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78143));
				RuntimeObject* L_4 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78144));
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_4, (Il2CppFullySharedGenericAny*)L_5);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78144));
				il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:217>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78145));
				il2cpp_codegen_memcpy(L_6, V_1, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78146));
				int32_t L_8;
				L_8 = InlinedArray_1_Append_mD98CE99B949E6C060644EA511BA1A43A920DC4DA(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? il2cpp_codegen_memcpy(L_7, L_6, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A): *(void**)L_6), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78146));
			}

IL_001a_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:216>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78147));
				RuntimeObject* L_9 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78148));
				NullCheck((RuntimeObject*)L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78148));
				if (L_10)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_002f;
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

IL_002f:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:218>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78152));
		return;
	}
}
// Method Definition Index: 34360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_Remove_m47405FBC583D3E40D5B6BF58C44B34E85B358906_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_13 = L_3;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_14 = L_4;
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78153));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78154));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78155));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:222>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78156));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78157));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78158));
		goto IL_0085;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78159));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78160));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78160));
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78161));
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_4: *(void**)L_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78161));
		V_1 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78162));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78163));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:227>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78164));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78165));
		InlinedArray_1_RemoveAt_mD276B448C3B12DCA1B8AA28ABC4B7632C147721D(__this, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78165));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78166));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78167));
		goto IL_0085;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:229>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78168));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_2 = (bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78169));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0085;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78170));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:231>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78171));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78172));
		goto IL_0073;
	}

IL_0043:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78173));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:233>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78174));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78175));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_9;
		L_9 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78175));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		il2cpp_codegen_memcpy(L_13, (L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78176));
		NullCheck(L_9);
		bool L_15;
		L_15 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_14: *(void**)L_14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78176));
		V_4 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78177));
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78178));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:235>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78179));
		int32_t L_17 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78180));
		InlinedArray_1_RemoveAt_mD276B448C3B12DCA1B8AA28ABC4B7632C147721D(__this, ((int32_t)il2cpp_codegen_add(L_17, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78180));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78181));
		goto IL_0084;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78182));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:231>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78183));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0073:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:231>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78184));
		int32_t L_19 = V_3;
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_5 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78185));
		bool L_21 = V_5;
		if (L_21)
		{
			goto IL_0043;
		}
	}

IL_0084:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78186));
	}

IL_0085:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:240>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78187));
		return;
	}
}
// Method Definition Index: 34361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_RemoveAtWithCapacity_m29FC21478A8E9370EEAC52E03FC762211B131D4A_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_19 = L_13;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	memset(V_4, 0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_5), (&V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78188));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78189));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78190));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:244>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78191));
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78192));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:245>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78193));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78194));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78194));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:247>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78195));
		int32_t L_5 = ___0_index;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78196));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_00c4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78197));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78198));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78199));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78200));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:251>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78201));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78202));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78203));
		goto IL_00c1;
	}

IL_004c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:253>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78204));
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78205));
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0085;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78206));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78207));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_11);
		int32_t L_12 = 0;
		il2cpp_codegen_memcpy(L_13, (L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_13, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:256>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78208));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(L_15, V_4, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		NullCheck(L_14);
		il2cpp_codegen_memcpy((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), L_15, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), (void*)L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78209));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78210));
		goto IL_00c1;
	}

IL_0085:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78211));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:260>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78212));
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78213));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_16) > ((int32_t)2))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78213));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:261>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78214));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_17);
		int32_t L_18 = 0;
		il2cpp_codegen_memcpy(L_19, (L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_19, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:262>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78215));
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:263>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78216));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78217));
		ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericAny_m9459CCF36C0A36FDBD1E4C86B7C9E1F891EB6DA1(L_21, (&V_5), 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78217));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78218));
	}

IL_00c1:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78219));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78220));
		goto IL_00e1;
	}

IL_00c4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78221));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:268>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78222));
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78223));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_24 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78224));
		ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericAny_m9459CCF36C0A36FDBD1E4C86B7C9E1F891EB6DA1(L_23, (&V_6), ((int32_t)il2cpp_codegen_subtract(L_24, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78224));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78225));
	}

IL_00e1:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:272>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78226));
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_subtract(L_25, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:273>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78227));
		return;
	}
}
// Method Definition Index: 34362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_RemoveAt_mD276B448C3B12DCA1B8AA28ABC4B7632C147721D_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_7 = NULL;
	bool V_8 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_4), (&V_7));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78228));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78229));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78230));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:277>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78231));
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78232));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:278>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78233));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78234));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78234));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:280>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78235));
		int32_t L_5 = ___0_index;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78236));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_00b4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78237));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:282>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78238));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_2 = (bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78239));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00a0;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78240));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:284>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78241));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_9);
		int32_t L_10 = 0;
		il2cpp_codegen_memcpy(L_11, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_11, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:285>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78242));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78243));
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:286>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78244));
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78245));
		goto IL_009d;
	}

IL_0067:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78246));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:289>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78247));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78248));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 1, (RuntimeArray*)L_16, 0, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78248));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:290>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78249));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78250));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712((((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), ((int32_t)il2cpp_codegen_subtract(L_20, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78250));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78251));
	}

IL_009d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78252));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78253));
		goto IL_00ae;
	}

IL_00a0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78254));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:295>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78255));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78256));
	}

IL_00ae:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78257));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78258));
		goto IL_0161;
	}

IL_00b4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78259));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78260));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78261));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78261));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:302>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78262));
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:303>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78263));
		int32_t L_23 = V_4;
		V_5 = (bool)((((int32_t)L_23) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78264));
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00e4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78265));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:306>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78266));
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78267));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78268));
		goto IL_0160;
	}

IL_00e4:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:308>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78269));
		int32_t L_25 = ___0_index;
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_6 = (bool)((((int32_t)L_25) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_26, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78270));
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_0109;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78271));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:311>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78272));
		int32_t L_28 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78273));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712((((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), ((int32_t)il2cpp_codegen_subtract(L_28, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78273));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78274));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78275));
		goto IL_0160;
	}

IL_0109:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78276));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:317>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78277));
		int32_t L_29 = V_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), (uint32_t)((int32_t)il2cpp_codegen_subtract(L_29, 1)));
		V_7 = L_30;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:318>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78278));
		int32_t L_31 = ___0_index;
		V_8 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78279));
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0137;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78280));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:321>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78281));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = V_7;
		int32_t L_35 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78282));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_33, 0, (RuntimeArray*)L_34, 0, ((int32_t)il2cpp_codegen_subtract(L_35, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78282));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78283));
	}

IL_0137:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:326>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:327>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78284));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_37 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = V_7;
		int32_t L_39 = ___0_index;
		int32_t L_40 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_41 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78285));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_36, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_37, 1)), 1)), (RuntimeArray*)L_38, ((int32_t)il2cpp_codegen_subtract(L_39, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_40, L_41)), 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78285));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:329>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78286));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = V_7;
		il2cpp_codegen_write_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_42);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78287));
	}

IL_0160:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78288));
	}

IL_0161:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78289));
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_subtract(L_43, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:334>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78290));
		return;
	}
}
// Method Definition Index: 34363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_RemoveAtByMovingTailWithCapacity_mFD9E61BCB0F1A1288BD31A4F2FB8B1CEB6504063_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	memset(V_4, 0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78291));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78292));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78293));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:338>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78294));
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78295));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:339>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78296));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78297));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78297));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78298));
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:342>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78299));
		int32_t L_6 = ___0_index;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78300));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0083;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78301));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78302));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_3 = (bool)((((int32_t)L_8) > ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78303));
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78304));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78305));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_memcpy(L_13, (L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_13, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78306));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_15 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		il2cpp_codegen_memcpy(L_16, V_4, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		NullCheck(L_14);
		il2cpp_codegen_memcpy((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_15, 1)))), L_16, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_15, 1)))), (void*)L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78307));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78308));
		goto IL_0080;
	}

IL_0072:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78309));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78310));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78311));
	}

IL_0080:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78312));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78313));
		goto IL_00a5;
	}

IL_0083:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78314));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:356>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78315));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78316));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78316));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:358>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78317));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_19 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78318));
		ArrayHelpers_EraseAtByMovingTail_TisIl2CppFullySharedGenericAny_m8DD3D84F1C2708D1A4E4DE97376266B0131F9302(L_18, (&V_0), ((int32_t)il2cpp_codegen_subtract(L_19, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78318));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78319));
	}

IL_00a5:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78320));
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_subtract(L_20, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78321));
		return;
	}
}
// Method Definition Index: 34364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InlinedArray_1_RemoveByMovingTailWithCapacity_mCABC59F8C8575BB0EB1AD3A5540E975F15D9E9B1_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78322));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78323));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78324));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:366>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78325));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78326));
		int32_t L_2;
		L_2 = InlinedArray_1_IndexOf_m768BC79A0A65BB5C0350AA1D1F78AEF2D90FE2C5(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A): *(void**)L_0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78326));
		V_0 = L_2;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78327));
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78328));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:368>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78329));
		V_2 = (bool)0;
		goto IL_0021;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:370>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78330));
		int32_t L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78331));
		InlinedArray_1_RemoveAtByMovingTailWithCapacity_mFD9E61BCB0F1A1288BD31A4F2FB8B1CEB6504063(__this, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78331));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:371>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78332));
		V_2 = (bool)1;
		goto IL_0021;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:372>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78333));
		bool L_6 = V_2;
		return L_6;
	}
}
// Method Definition Index: 34365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InlinedArray_1_Contains_m0242F511B2C1CCB418ACE7328A2C803568B8A065_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, Il2CppFullySharedGenericAny ___0_value, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), (&___1_comparer));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78334));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78335));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78336));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:376>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78337));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78338));
		goto IL_001f;
	}

IL_0005:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:377>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78339));
		RuntimeObject* L_0 = ___1_comparer;
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78340));
		InlinedArray_1_get_Item_m559A0B1FCFEC59844BBCB769C3C743C5F46A2201(__this, L_1, (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78340));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78341));
		NullCheck(L_0);
		bool L_4;
		L_4 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 30), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_3: *(void**)L_3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78341));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78342));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:378>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78343));
		V_2 = (bool)1;
		goto IL_0030;
	}

IL_001b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:376>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78344));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:376>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78345));
		int32_t L_7 = V_0;
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78346));
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:379>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78347));
		V_2 = (bool)0;
		goto IL_0030;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:380>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78348));
		bool L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 34366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_Merge_m1536C2AD20E18E1BFC1C7D4996737413394D2E17_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const Il2CppFullySharedGenericAny L_9 = L_3;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	const InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 L_13 = alloca(SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	memset(V_2, 0, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_other : &___0_other));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), V_2);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78349));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78350));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78351));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:384>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78352));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78353));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78353));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:385>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78354));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78355));
		goto IL_0030;
	}

IL_000b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78356));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:387>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78357));
		int32_t L_1 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78358));
		InlinedArray_1_get_Item_m559A0B1FCFEC59844BBCB769C3C743C5F46A2201((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)___0_other, L_1, (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78358));
		il2cpp_codegen_memcpy(V_2, L_2, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:388>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78359));
		il2cpp_codegen_memcpy(L_3, V_2, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78360));
		bool L_6;
		L_6 = InlinedArray_1_Contains_m0242F511B2C1CCB418ACE7328A2C803568B8A065(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? il2cpp_codegen_memcpy(L_5, L_3, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A): *(void**)L_3), (RuntimeObject*)L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78360));
		V_3 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78361));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:389>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78362));
		goto IL_002c;
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:392>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78363));
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78364));
		int32_t L_10;
		L_10 = InlinedArray_1_Append_mD98CE99B949E6C060644EA511BA1A43A920DC4DA(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TValue_t176AD67EA5ECC867D7243B4A39CAFEE9B2FCC89A): *(void**)L_8), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78364));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78365));
	}

IL_002c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:385>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78366));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:385>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78367));
		int32_t L_12 = V_1;
		il2cpp_codegen_memcpy(L_13, ___0_other, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)L_14))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78368));
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:394>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78369));
		return;
	}
}
// Method Definition Index: 34367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InlinedArray_1_GetEnumerator_m2F7C1450CA7DE6BDE2ADB92FBC74A7B3BA7DE491_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_Enumerator_tFC56901C12F45A39A526B2811C639059EEE617DE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33));
	const uint32_t SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092 L_1 = alloca(SizeOf_Enumerator_tFC56901C12F45A39A526B2811C639059EEE617DE);
	const InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3 L_0 = alloca(SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
	Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092 V_0 = alloca(SizeOf_Enumerator_tFC56901C12F45A39A526B2811C639059EEE617DE);
	memset(V_0, 0, SizeOf_Enumerator_tFC56901C12F45A39A526B2811C639059EEE617DE);
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78370));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78371));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78372));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:398>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78373));
		il2cpp_codegen_initobj((Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092*)V_0, SizeOf_Enumerator_tFC56901C12F45A39A526B2811C639059EEE617DE);
		il2cpp_codegen_memcpy(L_0, __this, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		il2cpp_codegen_write_field_data<true>((Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 34), L_0, SizeOf_InlinedArray_1_t8FE416A8F3CCF1C3BBCEDE39ABFC7505B308435E);
		il2cpp_codegen_write_field_data<int32_t, false>((Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 35), (-1));
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_Enumerator_tFC56901C12F45A39A526B2811C639059EEE617DE);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33), L_1);
		V_1 = (RuntimeObject*)L_2;
		goto IL_0027;
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:399>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78374));
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* InlinedArray_1_GetEnumerator_m2F7C1450CA7DE6BDE2ADB92FBC74A7B3BA7DE491_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3>(__this);
	RuntimeObject* _returnValue;
	_returnValue = InlinedArray_1_GetEnumerator_m2F7C1450CA7DE6BDE2ADB92FBC74A7B3BA7DE491(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 34368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InlinedArray_1_System_Collections_IEnumerable_GetEnumerator_m814CC9E74318257EDDAFCA002C726DEE9CE01D08_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78375));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78376));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78377));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:403>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78378));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78379));
		RuntimeObject* L_0;
		L_0 = InlinedArray_1_GetEnumerator_m2F7C1450CA7DE6BDE2ADB92FBC74A7B3BA7DE491(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 37));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78379));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/InlinedArray.cs:404>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78380));
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* InlinedArray_1_System_Collections_IEnumerable_GetEnumerator_m814CC9E74318257EDDAFCA002C726DEE9CE01D08_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3>(__this);
	RuntimeObject* _returnValue;
	_returnValue = InlinedArray_1_System_Collections_IEnumerable_GetEnumerator_m814CC9E74318257EDDAFCA002C726DEE9CE01D08(_thisAdjusted, method);
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
// Method Definition Index: 34343
// Method Definition Index: 34344
// Method Definition Index: 34345
// Method Definition Index: 34346
// Method Definition Index: 34347
// Method Definition Index: 34348
// Method Definition Index: 34349
// Method Definition Index: 34350
// Method Definition Index: 34351
// Method Definition Index: 34352
// Method Definition Index: 34353
// Method Definition Index: 34355
// Method Definition Index: 34356
// Method Definition Index: 34357
// Method Definition Index: 34358
// Method Definition Index: 34359
// Method Definition Index: 34360
// Method Definition Index: 34361
// Method Definition Index: 34362
// Method Definition Index: 34363
// Method Definition Index: 34364
// Method Definition Index: 34365
// Method Definition Index: 34366
// Method Definition Index: 34367
// Method Definition Index: 34368
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 34343
// Method Definition Index: 34344
// Method Definition Index: 34345
// Method Definition Index: 34346
// Method Definition Index: 34347
// Method Definition Index: 34348
// Method Definition Index: 34349
// Method Definition Index: 34350
// Method Definition Index: 34351
// Method Definition Index: 34352
// Method Definition Index: 34353
// Method Definition Index: 34355
// Method Definition Index: 34356
// Method Definition Index: 34357
// Method Definition Index: 34358
// Method Definition Index: 34359
// Method Definition Index: 34360
// Method Definition Index: 34361
// Method Definition Index: 34362
// Method Definition Index: 34363
// Method Definition Index: 34364
// Method Definition Index: 34365
// Method Definition Index: 34366
// Method Definition Index: 34367
// Method Definition Index: 34368
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 34343
// Method Definition Index: 34344
// Method Definition Index: 34345
// Method Definition Index: 34346
// Method Definition Index: 34347
// Method Definition Index: 34348
// Method Definition Index: 34349
// Method Definition Index: 34350
// Method Definition Index: 34351
// Method Definition Index: 34352
// Method Definition Index: 34353
// Method Definition Index: 34355
// Method Definition Index: 34356
// Method Definition Index: 34357
// Method Definition Index: 34358
// Method Definition Index: 34359
// Method Definition Index: 34360
// Method Definition Index: 34361
// Method Definition Index: 34362
// Method Definition Index: 34363
// Method Definition Index: 34364
// Method Definition Index: 34365
// Method Definition Index: 34366
// Method Definition Index: 34367
// Method Definition Index: 34368
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30106
// Method Definition Index: 30107
// Method Definition Index: 30109
// Method Definition Index: 30110
// Method Definition Index: 30111
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30106
// Method Definition Index: 30107
// Method Definition Index: 30109
// Method Definition Index: 30110
// Method Definition Index: 30111
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30106
// Method Definition Index: 30107
// Method Definition Index: 30109
// Method Definition Index: 30110
// Method Definition Index: 30111
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30106
// Method Definition Index: 30107
// Method Definition Index: 30109
// Method Definition Index: 30110
// Method Definition Index: 30111
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30106
// Method Definition Index: 30107
// Method Definition Index: 30109
// Method Definition Index: 30110
// Method Definition Index: 30111
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30106
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* InputBindingComposite_1_get_valueType_m2BFD255E9AE918383429C1AA29B59C48E1A22F69_fshared (InputBindingComposite_1_t98486D7ED7AEBFE8ABEE6EF136219EF0B2D18B09* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16111));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16112));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:287>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16113));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16114));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16114));
		return L_1;
	}
}
// Method Definition Index: 30107
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBindingComposite_1_get_valueSizeInBytes_mA4C6735FA94DE963D9068618DD66766FCA054A02_fshared (InputBindingComposite_1_t98486D7ED7AEBFE8ABEE6EF136219EF0B2D18B09* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16115));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16116));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:293>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16117));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16118));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16118));
		return L_0;
	}
}
// Method Definition Index: 30109
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1_ReadValue_m2A97E6A5728B1055D44FFDC82BB273CFC70ADBAD_fshared (InputBindingComposite_1_t98486D7ED7AEBFE8ABEE6EF136219EF0B2D18B09* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, void* ___1_buffer, int32_t ___2_bufferSize, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B);
	memset(V_1, 0, SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B);
	void* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context), (&___1_buffer), (&___2_bufferSize));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16119));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16120));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16121));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:331>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16122));
		void* L_0 = ___1_buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16123));
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:332>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16124));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16125));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16125));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:334>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16126));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16127));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16127));
		V_0 = L_4;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16128));
		int32_t L_5 = ___2_bufferSize;
		int32_t L_6 = V_0;
		V_4 = (bool)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16129));
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:336>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:337>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:338>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16130));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16131));
		int32_t L_8;
		L_8 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16131));
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		int32_t L_11 = ___2_bufferSize;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16132));
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5087AA321712F96C5FBDD78208956F7623FAD0D5)), L_10, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16132));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16133));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_15, L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16133));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_004a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:340>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16134));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_16 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16135));
		VirtualActionInvoker2Invoker< InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390*, Il2CppFullySharedGenericStruct* >::Invoke(10, __this, L_16, (Il2CppFullySharedGenericStruct*)L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16135));
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16136));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16137));
		void* L_18;
		L_18 = UnsafeUtility_AddressOf_TisIl2CppFullySharedGenericStruct_m8D42BD9F3A34A0C9A6BF4AA6104B9DAE7B629DE7_inline((Il2CppFullySharedGenericStruct*)V_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16137));
		V_2 = L_18;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16138));
		void* L_19 = ___1_buffer;
		void* L_20 = V_2;
		int32_t L_21 = V_0;
		int64_t L_22 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_21,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16139));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_19, L_20, L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16139));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16140));
		return;
	}
}
// Method Definition Index: 30110
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputBindingComposite_1_ReadValueAsObject_m63F864BA98364369D4E39A47462A2A030E5F11C9_fshared (InputBindingComposite_1_t98486D7ED7AEBFE8ABEE6EF136219EF0B2D18B09* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B);
	memset(V_0, 0, SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B);
	void* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16141));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16142));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16143));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:349>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16144));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:350>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16145));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16146));
		void* L_0;
		L_0 = UnsafeUtility_AddressOf_TisIl2CppFullySharedGenericStruct_m8D42BD9F3A34A0C9A6BF4AA6104B9DAE7B629DE7_inline((Il2CppFullySharedGenericStruct*)V_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16146));
		V_1 = L_0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:352>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16147));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_1 = ___0_context;
		void* L_2 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16148));
		int32_t L_3;
		L_3 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16148));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16149));
		NullCheck((InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0*)__this);
		VirtualActionInvoker3< InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390*, void*, int32_t >::Invoke(6, (InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0*)__this, L_1, L_2, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16149));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:354>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16150));
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_TValue_t6D179B4D4E2DB3B14A5A0A8D64AC5BCC9CB21F3B);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_4);
		V_2 = L_5;
		goto IL_0028;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Actions/InputBindingComposite.cs:355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 16151));
		RuntimeObject* L_6 = V_2;
		return L_6;
	}
}
// Method Definition Index: 30111
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_mFAC6CF6A39CC13790AC38DE33C51DD217DC96A64_fshared (InputBindingComposite_1_t98486D7ED7AEBFE8ABEE6EF136219EF0B2D18B09* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A((InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0*)__this, NULL);
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
// Method Definition Index: 30462
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlListDebugView_1__ctor_m1351BE03D321DB05CAE8A3DEDE29DDADC7FB752A_gshared (InputControlListDebugView_1_tF50DA37E00EC5333B067B5385186DA12D8700025* __this, InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4 ___0_list, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21240));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21241));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21242));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:608>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21243));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21244));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0;
		L_0 = InputControlList_1_ToArray_m61A57DF6EA035FADB3AFC858998677D6AFB628E7((&___0_list), (bool)0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21244));
		__this->___m_Controls = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Controls), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:609>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21245));
		return;
	}
}
// Method Definition Index: 30463
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* InputControlListDebugView_1_get_controls_m2BAD2EC8E087235E1CA94D6CD9AD9F65AD892447_gshared (InputControlListDebugView_1_tF50DA37E00EC5333B067B5385186DA12D8700025* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21246));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21247));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:611>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21248));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->___m_Controls;
		return L_0;
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
// Method Definition Index: 30424
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20699));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20700));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:58>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20701));
		int32_t L_0 = __this->___m_Count;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	int32_t _returnValue;
	_returnValue = InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 30425
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlList_1_get_Capacity_mBE468F95F5E377CB5D9D42223FF543B9448555A7_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mEB87E39B53D707EB3D802BD45DAA8C734FAB6AF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20702));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20703));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20704));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:80>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20705));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_0 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20706));
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mEB87E39B53D707EB3D802BD45DAA8C734FAB6AF2_inline(L_0, NativeArray_1_get_IsCreated_mEB87E39B53D707EB3D802BD45DAA8C734FAB6AF2_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20706));
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20707));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20708));
		V_1 = 0;
		goto IL_0025;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:82>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20709));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_3 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20710));
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20710));
		V_1 = L_4;
		goto IL_0025;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:83>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20711));
		int32_t L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 30426
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_set_Capacity_m25ABAD33A2CBB851EB36D5AAC60589CAF98ED250_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m18F287528E2007346B9E9B721D3A51A2EE2B005B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m5CBF60E97954A416106547EF28316741B674D253_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20712));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20713));
	int32_t G_B9_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20714));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:86>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20715));
		int32_t L_0 = ___0_value;
		V_2 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20716));
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:87>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20717));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20718));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral103D4F25F053C03A7B76B4D2636A9A09873C0368)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20718));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20719));
		int32_t L_3 = ___0_value;
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20720));
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20721));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:91>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20722));
		int32_t L_5 = __this->___m_Count;
		V_4 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20723));
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:92>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20724));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_7 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20725));
		NativeArray_1_Dispose_m5CBF60E97954A416106547EF28316741B674D253(L_7, NativeArray_1_Dispose_m5CBF60E97954A416106547EF28316741B674D253_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20725));
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:93>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20726));
		__this->___m_Count = 0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20727));
		goto IL_0068;
	}

IL_0046:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:97>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20728));
		int32_t L_8 = ___0_value;
		V_0 = L_8;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:98>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20729));
		int32_t L_9 = __this->___m_Allocator;
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		G_B9_0 = 4;
		goto IL_0059;
	}

IL_0053:
	{
		int32_t L_10 = __this->___m_Allocator;
		G_B9_0 = ((int32_t)(L_10));
	}

IL_0059:
	{
		V_1 = G_B9_0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:99>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20730));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_11 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20731));
		ArrayHelpers_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m18F287528E2007346B9E9B721D3A51A2EE2B005B(L_11, L_12, L_13, ArrayHelpers_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m18F287528E2007346B9E9B721D3A51A2EE2B005B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20731));
	}

IL_0068:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:100>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20732));
		return;
	}
}
// Method Definition Index: 30427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputControlList_1_get_IsReadOnly_m055241CA43536059C1DF78259A3A1B4FEFECD7BE_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20733));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20734));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:107>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20735));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool InputControlList_1_get_IsReadOnly_m055241CA43536059C1DF78259A3A1B4FEFECD7BE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	bool _returnValue;
	_returnValue = InputControlList_1_get_IsReadOnly_m055241CA43536059C1DF78259A3A1B4FEFECD7BE(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 30428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* InputControlList_1_get_Item_m32281FBDE7E699572E48C84925EFBA9D731A5767_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	Il2CppSharedGenericObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20736));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20737));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20738));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:123>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20739));
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Count;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20740));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:124>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:125>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20741));
		int32_t L_4 = ___0_index;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		int32_t L_7 = __this->___m_Count;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20742));
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5AAE312BC2C2A32DA15ABE4DBCB8869E6D272CB)), L_6, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20742));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20743));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20743));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:127>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20744));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_12 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		int32_t L_13 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20745));
		uint64_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(uint64_t, (L_12)->___m_Buffer, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20745));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20746));
		Il2CppSharedGenericObject* L_15;
		L_15 = InputControlList_1_FromIndex_m442B00B502638B69F62E6669FB5DEDFA50ED17B6(L_14, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20746));
		V_1 = L_15;
		goto IL_0052;
	}

IL_0052:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20747));
		Il2CppSharedGenericObject* L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* InputControlList_1_get_Item_m32281FBDE7E699572E48C84925EFBA9D731A5767_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = InputControlList_1_get_Item_m32281FBDE7E699572E48C84925EFBA9D731A5767(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// Method Definition Index: 30429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_set_Item_m7FD3832080D510959722D0707BEAED9C520A77B1_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (&___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20748));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20749));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20750));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:131>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20751));
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Count;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20752));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:132>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20753));
		int32_t L_4 = ___0_index;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		int32_t L_7 = __this->___m_Count;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20754));
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5AAE312BC2C2A32DA15ABE4DBCB8869E6D272CB)), L_6, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20754));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20755));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20755));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:135>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20756));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_12 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		int32_t L_13 = ___0_index;
		Il2CppSharedGenericObject* L_14 = ___1_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20757));
		uint64_t L_15;
		L_15 = InputControlList_1_ToIndex_mFDE26AE77A6581F2589932718D3BC2FD69E033DD(L_14, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20757));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20758));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, (L_12)->___m_Buffer, L_13, (L_15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20758));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:136>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20759));
		return;
	}
}
IL2CPP_EXTERN_C  void InputControlList_1_set_Item_m7FD3832080D510959722D0707BEAED9C520A77B1_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	InputControlList_1_set_Item_m7FD3832080D510959722D0707BEAED9C520A77B1(_thisAdjusted, ___0_index, ___1_value, method);
}
// Method Definition Index: 30430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1__ctor_mB6B28245E1F880FEEA04CCE9B238C2767DBA1F0B_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_allocator, int32_t ___1_initialCapacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_allocator), (&___1_initialCapacity));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20760));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20761));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20762));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:157>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20763));
		int32_t L_0 = ___0_allocator;
		__this->___m_Allocator = L_0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:158>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20764));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_1 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:159>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20765));
		__this->___m_Count = 0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20766));
		int32_t L_2 = ___1_initialCapacity;
		V_0 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20767));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:162>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20768));
		int32_t L_4 = ___1_initialCapacity;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20769));
		InputControlList_1_set_Capacity_m25ABAD33A2CBB851EB36D5AAC60589CAF98ED250(__this, L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20769));
	}

IL_002b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:163>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20770));
		return;
	}
}
// Method Definition Index: 30431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1__ctor_mC156F338E4EFD07370FA5A5FB010CE78DB89BE08_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, RuntimeObject* ___0_values, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values), (&___1_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20771));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20772));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20773));
		int32_t L_0 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20774));
		InputControlList_1__ctor_mB6B28245E1F880FEEA04CCE9B238C2767DBA1F0B(__this, L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20774));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20775));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:174>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20776));
		RuntimeObject* L_1 = ___0_values;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20777));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:175>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20778));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20779));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20779));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20780));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:177>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20781));
		RuntimeObject* L_4 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20782));
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20782));
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20790));
					RuntimeObject* L_6 = V_1;
					if (!L_6)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_7 = V_1;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20791));
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20791));
				}

IL_004a:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20792));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20783));
				goto IL_0036_1;
			}

IL_0027_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:177>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20784));
				RuntimeObject* L_8 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20785));
				NullCheck(L_8);
				Il2CppSharedGenericObject* L_9;
				L_9 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_8);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20785));
				V_2 = L_9;
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:178>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20786));
				Il2CppSharedGenericObject* L_10 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20787));
				InputControlList_1_Add_mA8854B3625D5657F02003C62046620E38B0E40A3(__this, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20787));
			}

IL_0036_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:177>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20788));
				RuntimeObject* L_11 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20789));
				NullCheck((RuntimeObject*)L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20789));
				if (L_12)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004b;
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

IL_004b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:179>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20793));
		return;
	}
}
// Method Definition Index: 30432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1__ctor_m4BE3D590C5A5E06D656491A156911FCE85C205B0_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_values, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20794));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20795));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:187>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20796));
		il2cpp_codegen_initobj(__this, sizeof(InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20797));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:189>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20798));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_values;
		V_1 = (bool)((((RuntimeObject*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20799));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:190>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20800));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20801));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20801));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:192>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20802));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = ___0_values;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		V_0 = L_4;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:193>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20803));
		int32_t L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20804));
		int32_t L_6;
		L_6 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_5, ((int32_t)10), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20804));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20805));
		InputControlList_1_set_Capacity_m25ABAD33A2CBB851EB36D5AAC60589CAF98ED250(__this, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20805));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:194>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20806));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20807));
		goto IL_0044;
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:195>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20808));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = ___0_values;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Il2CppSharedGenericObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20809));
		InputControlList_1_Add_mA8854B3625D5657F02003C62046620E38B0E40A3(__this, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20809));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:194>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20810));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0044:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:194>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20811));
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20812));
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:196>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20813));
		return;
	}
}
// Method Definition Index: 30433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Resize_mF73C4E187A78310CDBF5397E2710E76E007E3B0A_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_size));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20814));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20815));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20816));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:211>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20817));
		int32_t L_0 = ___0_size;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20818));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20819));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20820));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A16692A8FFF7E03F7605208D97CD8EA87554CF9)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20820));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:214>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20821));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20822));
		int32_t L_3;
		L_3 = InputControlList_1_get_Capacity_mBE468F95F5E377CB5D9D42223FF543B9448555A7(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20822));
		int32_t L_4 = ___0_size;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20823));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:215>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20824));
		int32_t L_6 = ___0_size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20825));
		InputControlList_1_set_Capacity_m25ABAD33A2CBB851EB36D5AAC60589CAF98ED250(__this, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20825));
	}

IL_002e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:218>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20826));
		int32_t L_7 = ___0_size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20827));
		int32_t L_8;
		L_8 = InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20827));
		V_2 = (bool)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20828));
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:219>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20829));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_10 = __this->___m_Indices;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20830));
		void* L_11;
		L_11 = NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0_inline(L_10, NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20830));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20831));
		int32_t L_12;
		L_12 = InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20831));
		int32_t L_13 = ___0_size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20832));
		int32_t L_14;
		L_14 = InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20832));
		int64_t L_15 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_13, L_14)),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20833));
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B(((void*)il2cpp_codegen_add((intptr_t)L_11, ((int32_t)il2cpp_codegen_multiply(L_12, 8)))), (uint8_t)((int32_t)255), L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20833));
	}

IL_0063:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:221>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20834));
		int32_t L_16 = ___0_size;
		__this->___m_Count = L_16;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:222>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20835));
		return;
	}
}
// Method Definition Index: 30434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Add_mA8854B3625D5657F02003C62046620E38B0E40A3_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_AppendWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAB527E70D2DFE8C564E67D6328A077D642EA9E25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_item));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20836));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20837));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20838));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:238>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20839));
		Il2CppSharedGenericObject* L_0 = ___0_item;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20840));
		uint64_t L_1;
		L_1 = InputControlList_1_ToIndex_mFDE26AE77A6581F2589932718D3BC2FD69E033DD(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20840));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:239>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20841));
		int32_t L_2 = __this->___m_Allocator;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 4;
		goto IL_0019;
	}

IL_0013:
	{
		int32_t L_3 = __this->___m_Allocator;
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0019:
	{
		V_1 = G_B3_0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:240>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20842));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_4 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		int32_t* L_5 = (int32_t*)(&__this->___m_Count);
		uint64_t L_6 = V_0;
		int32_t L_7 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20843));
		int32_t L_8;
		L_8 = ArrayHelpers_AppendWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAB527E70D2DFE8C564E67D6328A077D642EA9E25(L_4, L_5, L_6, ((int32_t)10), L_7, ArrayHelpers_AppendWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAB527E70D2DFE8C564E67D6328A077D642EA9E25_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20843));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:241>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20844));
		return;
	}
}
IL2CPP_EXTERN_C  void InputControlList_1_Add_mA8854B3625D5657F02003C62046620E38B0E40A3_AdjustorThunk (RuntimeObject* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	InputControlList_1_Add_mA8854B3625D5657F02003C62046620E38B0E40A3(_thisAdjusted, ___0_item, method);
}
// Method Definition Index: 30436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_AddRange_mF2166ECC37C7F37AEE5F95662A0CC583AEDE82CD_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, RuntimeObject* ___0_list, int32_t ___1_count, int32_t ___2_destinationIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Copy_mBF4556275F19B6725B735C61ECAD5908787D71D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	Il2CppSharedGenericObject* V_7 = NULL;
	bool V_8 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list), (&___1_count), (&___2_destinationIndex));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_7));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20889));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20890));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20891));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20892));
		RuntimeObject* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20893));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:301>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20894));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20895));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20895));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:303>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20896));
		int32_t L_3 = ___1_count;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20897));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:304>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20898));
		RuntimeObject* L_5 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20899));
		int32_t L_6;
		L_6 = Enumerable_Count_TisIl2CppSharedGenericObject_mF3369EA7F96F7D6C91301FC628A8EBBFE1B16F82(L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20899));
		___1_count = L_6;
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:305>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20900));
		int32_t L_7 = ___2_destinationIndex;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20901));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:306>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20902));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20903));
		int32_t L_9;
		L_9 = InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20903));
		___2_destinationIndex = L_9;
	}

IL_0034:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:308>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20904));
		int32_t L_10 = ___1_count;
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20905));
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:309>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20906));
		goto IL_0100;
	}

IL_0041:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20907));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20908));
		int32_t L_12;
		L_12 = InputControlList_1_get_Capacity_mBE468F95F5E377CB5D9D42223FF543B9448555A7(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20908));
		int32_t L_13 = __this->___m_Count;
		int32_t L_14 = ___1_count;
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20909));
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:313>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20910));
		int32_t L_16 = __this->___m_Count;
		int32_t L_17 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20911));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_18;
		L_18 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_add(L_16, L_17)), ((int32_t)10), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20911));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20912));
		InputControlList_1_set_Capacity_m25ABAD33A2CBB851EB36D5AAC60589CAF98ED250(__this, L_18, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20912));
	}

IL_006d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20913));
		int32_t L_19 = ___2_destinationIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20914));
		int32_t L_20;
		L_20 = InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20914));
		V_5 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20915));
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_009a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:315>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20916));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_22 = __this->___m_Indices;
		int32_t L_23 = ___2_destinationIndex;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_24 = __this->___m_Indices;
		int32_t L_25 = ___2_destinationIndex;
		int32_t L_26 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20917));
		int32_t L_27;
		L_27 = InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20917));
		int32_t L_28 = ___2_destinationIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20918));
		NativeArray_1_Copy_mBF4556275F19B6725B735C61ECAD5908787D71D4(L_22, L_23, L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NativeArray_1_Copy_mBF4556275F19B6725B735C61ECAD5908787D71D4_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20918));
	}

IL_009a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20919));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:319>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20920));
		RuntimeObject* L_29 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20921));
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_29);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20921));
		V_6 = L_30;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f3:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20937));
					RuntimeObject* L_31 = V_6;
					if (!L_31)
					{
						goto IL_00ff;
					}
				}
				{
					RuntimeObject* L_32 = V_6;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20938));
					NullCheck((RuntimeObject*)L_32);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20938));
				}

IL_00ff:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20939));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20922));
				goto IL_00e8_1;
			}

IL_00a5_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:319>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20923));
				RuntimeObject* L_33 = V_6;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20924));
				NullCheck(L_33);
				Il2CppSharedGenericObject* L_34;
				L_34 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_33);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20924));
				V_7 = L_34;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20925));
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:321>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20926));
				NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_35 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
				int32_t L_36 = ___2_destinationIndex;
				int32_t L_37 = L_36;
				___2_destinationIndex = ((int32_t)il2cpp_codegen_add(L_37, 1));
				Il2CppSharedGenericObject* L_38 = V_7;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20927));
				uint64_t L_39;
				L_39 = InputControlList_1_ToIndex_mFDE26AE77A6581F2589932718D3BC2FD69E033DD(L_38, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20927));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20928));
				IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, (L_35)->___m_Buffer, L_37, (L_39));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20928));
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:322>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20929));
				int32_t L_40 = __this->___m_Count;
				__this->___m_Count = ((int32_t)il2cpp_codegen_add(L_40, 1));
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:323>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20930));
				int32_t L_41 = ___1_count;
				___1_count = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:324>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20931));
				int32_t L_42 = ___1_count;
				V_8 = (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20932));
				bool L_43 = V_8;
				if (!L_43)
				{
					goto IL_00e7_1;
				}
			}
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:325>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20933));
				goto IL_00f1_1;
			}

IL_00e7_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20934));
			}

IL_00e8_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:319>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20935));
				RuntimeObject* L_44 = V_6;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20936));
				NullCheck((RuntimeObject*)L_44);
				bool L_45;
				L_45 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20936));
				if (L_45)
				{
					goto IL_00a5_1;
				}
			}

IL_00f1_1:
			{
				goto IL_0100;
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

IL_0100:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:327>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20940));
		return;
	}
}
// Method Definition Index: 30437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputControlList_1_Remove_m17FD04E1FFFD6916E72F50AA4FA3C07CE2FB9C59_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_EraseAtWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m08E195F444F3FD889662E62194E060EB295E0037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	uint64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_item));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20941));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20942));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20943));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:337>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20944));
		int32_t L_0 = __this->___m_Count;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20945));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:338>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20946));
		V_2 = (bool)0;
		goto IL_0063;
	}

IL_0012:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:340>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20947));
		Il2CppSharedGenericObject* L_2 = ___0_item;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20948));
		uint64_t L_3;
		L_3 = InputControlList_1_ToIndex_mFDE26AE77A6581F2589932718D3BC2FD69E033DD(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20948));
		V_0 = L_3;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20949));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20950));
		goto IL_0050;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20951));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20952));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_4 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		int32_t L_5 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20953));
		uint64_t L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_ITEM(uint64_t, (L_4)->___m_Buffer, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20953));
		uint64_t L_7 = V_0;
		V_4 = (bool)((((int64_t)L_6) == ((int64_t)L_7))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20954));
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20955));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:345>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20956));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_9 = __this->___m_Indices;
		int32_t* L_10 = (int32_t*)(&__this->___m_Count);
		int32_t L_11 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20957));
		ArrayHelpers_EraseAtWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m08E195F444F3FD889662E62194E060EB295E0037(L_9, L_10, L_11, ArrayHelpers_EraseAtWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m08E195F444F3FD889662E62194E060EB295E0037_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20957));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20958));
		V_2 = (bool)1;
		goto IL_0063;
	}

IL_004b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20959));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20960));
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0050:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20961));
		int32_t L_13 = V_3;
		int32_t L_14 = __this->___m_Count;
		V_5 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20962));
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_001d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:350>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20963));
		V_2 = (bool)0;
		goto IL_0063;
	}

IL_0063:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20964));
		bool L_16 = V_2;
		return L_16;
	}
}
IL2CPP_EXTERN_C  bool InputControlList_1_Remove_m17FD04E1FFFD6916E72F50AA4FA3C07CE2FB9C59_AdjustorThunk (RuntimeObject* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	bool _returnValue;
	_returnValue = InputControlList_1_Remove_m17FD04E1FFFD6916E72F50AA4FA3C07CE2FB9C59(_thisAdjusted, ___0_item, method);
	return _returnValue;
}
// Method Definition Index: 30438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_RemoveAt_mB579D468B0000919C624BF1D35FDDB3C43E91317_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_EraseAtWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m08E195F444F3FD889662E62194E060EB295E0037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20965));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20966));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20967));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20968));
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Count;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20969));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:362>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:363>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20970));
		int32_t L_4 = ___0_index;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		int32_t L_7 = __this->___m_Count;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20971));
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A4C9FA48FD2A2F435C80D4EE2A360E4F1BC670A)), L_6, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20971));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20972));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20972));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:365>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20973));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_12 = __this->___m_Indices;
		int32_t* L_13 = (int32_t*)(&__this->___m_Count);
		int32_t L_14 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20974));
		ArrayHelpers_EraseAtWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m08E195F444F3FD889662E62194E060EB295E0037(L_12, L_13, L_14, ArrayHelpers_EraseAtWithCapacity_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m08E195F444F3FD889662E62194E060EB295E0037_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20974));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:366>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20975));
		return;
	}
}
IL2CPP_EXTERN_C  void InputControlList_1_RemoveAt_mB579D468B0000919C624BF1D35FDDB3C43E91317_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	InputControlList_1_RemoveAt_mB579D468B0000919C624BF1D35FDDB3C43E91317(_thisAdjusted, ___0_index, method);
}
// Method Definition Index: 30439
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_CopyTo_m7747E34F8F4CC4726FF99217DACD69DE3D0956F8_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_arrayIndex));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20976));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20977));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20978));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:370>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20979));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20980));
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20980));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  void InputControlList_1_CopyTo_m7747E34F8F4CC4726FF99217DACD69DE3D0956F8_AdjustorThunk (RuntimeObject* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	InputControlList_1_CopyTo_m7747E34F8F4CC4726FF99217DACD69DE3D0956F8(_thisAdjusted, ___0_array, ___1_arrayIndex, method);
}
// Method Definition Index: 30440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlList_1_IndexOf_mCDEB5E92194101A81BE06B7B41B29CC7276E2D78_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_item));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20981));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20982));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20983));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:375>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20984));
		Il2CppSharedGenericObject* L_0 = ___0_item;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20985));
		int32_t L_1;
		L_1 = InputControlList_1_IndexOf_m7F4B6B8D4EEFB8C2B6294E0CD40E4279B56D1DF5(__this, L_0, 0, (-1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20985));
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:376>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20986));
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputControlList_1_IndexOf_mCDEB5E92194101A81BE06B7B41B29CC7276E2D78_AdjustorThunk (RuntimeObject* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	int32_t _returnValue;
	_returnValue = InputControlList_1_IndexOf_mCDEB5E92194101A81BE06B7B41B29CC7276E2D78(_thisAdjusted, ___0_item, method);
	return _returnValue;
}
// Method Definition Index: 30441
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlList_1_IndexOf_m7F4B6B8D4EEFB8C2B6294E0CD40E4279B56D1DF5_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m44EAE568720002EAD1F4ECE1CBA62E756FB05AFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	uint64_t V_0 = 0;
	uint64_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_item), (&___1_startIndex), (&___2_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_7));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20987));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20988));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20989));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:380>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20990));
		int32_t L_0 = ___1_startIndex;
		V_2 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20991));
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:381>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20992));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20993));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3CB893981937B6A3E19D06EF1C6E0ABDCB4F113)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20993));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:383>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20994));
		int32_t L_3 = __this->___m_Count;
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20995));
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:384>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20996));
		V_4 = (-1);
		goto IL_00aa;
	}

IL_002b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:386>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20997));
		int32_t L_5 = ___2_count;
		V_5 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20998));
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:387>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20999));
		int32_t L_7 = __this->___m_Count;
		int32_t L_8 = ___1_startIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21000));
		int32_t L_9;
		L_9 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)il2cpp_codegen_subtract(L_7, L_8)), 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21000));
		___2_count = L_9;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:389>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21001));
		int32_t L_10 = ___1_startIndex;
		int32_t L_11 = ___2_count;
		int32_t L_12 = __this->___m_Count;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11))) > ((int32_t)L_12))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21002));
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:390>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21003));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21004));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_14 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21004));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:392>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21005));
		Il2CppSharedGenericObject* L_15 = ___0_item;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21006));
		uint64_t L_16;
		L_16 = InputControlList_1_ToIndex_mFDE26AE77A6581F2589932718D3BC2FD69E033DD(L_15, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21006));
		V_0 = L_16;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:393>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21007));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_17 = __this->___m_Indices;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21008));
		void* L_18;
		L_18 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m44EAE568720002EAD1F4ECE1CBA62E756FB05AFA_inline(L_17, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m44EAE568720002EAD1F4ECE1CBA62E756FB05AFA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21008));
		V_1 = (uint64_t*)L_18;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:395>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21009));
		V_7 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21010));
		goto IL_009a;
	}

IL_0079:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:396>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21011));
		uint64_t* L_19 = V_1;
		int32_t L_20 = ___1_startIndex;
		int32_t L_21 = V_7;
		intptr_t L_22 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_20, L_21)),NULL));
		int64_t L_23 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_22, 8))))));
		uint64_t L_24 = V_0;
		V_8 = (bool)((((int64_t)L_23) == ((int64_t)L_24))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21012));
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_0094;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:397>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21013));
		int32_t L_26 = ___1_startIndex;
		int32_t L_27 = V_7;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		goto IL_00aa;
	}

IL_0094:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:395>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21014));
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_009a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:395>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21015));
		int32_t L_29 = V_7;
		int32_t L_30 = ___2_count;
		V_9 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21016));
		bool L_31 = V_9;
		if (L_31)
		{
			goto IL_0079;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:399>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21017));
		V_4 = (-1);
		goto IL_00aa;
	}

IL_00aa:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:400>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21018));
		int32_t L_32 = V_4;
		return L_32;
	}
}
// Method Definition Index: 30442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Insert_mCDAF378A49E9B1A539CED823D80A7087E3176392_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (&___1_item));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21019));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21020));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21021));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:404>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21022));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21023));
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21023));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  void InputControlList_1_Insert_mCDAF378A49E9B1A539CED823D80A7087E3176392_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	InputControlList_1_Insert_mCDAF378A49E9B1A539CED823D80A7087E3176392(_thisAdjusted, ___0_index, ___1_item, method);
}
// Method Definition Index: 30443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Clear_m0276C95AD120462C9F94398DDDA75755B63FFB3F_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21024));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21025));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21026));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:409>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21027));
		__this->___m_Count = 0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:410>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21028));
		return;
	}
}
IL2CPP_EXTERN_C  void InputControlList_1_Clear_m0276C95AD120462C9F94398DDDA75755B63FFB3F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	InputControlList_1_Clear_m0276C95AD120462C9F94398DDDA75755B63FFB3F(_thisAdjusted, method);
}
// Method Definition Index: 30444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputControlList_1_Contains_m7BA29BC019345B8994B5D6CD741FDDF1A36A077B_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_item));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21029));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21030));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21031));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:414>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21032));
		Il2CppSharedGenericObject* L_0 = ___0_item;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21033));
		int32_t L_1;
		L_1 = InputControlList_1_IndexOf_mCDEB5E92194101A81BE06B7B41B29CC7276E2D78(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21033));
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:415>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21034));
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool InputControlList_1_Contains_m7BA29BC019345B8994B5D6CD741FDDF1A36A077B_AdjustorThunk (RuntimeObject* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	bool _returnValue;
	_returnValue = InputControlList_1_Contains_m7BA29BC019345B8994B5D6CD741FDDF1A36A077B(_thisAdjusted, ___0_item, method);
	return _returnValue;
}
// Method Definition Index: 30445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputControlList_1_Contains_m65BD88328A1853594C45DCA2534CA0F67C2C01D0_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, Il2CppSharedGenericObject* ___0_item, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_item), (&___1_startIndex), (&___2_count));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21035));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21036));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21037));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:419>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21038));
		Il2CppSharedGenericObject* L_0 = ___0_item;
		int32_t L_1 = ___1_startIndex;
		int32_t L_2 = ___2_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21039));
		int32_t L_3;
		L_3 = InputControlList_1_IndexOf_m7F4B6B8D4EEFB8C2B6294E0CD40E4279B56D1DF5(__this, L_0, L_1, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21039));
		V_0 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:420>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21040));
		bool L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 30446
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_SwapElements_mDD7B9ED91E5D589AF991BC3356DE855B1F00ADE9_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, int32_t ___0_index1, int32_t ___1_index2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_SwapElements_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m640045697F1A6F2BD8DE3B91C7F66A01A2B0617D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index1), (&___1_index2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21041));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21042));
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21043));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:424>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21044));
		int32_t L_0 = ___0_index1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_index1;
		int32_t L_2 = __this->___m_Count;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21045));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:425>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21046));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21047));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral991EE12E665ED6D632A6A05B1ED57EE663CCC920)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21047));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:426>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21048));
		int32_t L_5 = ___1_index2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = ___1_index2;
		int32_t L_7 = __this->___m_Count;
		G_B8_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B8_0 = 1;
	}

IL_0036:
	{
		V_1 = (bool)G_B8_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21049));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:427>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21050));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21051));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3356214D501D9273DB4022DE33B10D82F6557224)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21051));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:429>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21052));
		int32_t L_10 = ___0_index1;
		int32_t L_11 = ___1_index2;
		V_2 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21053));
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:430>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21054));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_13 = __this->___m_Indices;
		int32_t L_14 = ___0_index1;
		int32_t L_15 = ___1_index2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21055));
		ArrayHelpers_SwapElements_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m640045697F1A6F2BD8DE3B91C7F66A01A2B0617D(L_13, L_14, L_15, ArrayHelpers_SwapElements_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m640045697F1A6F2BD8DE3B91C7F66A01A2B0617D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21055));
	}

IL_005e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:431>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21056));
		return;
	}
}
// Method Definition Index: 30448
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* InputControlList_1_ToArray_m61A57DF6EA035FADB3AFC858998677D6AFB628E7_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, bool ___0_dispose, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_4 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dispose));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21086));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21087));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21088));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:459>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21089));
		int32_t L_0 = __this->___m_Count;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12), (uint32_t)L_0);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:460>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21090));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21091));
		goto IL_0023;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:461>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21092));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21093));
		Il2CppSharedGenericObject* L_5;
		L_5 = InputControlList_1_get_Item_m32281FBDE7E699572E48C84925EFBA9D731A5767(__this, L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21093));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Il2CppSharedGenericObject*)L_5);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:460>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21094));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:460>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21095));
		int32_t L_7 = V_1;
		int32_t L_8 = __this->___m_Count;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21096));
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0011;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:463>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21097));
		bool L_10 = ___0_dispose;
		V_3 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21098));
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:464>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21099));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21100));
		InputControlList_1_Dispose_m8A27BD8E0A8C118B0FF8E23A2CE3458C7B82771A(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21100));
	}

IL_003c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:466>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21101));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = V_0;
		V_4 = L_12;
		goto IL_0041;
	}

IL_0041:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:467>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21102));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = V_4;
		return L_13;
	}
}
// Method Definition Index: 30449
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_AppendTo_m3B57171FB7FDBFF1939FFECC651301C9387ED139_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, int32_t* ___1_count, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21103));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21104));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21105));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:471>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21106));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21107));
		goto IL_001a;
	}

IL_0005:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:472>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21108));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_0 = ___0_array;
		int32_t* L_1 = ___1_count;
		int32_t L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21109));
		Il2CppSharedGenericObject* L_3;
		L_3 = InputControlList_1_get_Item_m32281FBDE7E699572E48C84925EFBA9D731A5767(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21109));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21110));
		int32_t L_4;
		L_4 = ArrayHelpers_AppendWithCapacity_TisIl2CppSharedGenericObject_mA8071871C71EB89DDF53669DC9021222656DF1AD(L_0, L_1, L_3, ((int32_t)10), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21110));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:471>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21111));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:471>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21112));
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___m_Count;
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21113));
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:473>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21114));
		return;
	}
}
// Method Definition Index: 30450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Dispose_m8A27BD8E0A8C118B0FF8E23A2CE3458C7B82771A_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m5CBF60E97954A416106547EF28316741B674D253_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mEB87E39B53D707EB3D802BD45DAA8C734FAB6AF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21115));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21116));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21117));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:477>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21118));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_0 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21119));
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mEB87E39B53D707EB3D802BD45DAA8C734FAB6AF2_inline(L_0, NativeArray_1_get_IsCreated_mEB87E39B53D707EB3D802BD45DAA8C734FAB6AF2_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21119));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21120));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:478>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21121));
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_3 = (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)(&__this->___m_Indices);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21122));
		NativeArray_1_Dispose_m5CBF60E97954A416106547EF28316741B674D253(L_3, NativeArray_1_Dispose_m5CBF60E97954A416106547EF28316741B674D253_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21122));
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:479>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21123));
		return;
	}
}
IL2CPP_EXTERN_C  void InputControlList_1_Dispose_m8A27BD8E0A8C118B0FF8E23A2CE3458C7B82771A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	InputControlList_1_Dispose_m8A27BD8E0A8C118B0FF8E23A2CE3458C7B82771A(_thisAdjusted, method);
}
// Method Definition Index: 30451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControlList_1_GetEnumerator_m1B8EA6DBD6935CD678D05DF08391AAD01AF62D63_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21124));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21125));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21126));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:483>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21127));
		InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4 L_0 = (*(InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4*)__this);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21128));
		Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mD8A207CB41B6E1C5B7AA4A220CB03058AF6CC858((&L_1), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21128));
		Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28), &L_2);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:484>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21129));
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* InputControlList_1_GetEnumerator_m1B8EA6DBD6935CD678D05DF08391AAD01AF62D63_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	RuntimeObject* _returnValue;
	_returnValue = InputControlList_1_GetEnumerator_m1B8EA6DBD6935CD678D05DF08391AAD01AF62D63(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 30452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControlList_1_System_Collections_IEnumerable_GetEnumerator_mDC729D11E38C2C3397DB6D5A1DE0A9ED45D16D21_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21130));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21131));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21132));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:488>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21133));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21134));
		RuntimeObject* L_0;
		L_0 = InputControlList_1_GetEnumerator_m1B8EA6DBD6935CD678D05DF08391AAD01AF62D63(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21134));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:489>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21135));
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* InputControlList_1_System_Collections_IEnumerable_GetEnumerator_mDC729D11E38C2C3397DB6D5A1DE0A9ED45D16D21_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	RuntimeObject* _returnValue;
	_returnValue = InputControlList_1_System_Collections_IEnumerable_GetEnumerator_mDC729D11E38C2C3397DB6D5A1DE0A9ED45D16D21(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 30453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControlList_1_ToString_mEA39E74EBE4F19B7B9C6B05877D25DFCAF0D3414_gshared (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21136));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21137));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21138));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:493>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21139));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21140));
		int32_t L_0;
		L_0 = InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21140));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21141));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:494>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21142));
		V_2 = _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
		goto IL_0076;
	}

IL_0016:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:496>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21143));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21144));
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21144));
		V_0 = L_2;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:497>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21145));
		StringBuilder_t* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21146));
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_3, ((int32_t)40), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21146));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:499>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21147));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21148));
		goto IL_0055;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21149));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:501>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21150));
		int32_t L_5 = V_3;
		V_4 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21151));
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:502>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21152));
		StringBuilder_t* L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21153));
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)44), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21153));
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:503>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21154));
		StringBuilder_t* L_9 = V_0;
		int32_t L_10 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21155));
		Il2CppSharedGenericObject* L_11;
		L_11 = InputControlList_1_get_Item_m32281FBDE7E699572E48C84925EFBA9D731A5767(__this, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21155));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21156));
		NullCheck(L_9);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_9, (RuntimeObject*)L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21156));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21157));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:499>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21158));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0055:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:499>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21159));
		int32_t L_14 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21160));
		int32_t L_15;
		L_15 = InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21160));
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21161));
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:506>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21162));
		StringBuilder_t* L_17 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21163));
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)41), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21163));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:507>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21164));
		StringBuilder_t* L_19 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21165));
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21165));
		V_2 = L_20;
		goto IL_0076;
	}

IL_0076:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:508>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21166));
		String_t* L_21 = V_2;
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* InputControlList_1_ToString_mEA39E74EBE4F19B7B9C6B05877D25DFCAF0D3414_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4>(__this);
	String_t* _returnValue;
	_returnValue = InputControlList_1_ToString_mEA39E74EBE4F19B7B9C6B05877D25DFCAF0D3414(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 30454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InputControlList_1_ToIndex_mFDE26AE77A6581F2589932718D3BC2FD69E033DD_gshared (Il2CppSharedGenericObject* ___0_control, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_IndexOfReference_TisInputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_TisInputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_mFF3C6B920686BD33ABEB2D3CD00012EFCD857912_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	bool V_5 = false;
	uint64_t V_6 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_control));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21167));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21168));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21169));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:518>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21170));
		Il2CppSharedGenericObject* L_0 = ___0_control;
		V_5 = (bool)((((RuntimeObject*)(Il2CppSharedGenericObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21171));
		bool L_1 = V_5;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:519>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21172));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>((-1),NULL));
		V_6 = L_2;
		goto IL_005c;
	}

IL_0016:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:521>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21173));
		Il2CppSharedGenericObject* L_3 = ___0_control;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21174));
		NullCheck((InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*)L_3);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_4;
		L_4 = InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline((InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*)L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21174));
		V_0 = L_4;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:522>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21175));
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___m_DeviceId;
		V_1 = L_6;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:523>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:524>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:525>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21176));
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_7 = V_0;
		Il2CppSharedGenericObject* L_8 = ___0_control;
		if ((!(((RuntimeObject*)(InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)L_7) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_8))))
		{
			goto IL_0035;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0049;
	}

IL_0035:
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_9 = V_0;
		NullCheck(L_9);
		InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* L_10 = L_9->___m_ChildrenForEachControl;
		Il2CppSharedGenericObject* L_11 = ___0_control;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21177));
		int32_t L_12;
		L_12 = ArrayHelpers_IndexOfReference_TisInputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_TisInputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_mFF3C6B920686BD33ABEB2D3CD00012EFCD857912(L_10, (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*)L_11, (-1), ArrayHelpers_IndexOfReference_TisInputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_TisInputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E_mFF3C6B920686BD33ABEB2D3CD00012EFCD857912_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21177));
		G_B5_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0049:
	{
		V_2 = G_B5_0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:533>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21178));
		int32_t L_13 = V_1;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_13,NULL));
		V_3 = ((int64_t)(L_14<<((int32_t)32)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:534>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21179));
		int32_t L_15 = V_2;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_4 = L_16;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:536>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21180));
		uint64_t L_17 = V_3;
		uint64_t L_18 = V_4;
		V_6 = ((int64_t)((int64_t)L_17|(int64_t)L_18));
		goto IL_005c;
	}

IL_005c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:537>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21181));
		uint64_t L_19 = V_6;
		return L_19;
	}
}
// Method Definition Index: 30455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* InputControlList_1_FromIndex_m442B00B502638B69F62E6669FB5DEDFA50ED17B6_gshared (uint64_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_2 = NULL;
	bool V_3 = false;
	Il2CppSharedGenericObject* V_4 = NULL;
	Il2CppSharedGenericObject* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21182));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21183));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21184));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:541>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21185));
		uint64_t L_0 = ___0_index;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>((-1),NULL));
		V_3 = (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21186));
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:542>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21187));
		il2cpp_codegen_initobj((&V_4), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_3 = V_4;
		V_5 = L_3;
		goto IL_006a;
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:544>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21188));
		uint64_t L_4 = ___0_index;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((uint64_t)L_4>>((int32_t)32))),NULL));
		V_0 = L_5;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:545>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21189));
		uint64_t L_6 = ___0_index;
		uint64_t L_7 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_6&(int64_t)L_7)),NULL));
		V_1 = L_8;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:547>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21190));
		int32_t L_9 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21191));
		CHECKED_LOCAL_INIT(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_StaticInit,(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_10;
		L_10 = InputSystem_GetDeviceById_mC5C12308F6B71C9AAD24CFBB984E5C3C79F6C099(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21191));
		V_2 = L_10;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:548>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21192));
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_11 = V_2;
		V_6 = (bool)((((RuntimeObject*)(InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21193));
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:549>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21194));
		il2cpp_codegen_initobj((&V_4), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_4;
		V_5 = L_13;
		goto IL_006a;
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:550>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21195));
		int32_t L_14 = V_1;
		V_7 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21196));
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:551>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21197));
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_16 = V_2;
		V_5 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
		goto IL_006a;
	}

IL_0057:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:553>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21198));
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_17 = V_2;
		NullCheck(L_17);
		InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* L_18 = L_17->___m_ChildrenForEachControl;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_5 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_21, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
		goto IL_006a;
	}

IL_006a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:554>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 21199));
		Il2CppSharedGenericObject* L_22 = V_5;
		return L_22;
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
// Method Definition Index: 30297
// Method Definition Index: 30298
// Method Definition Index: 30299
// Method Definition Index: 30300
// Method Definition Index: 30301
// Method Definition Index: 30302
// Method Definition Index: 30303
// Method Definition Index: 30304
// Method Definition Index: 30305
// Method Definition Index: 30306
// Method Definition Index: 30307
// Method Definition Index: 30309
// Method Definition Index: 30310
// Method Definition Index: 30311
// Method Definition Index: 30312
// Method Definition Index: 30313
// Method Definition Index: 30314
// Method Definition Index: 30315
// Method Definition Index: 30316
// Method Definition Index: 30317
// Method Definition Index: 30318
// Method Definition Index: 30320
// Method Definition Index: 30321
// Method Definition Index: 30322
// Method Definition Index: 30323
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30297
// Method Definition Index: 30298
// Method Definition Index: 30299
// Method Definition Index: 30300
// Method Definition Index: 30301
// Method Definition Index: 30302
// Method Definition Index: 30303
// Method Definition Index: 30304
// Method Definition Index: 30305
// Method Definition Index: 30306
// Method Definition Index: 30307
// Method Definition Index: 30309
// Method Definition Index: 30310
// Method Definition Index: 30311
// Method Definition Index: 30312
// Method Definition Index: 30313
// Method Definition Index: 30314
// Method Definition Index: 30315
// Method Definition Index: 30316
// Method Definition Index: 30317
// Method Definition Index: 30318
// Method Definition Index: 30320
// Method Definition Index: 30321
// Method Definition Index: 30322
// Method Definition Index: 30323
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30297
// Method Definition Index: 30298
// Method Definition Index: 30299
// Method Definition Index: 30300
// Method Definition Index: 30301
// Method Definition Index: 30302
// Method Definition Index: 30303
// Method Definition Index: 30304
// Method Definition Index: 30305
// Method Definition Index: 30306
// Method Definition Index: 30307
// Method Definition Index: 30309
// Method Definition Index: 30310
// Method Definition Index: 30311
// Method Definition Index: 30312
// Method Definition Index: 30313
// Method Definition Index: 30314
// Method Definition Index: 30315
// Method Definition Index: 30316
// Method Definition Index: 30317
// Method Definition Index: 30318
// Method Definition Index: 30320
// Method Definition Index: 30321
// Method Definition Index: 30322
// Method Definition Index: 30323
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30297
// Method Definition Index: 30298
// Method Definition Index: 30299
// Method Definition Index: 30300
// Method Definition Index: 30301
// Method Definition Index: 30302
// Method Definition Index: 30303
// Method Definition Index: 30304
// Method Definition Index: 30305
// Method Definition Index: 30306
// Method Definition Index: 30307
// Method Definition Index: 30309
// Method Definition Index: 30310
// Method Definition Index: 30311
// Method Definition Index: 30312
// Method Definition Index: 30313
// Method Definition Index: 30314
// Method Definition Index: 30315
// Method Definition Index: 30316
// Method Definition Index: 30317
// Method Definition Index: 30318
// Method Definition Index: 30320
// Method Definition Index: 30321
// Method Definition Index: 30322
// Method Definition Index: 30323
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30297
// Method Definition Index: 30298
// Method Definition Index: 30299
// Method Definition Index: 30300
// Method Definition Index: 30301
// Method Definition Index: 30302
// Method Definition Index: 30303
// Method Definition Index: 30304
// Method Definition Index: 30305
// Method Definition Index: 30306
// Method Definition Index: 30307
// Method Definition Index: 30309
// Method Definition Index: 30310
// Method Definition Index: 30311
// Method Definition Index: 30312
// Method Definition Index: 30313
// Method Definition Index: 30314
// Method Definition Index: 30315
// Method Definition Index: 30316
// Method Definition Index: 30317
// Method Definition Index: 30318
// Method Definition Index: 30320
// Method Definition Index: 30321
// Method Definition Index: 30322
// Method Definition Index: 30323
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30297
// Method Definition Index: 30298
// Method Definition Index: 30299
// Method Definition Index: 30300
// Method Definition Index: 30301
// Method Definition Index: 30302
// Method Definition Index: 30303
// Method Definition Index: 30304
// Method Definition Index: 30305
// Method Definition Index: 30306
// Method Definition Index: 30307
// Method Definition Index: 30309
// Method Definition Index: 30310
// Method Definition Index: 30311
// Method Definition Index: 30312
// Method Definition Index: 30313
// Method Definition Index: 30314
// Method Definition Index: 30315
// Method Definition Index: 30316
// Method Definition Index: 30317
// Method Definition Index: 30318
// Method Definition Index: 30320
// Method Definition Index: 30321
// Method Definition Index: 30322
// Method Definition Index: 30323
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 37399
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 9903));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 9904));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Mathf.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 9905));
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
// Method Definition Index: 30235
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 18047));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 18048));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControl.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 18049));
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = __this->___m_Device;
		return L_0;
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
// Method Definition Index: 35233
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisIl2CppFullySharedGenericStruct_m8D42BD9F3A34A0C9A6BF4AA6104B9DAE7B629DE7_fshared_inline (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1875));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1876));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatchedForwarder.cs:54>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1877));
		Il2CppFullySharedGenericStruct* L_0 = ___0_output;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1878));
		void* L_1;
		L_1 = UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1878));
		return L_1;
	}
}
// Method Definition Index: 30424
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputControlList_1_get_Count_m19099CE7C73A2530550CFB9E2FCFD453915AFA88_gshared_inline (InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20699));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20700));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Controls/InputControlList.cs:58>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 20701));
		int32_t L_0 = __this->___m_Count;
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
// Method Definition Index: 73793
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_fshared_inline (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 33));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 34));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Unsafe/UnsafeUtilityPatched.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 35));
		Il2CppFullySharedGenericStruct* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
