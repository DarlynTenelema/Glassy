#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
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
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[1] = { p1 };
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
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

struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C;
struct Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E;
struct CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4;
struct Comparer_1_tE62B641BE766E2A64521CDD039848A39BB615641;
struct Comparer_1_t0F059F5ABA856F2DBE2A9FA1A273E58AC12A1EFE;
struct Comparer_1_tEDFEC427CBE9C1B52BAFBA8D874230713A5BA999;
struct Comparer_1_tA8F9AF9FBAA4F88496CA2D8D5955DA525B303717;
struct Comparer_1_tF6CBC9D5053440EC78A18359EF938040C34CAF03;
struct Comparer_1_t3668ED07E95EA7C715D77DA02476D813B4AD755F;
struct Comparer_1_tADD5B0926BF106941AA2F0D62816C79FAE3045EB;
struct Comparer_1_t54E12BCA289B7D70D2FA8E18986A61CC9F04AEF2;
struct Comparer_1_tE7739F3ABE4B8AAD02FC9C063DD0BA947B78F662;
struct Comparer_1_tE05638C39F701AEBE54FCFC67F01B1FD36078AAC;
struct Comparer_1_tDA6A3FD7E484C7A7801643C787FF765587661E2F;
struct Comparer_1_tB21D08339C02EAD6556DADE9EF10A5CA38E0650A;
struct Comparer_1_t43D3BE6FFC360205729876A15F84A71D3B4B8152;
struct Comparer_1_t6438D88AA8DF41330529D5EF40B5C3201F0AD067;
struct Comparer_1_t68B17BA3E17135A1B147ABB3AE72C8061216705D;
struct Comparer_1_tF2DB3BD2CA1173AD083099710DF06D2223145FF8;
struct Comparer_1_tD995F2C0D7D49A8AE212072C32E83489BA1D4CC6;
struct Comparer_1_t81C0BB898453EB2947EA4DC903CA738B8451D8C7;
struct Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C;
struct Comparer_1_tEA47A919621D87B678B2A9B4E3A470CBDFED6A50;
struct Comparer_1_t6CE26198E8C4440569AF51F23999535B2401D2CE;
struct Comparer_1_tB990A9958FA73618E207C68A28691631B4041ECD;
struct Comparer_1_t6CACB79C2EBD369DC9A73CD7AFFD61E4AF51766A;
struct Comparer_1_t076B0182ABD27E6FBB4F0462C915AEDB5BDB353C;
struct Comparer_1_t349274FE99585C3A3A56F84706A2EAAC58E4928A;
struct Comparer_1_tEF25F1DB801EFE2B630996244237C9A87FE1F2A6;
struct Comparer_1_tAEB9BDBB6E6B098717097547FA00C68C484C8E61;
struct Comparer_1_t30EDE4A1BC5FA7ADF248621947782C677833308C;
struct Comparer_1_t6CC844B989AE93163E90744FBDE5DC46CE82252C;
struct Comparer_1_t8D1E640B4AB7DD29BA0DE9D4C9E16844734DD432;
struct Comparer_1_t6916E99C71B0745FF2AC152B75FD4A0053BDCF20;
struct Comparer_1_t20736A9CEDE849F79898D3668407800813B3D96A;
struct Comparer_1_t9A2EF4540BB15E9CD8C6621B5B6C38000531194A;
struct Comparer_1_t28AB01559DC24979532C98382E03D786703C23A3;
struct Comparer_1_t4A32688AA2A0035BF550714701DCB59071C5C238;
struct Comparer_1_t863F60FDFC3BB2F4804DE509838EDD1651EE17E4;
struct Comparer_1_tF3253AF199E14EAEAA1F532B988B206070B122FE;
struct Comparer_1_tC9CDD1656D3ADAAA24687E2B8CEEFBCDD149E10D;
struct Comparer_1_tBA88744BBB37AF51F08AEFFC56268AE6678644F3;
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4;
struct Comparer_1_t34A89469081D6D38698AEA98234EB2570B181944;
struct Comparer_1_t7E98ADD40AACA5A489930C91F1395FCB8315F225;
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
struct Comparer_1_t4EB0ADBCB3F521E51B444B8E631738B14C0C0063;
struct Comparer_1_tECF0600884656F0F4F27BCB54DB74A5BFE41EB91;
struct Comparer_1_t2158F98C5484AAD9CDBEC169B93B8E28C528F647;
struct Comparer_1_tB561CAA6EA37F5AB92B7DD62949A3DE640305D48;
struct Comparer_1_t76A0766C012F99A002D7E6C094CF54F7445E30A9;
struct Comparer_1_t7D79B93D962FED51539E57571D173019714D3A58;
struct Comparer_1_t2A7CD7D5B4BDA0E0234E7B9B180F2C39F864BC0A;
struct Comparer_1_t420D73C41321F646BA6C9F312DC3B7CFDE282912;
struct Comparer_1_t015660693150FE8606CD0BCD312D047C1D694F4D;
struct Comparer_1_t3093E6EEB43CE2B11D84CFE0500ED48F22CBE8FD;
struct Comparer_1_t9797759A13ACC2754ADBB42EFA5EDCC1701FE036;
struct Comparer_1_t8BD78E66482FF4A4F4BBC5928AACAB5BB30B5E94;
struct Comparer_1_t899D90A399D35CB1E70FF681B73910B9C1077E34;
struct Comparer_1_t5D93D590BAEF39CA04B3F277ADCB55F92C55A7CB;
struct Comparer_1_t297C425A92272F06C8AF46E01E0FFF916F075C6E;
struct Comparer_1_t592FEFF1A46B062B8C2A75B332AC13A6DBA7D272;
struct Comparer_1_tFC18D573723C22C61D052736BB038C772706EA86;
struct Comparer_1_t4DA171D1CD971A4E1C9CF2367DE77C36DD4D2687;
struct Comparer_1_tB5C67F47A3BD6C116B20FAB729E8BB6FEA90C781;
struct Comparer_1_t27B822B3C88DEBBBFDB00E52663F584AAE251A8C;
struct Comparer_1_t062DD1108ED729C784DCBD9514C298C6F09F4AA2;
struct Comparer_1_tC072BB6D9751DF60DECD30E25A7AFC03C1B9224B;
struct Comparer_1_t5564AAE71040E00A06891C3C2A1EAB7C9FCF05CC;
struct Comparer_1_t47F40F83DC568A418923973A9DF4570DEE5225E1;
struct Comparer_1_t046F9560C4CECCB3DA2344DC3427B27420989DE9;
struct Comparer_1_t533505BAE6FAEE95883DC4F092C9B1503370EE82;
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80;
struct Comparer_1_t88D1E609547CDB93D82F17BA326F506DC1C371E6;
struct Comparer_1_tF64ADEFB94CE2268B18EB8F0DA44DB9D8E3A94BD;
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D;
struct Comparer_1_t3DB3DE7BB01E6125039318497F95D839804473D6;
struct Comparer_1_t77500A2EFE7424E8B06A6E0690A05E1EE7A3B91E;
struct Comparer_1_t7F5FD392B768C539D47F9869EC37E1E72149F006;
struct Comparer_1_t748E80C1A47B867E6DBB5D12E500B6516A27B880;
struct Comparer_1_t23421756F8088B6B5616896BDBE558A89217CCDC;
struct Comparer_1_tBCE328A5CAD7B70102267D55F580E22896B90A62;
struct Comparer_1_tC87240B80734A873F7622A6031AAF6F7B9305570;
struct Comparer_1_tBF53A970ED6F537ECB335BF96DCD7BE6ACF61CC5;
struct Comparer_1_tEA9EC5743A4F2950C76AC377A788286E8039B53C;
struct Comparer_1_tEC0532A752985C5027C95B36A051FC9116BEBAAB;
struct Comparer_1_t4CD637988E21011E3775D04BAB82074E5CD1607A;
struct Comparer_1_tD0678FDAC373F41CF41D954C5C58D4377BD77A39;
struct Comparer_1_t33558EBC37D1C8667C87D8FB3559B99135BD8AEC;
struct Comparer_1_t2469E2C46043B8C17CEFDDA3D95714EFD120AE58;
struct Comparer_1_t85127BA50FE9EB21CEECD9D95C0636932C41EF10;
struct Comparer_1_t1A2B7330777E2361D018C47C4BE717D8BDA862CC;
struct Comparer_1_t8B8C5AA2B7398E73F4DA37CF8E95898DECC1CC56;
struct Comparer_1_t6AF36413158EA24D71858F557432B4F5EEF95A8C;
struct Comparer_1_t41A6C22A19F40D026751614933AF9E8E4DBCADEB;
struct Comparer_1_t6FB7AE63222025BCABE276726945F870924CBC06;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E;
struct Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01;
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F;
struct Func_1_tA8142C82F6807E3ECF316299D5B91FFE4FEA7343;
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct IObjectPool_1_t4505FAB1BE69641AC15F9D5223A50EB7FE3B0EB0;
struct Lazy_1_t564A33A7F423595D3F62B04F731E53A42FB37575;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3;
struct ObjectPool_1_t9CFCA41CD780F7424037FA2A3EE846F2FBFEE4D0;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DataBindingManager_tE7B33E64EBBDCAB0A89B6A8421529F9BA0D066E1;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IPanelRenderer_tEB4A39BEC71B3B49302393D8DAFF7599E7F9ED9E;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct TimeFunction_tF79523F25DE24287C8CF4D87F09E8CA51568EC9F;
struct TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862;
struct Type_t;
struct UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct TypeData_t9C5DC5F5DD8F0C04131F359229ED4738117BA396;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B07B43F1557775B37A1B8EA12D9C378EDB7EC4B;
IL2CPP_EXTERN_C String_t* _stringLiteral226374B4A4A54F92AC022D20C6A05ACB5EEC4C76;
IL2CPP_EXTERN_C String_t* _stringLiteral26D123FC6FB490AE20447BCDB0DEBAC133C96A6D;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral6D708D3E8ACC426EF77E8F9A83D11A00B8B80AB4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CommandEventBase_1_tDF4ED6AB66FFCAD708E3285FF8FBC022967F5716_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectPool_1_t6568D3E8B246E33BDECAEAB6801BDB4C954A4E70_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
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
struct U3CU3Ec_t1FAB174F52CB9A91AE0D234692A4318F222CA215  : public RuntimeObject
{
};
struct CollectionPool_2_t010265BE2E6280164CBDAF3A6FA76A68D5023DAE  : public RuntimeObject
{
};
struct CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C  : public RuntimeObject
{
	RuntimeObject* ____list;
	RuntimeObject* ____genericCollection;
	RuntimeObject* ____syncRoot;
};
struct Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E  : public RuntimeObject
{
	RuntimeObject* ___items;
};
struct Comparer_1_tE62B641BE766E2A64521CDD039848A39BB615641  : public RuntimeObject
{
};
struct Comparer_1_t0F059F5ABA856F2DBE2A9FA1A273E58AC12A1EFE  : public RuntimeObject
{
};
struct Comparer_1_tEDFEC427CBE9C1B52BAFBA8D874230713A5BA999  : public RuntimeObject
{
};
struct Comparer_1_tA8F9AF9FBAA4F88496CA2D8D5955DA525B303717  : public RuntimeObject
{
};
struct Comparer_1_tF6CBC9D5053440EC78A18359EF938040C34CAF03  : public RuntimeObject
{
};
struct Comparer_1_t3668ED07E95EA7C715D77DA02476D813B4AD755F  : public RuntimeObject
{
};
struct Comparer_1_tADD5B0926BF106941AA2F0D62816C79FAE3045EB  : public RuntimeObject
{
};
struct Comparer_1_t54E12BCA289B7D70D2FA8E18986A61CC9F04AEF2  : public RuntimeObject
{
};
struct Comparer_1_tE7739F3ABE4B8AAD02FC9C063DD0BA947B78F662  : public RuntimeObject
{
};
struct Comparer_1_tE05638C39F701AEBE54FCFC67F01B1FD36078AAC  : public RuntimeObject
{
};
struct Comparer_1_tDA6A3FD7E484C7A7801643C787FF765587661E2F  : public RuntimeObject
{
};
struct Comparer_1_tB21D08339C02EAD6556DADE9EF10A5CA38E0650A  : public RuntimeObject
{
};
struct Comparer_1_t43D3BE6FFC360205729876A15F84A71D3B4B8152  : public RuntimeObject
{
};
struct Comparer_1_t6438D88AA8DF41330529D5EF40B5C3201F0AD067  : public RuntimeObject
{
};
struct Comparer_1_t68B17BA3E17135A1B147ABB3AE72C8061216705D  : public RuntimeObject
{
};
struct Comparer_1_tF2DB3BD2CA1173AD083099710DF06D2223145FF8  : public RuntimeObject
{
};
struct Comparer_1_tD995F2C0D7D49A8AE212072C32E83489BA1D4CC6  : public RuntimeObject
{
};
struct Comparer_1_t81C0BB898453EB2947EA4DC903CA738B8451D8C7  : public RuntimeObject
{
};
struct Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C  : public RuntimeObject
{
};
struct Comparer_1_tEA47A919621D87B678B2A9B4E3A470CBDFED6A50  : public RuntimeObject
{
};
struct Comparer_1_t6CE26198E8C4440569AF51F23999535B2401D2CE  : public RuntimeObject
{
};
struct Comparer_1_tB990A9958FA73618E207C68A28691631B4041ECD  : public RuntimeObject
{
};
struct Comparer_1_t6CACB79C2EBD369DC9A73CD7AFFD61E4AF51766A  : public RuntimeObject
{
};
struct Comparer_1_t076B0182ABD27E6FBB4F0462C915AEDB5BDB353C  : public RuntimeObject
{
};
struct Comparer_1_t349274FE99585C3A3A56F84706A2EAAC58E4928A  : public RuntimeObject
{
};
struct Comparer_1_tEF25F1DB801EFE2B630996244237C9A87FE1F2A6  : public RuntimeObject
{
};
struct Comparer_1_tAEB9BDBB6E6B098717097547FA00C68C484C8E61  : public RuntimeObject
{
};
struct Comparer_1_t30EDE4A1BC5FA7ADF248621947782C677833308C  : public RuntimeObject
{
};
struct Comparer_1_t6CC844B989AE93163E90744FBDE5DC46CE82252C  : public RuntimeObject
{
};
struct Comparer_1_t8D1E640B4AB7DD29BA0DE9D4C9E16844734DD432  : public RuntimeObject
{
};
struct Comparer_1_t6916E99C71B0745FF2AC152B75FD4A0053BDCF20  : public RuntimeObject
{
};
struct Comparer_1_t20736A9CEDE849F79898D3668407800813B3D96A  : public RuntimeObject
{
};
struct Comparer_1_t9A2EF4540BB15E9CD8C6621B5B6C38000531194A  : public RuntimeObject
{
};
struct Comparer_1_t28AB01559DC24979532C98382E03D786703C23A3  : public RuntimeObject
{
};
struct Comparer_1_t4A32688AA2A0035BF550714701DCB59071C5C238  : public RuntimeObject
{
};
struct Comparer_1_t863F60FDFC3BB2F4804DE509838EDD1651EE17E4  : public RuntimeObject
{
};
struct Comparer_1_tF3253AF199E14EAEAA1F532B988B206070B122FE  : public RuntimeObject
{
};
struct Comparer_1_tC9CDD1656D3ADAAA24687E2B8CEEFBCDD149E10D  : public RuntimeObject
{
};
struct Comparer_1_tBA88744BBB37AF51F08AEFFC56268AE6678644F3  : public RuntimeObject
{
};
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4  : public RuntimeObject
{
};
struct Comparer_1_t34A89469081D6D38698AEA98234EB2570B181944  : public RuntimeObject
{
};
struct Comparer_1_t7E98ADD40AACA5A489930C91F1395FCB8315F225  : public RuntimeObject
{
};
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};
struct Comparer_1_t4EB0ADBCB3F521E51B444B8E631738B14C0C0063  : public RuntimeObject
{
};
struct Comparer_1_tECF0600884656F0F4F27BCB54DB74A5BFE41EB91  : public RuntimeObject
{
};
struct Comparer_1_t2158F98C5484AAD9CDBEC169B93B8E28C528F647  : public RuntimeObject
{
};
struct Comparer_1_tB561CAA6EA37F5AB92B7DD62949A3DE640305D48  : public RuntimeObject
{
};
struct Comparer_1_t76A0766C012F99A002D7E6C094CF54F7445E30A9  : public RuntimeObject
{
};
struct Comparer_1_t7D79B93D962FED51539E57571D173019714D3A58  : public RuntimeObject
{
};
struct Comparer_1_t2A7CD7D5B4BDA0E0234E7B9B180F2C39F864BC0A  : public RuntimeObject
{
};
struct Comparer_1_t420D73C41321F646BA6C9F312DC3B7CFDE282912  : public RuntimeObject
{
};
struct Comparer_1_t015660693150FE8606CD0BCD312D047C1D694F4D  : public RuntimeObject
{
};
struct Comparer_1_t3093E6EEB43CE2B11D84CFE0500ED48F22CBE8FD  : public RuntimeObject
{
};
struct Comparer_1_t9797759A13ACC2754ADBB42EFA5EDCC1701FE036  : public RuntimeObject
{
};
struct Comparer_1_t8BD78E66482FF4A4F4BBC5928AACAB5BB30B5E94  : public RuntimeObject
{
};
struct Comparer_1_t899D90A399D35CB1E70FF681B73910B9C1077E34  : public RuntimeObject
{
};
struct Comparer_1_t5D93D590BAEF39CA04B3F277ADCB55F92C55A7CB  : public RuntimeObject
{
};
struct Comparer_1_t297C425A92272F06C8AF46E01E0FFF916F075C6E  : public RuntimeObject
{
};
struct Comparer_1_t592FEFF1A46B062B8C2A75B332AC13A6DBA7D272  : public RuntimeObject
{
};
struct Comparer_1_tFC18D573723C22C61D052736BB038C772706EA86  : public RuntimeObject
{
};
struct Comparer_1_t4DA171D1CD971A4E1C9CF2367DE77C36DD4D2687  : public RuntimeObject
{
};
struct Comparer_1_tB5C67F47A3BD6C116B20FAB729E8BB6FEA90C781  : public RuntimeObject
{
};
struct Comparer_1_t27B822B3C88DEBBBFDB00E52663F584AAE251A8C  : public RuntimeObject
{
};
struct Comparer_1_t062DD1108ED729C784DCBD9514C298C6F09F4AA2  : public RuntimeObject
{
};
struct Comparer_1_tC072BB6D9751DF60DECD30E25A7AFC03C1B9224B  : public RuntimeObject
{
};
struct Comparer_1_t5564AAE71040E00A06891C3C2A1EAB7C9FCF05CC  : public RuntimeObject
{
};
struct Comparer_1_t47F40F83DC568A418923973A9DF4570DEE5225E1  : public RuntimeObject
{
};
struct Comparer_1_t046F9560C4CECCB3DA2344DC3427B27420989DE9  : public RuntimeObject
{
};
struct Comparer_1_t533505BAE6FAEE95883DC4F092C9B1503370EE82  : public RuntimeObject
{
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80  : public RuntimeObject
{
};
struct Comparer_1_t88D1E609547CDB93D82F17BA326F506DC1C371E6  : public RuntimeObject
{
};
struct Comparer_1_tF64ADEFB94CE2268B18EB8F0DA44DB9D8E3A94BD  : public RuntimeObject
{
};
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D  : public RuntimeObject
{
};
struct Comparer_1_t3DB3DE7BB01E6125039318497F95D839804473D6  : public RuntimeObject
{
};
struct Comparer_1_t77500A2EFE7424E8B06A6E0690A05E1EE7A3B91E  : public RuntimeObject
{
};
struct Comparer_1_t7F5FD392B768C539D47F9869EC37E1E72149F006  : public RuntimeObject
{
};
struct Comparer_1_t748E80C1A47B867E6DBB5D12E500B6516A27B880  : public RuntimeObject
{
};
struct Comparer_1_t23421756F8088B6B5616896BDBE558A89217CCDC  : public RuntimeObject
{
};
struct Comparer_1_tBCE328A5CAD7B70102267D55F580E22896B90A62  : public RuntimeObject
{
};
struct Comparer_1_tC87240B80734A873F7622A6031AAF6F7B9305570  : public RuntimeObject
{
};
struct Comparer_1_tBF53A970ED6F537ECB335BF96DCD7BE6ACF61CC5  : public RuntimeObject
{
};
struct Comparer_1_tEA9EC5743A4F2950C76AC377A788286E8039B53C  : public RuntimeObject
{
};
struct Comparer_1_tEC0532A752985C5027C95B36A051FC9116BEBAAB  : public RuntimeObject
{
};
struct Comparer_1_t4CD637988E21011E3775D04BAB82074E5CD1607A  : public RuntimeObject
{
};
struct Comparer_1_tD0678FDAC373F41CF41D954C5C58D4377BD77A39  : public RuntimeObject
{
};
struct Comparer_1_t33558EBC37D1C8667C87D8FB3559B99135BD8AEC  : public RuntimeObject
{
};
struct Comparer_1_t2469E2C46043B8C17CEFDDA3D95714EFD120AE58  : public RuntimeObject
{
};
struct Comparer_1_t85127BA50FE9EB21CEECD9D95C0636932C41EF10  : public RuntimeObject
{
};
struct Comparer_1_t1A2B7330777E2361D018C47C4BE717D8BDA862CC  : public RuntimeObject
{
};
struct Comparer_1_t8B8C5AA2B7398E73F4DA37CF8E95898DECC1CC56  : public RuntimeObject
{
};
struct Comparer_1_t6AF36413158EA24D71858F557432B4F5EEF95A8C  : public RuntimeObject
{
};
struct Comparer_1_t41A6C22A19F40D026751614933AF9E8E4DBCADEB  : public RuntimeObject
{
};
struct Comparer_1_t6FB7AE63222025BCABE276726945F870924CBC06  : public RuntimeObject
{
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
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
struct ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3  : public RuntimeObject
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___m_List;
	Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___m_CreateFunc;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnGet;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnRelease;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	Il2CppSharedGenericObject* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
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
struct PooledObject_1_t2C2287E441A351DB1EDBB6A3671E06D7AE5E5F79 
{
	Il2CppSharedGenericObject* ___m_ToReturn;
	RuntimeObject* ___m_Pool;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct PropagationPhase_tF3BE8BF5ED45FC52A828B7B6F078B64F01FAE6D6 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
};
struct CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4  : public EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F
{
	String_t* ___m_CommandName;
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Nodes;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Configs;
};
struct LayoutConfig_tD448909812F1AA8DE14EAC340688D6FF41B52C87 
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
struct U3CU3Ec_t1FAB174F52CB9A91AE0D234692A4318F222CA215_StaticFields
{
	U3CU3Ec_t1FAB174F52CB9A91AE0D234692A4318F222CA215* ___U3CU3E9;
};
struct CollectionPool_2_t010265BE2E6280164CBDAF3A6FA76A68D5023DAE_StaticFields
{
	ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* ___s_Pool;
};
struct Comparer_1_tE62B641BE766E2A64521CDD039848A39BB615641_StaticFields
{
	Comparer_1_tE62B641BE766E2A64521CDD039848A39BB615641* ___defaultComparer;
};
struct Comparer_1_t0F059F5ABA856F2DBE2A9FA1A273E58AC12A1EFE_StaticFields
{
	Comparer_1_t0F059F5ABA856F2DBE2A9FA1A273E58AC12A1EFE* ___defaultComparer;
};
struct Comparer_1_tEDFEC427CBE9C1B52BAFBA8D874230713A5BA999_StaticFields
{
	Comparer_1_tEDFEC427CBE9C1B52BAFBA8D874230713A5BA999* ___defaultComparer;
};
struct Comparer_1_tA8F9AF9FBAA4F88496CA2D8D5955DA525B303717_StaticFields
{
	Comparer_1_tA8F9AF9FBAA4F88496CA2D8D5955DA525B303717* ___defaultComparer;
};
struct Comparer_1_tF6CBC9D5053440EC78A18359EF938040C34CAF03_StaticFields
{
	Comparer_1_tF6CBC9D5053440EC78A18359EF938040C34CAF03* ___defaultComparer;
};
struct Comparer_1_t3668ED07E95EA7C715D77DA02476D813B4AD755F_StaticFields
{
	Comparer_1_t3668ED07E95EA7C715D77DA02476D813B4AD755F* ___defaultComparer;
};
struct Comparer_1_tADD5B0926BF106941AA2F0D62816C79FAE3045EB_StaticFields
{
	Comparer_1_tADD5B0926BF106941AA2F0D62816C79FAE3045EB* ___defaultComparer;
};
struct Comparer_1_t54E12BCA289B7D70D2FA8E18986A61CC9F04AEF2_StaticFields
{
	Comparer_1_t54E12BCA289B7D70D2FA8E18986A61CC9F04AEF2* ___defaultComparer;
};
struct Comparer_1_tE7739F3ABE4B8AAD02FC9C063DD0BA947B78F662_StaticFields
{
	Comparer_1_tE7739F3ABE4B8AAD02FC9C063DD0BA947B78F662* ___defaultComparer;
};
struct Comparer_1_tE05638C39F701AEBE54FCFC67F01B1FD36078AAC_StaticFields
{
	Comparer_1_tE05638C39F701AEBE54FCFC67F01B1FD36078AAC* ___defaultComparer;
};
struct Comparer_1_tDA6A3FD7E484C7A7801643C787FF765587661E2F_StaticFields
{
	Comparer_1_tDA6A3FD7E484C7A7801643C787FF765587661E2F* ___defaultComparer;
};
struct Comparer_1_tB21D08339C02EAD6556DADE9EF10A5CA38E0650A_StaticFields
{
	Comparer_1_tB21D08339C02EAD6556DADE9EF10A5CA38E0650A* ___defaultComparer;
};
struct Comparer_1_t43D3BE6FFC360205729876A15F84A71D3B4B8152_StaticFields
{
	Comparer_1_t43D3BE6FFC360205729876A15F84A71D3B4B8152* ___defaultComparer;
};
struct Comparer_1_t6438D88AA8DF41330529D5EF40B5C3201F0AD067_StaticFields
{
	Comparer_1_t6438D88AA8DF41330529D5EF40B5C3201F0AD067* ___defaultComparer;
};
struct Comparer_1_t68B17BA3E17135A1B147ABB3AE72C8061216705D_StaticFields
{
	Comparer_1_t68B17BA3E17135A1B147ABB3AE72C8061216705D* ___defaultComparer;
};
struct Comparer_1_tF2DB3BD2CA1173AD083099710DF06D2223145FF8_StaticFields
{
	Comparer_1_tF2DB3BD2CA1173AD083099710DF06D2223145FF8* ___defaultComparer;
};
struct Comparer_1_tD995F2C0D7D49A8AE212072C32E83489BA1D4CC6_StaticFields
{
	Comparer_1_tD995F2C0D7D49A8AE212072C32E83489BA1D4CC6* ___defaultComparer;
};
struct Comparer_1_t81C0BB898453EB2947EA4DC903CA738B8451D8C7_StaticFields
{
	Comparer_1_t81C0BB898453EB2947EA4DC903CA738B8451D8C7* ___defaultComparer;
};
struct Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C_StaticFields
{
	Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C* ___defaultComparer;
};
struct Comparer_1_tEA47A919621D87B678B2A9B4E3A470CBDFED6A50_StaticFields
{
	Comparer_1_tEA47A919621D87B678B2A9B4E3A470CBDFED6A50* ___defaultComparer;
};
struct Comparer_1_t6CE26198E8C4440569AF51F23999535B2401D2CE_StaticFields
{
	Comparer_1_t6CE26198E8C4440569AF51F23999535B2401D2CE* ___defaultComparer;
};
struct Comparer_1_tB990A9958FA73618E207C68A28691631B4041ECD_StaticFields
{
	Comparer_1_tB990A9958FA73618E207C68A28691631B4041ECD* ___defaultComparer;
};
struct Comparer_1_t6CACB79C2EBD369DC9A73CD7AFFD61E4AF51766A_StaticFields
{
	Comparer_1_t6CACB79C2EBD369DC9A73CD7AFFD61E4AF51766A* ___defaultComparer;
};
struct Comparer_1_t076B0182ABD27E6FBB4F0462C915AEDB5BDB353C_StaticFields
{
	Comparer_1_t076B0182ABD27E6FBB4F0462C915AEDB5BDB353C* ___defaultComparer;
};
struct Comparer_1_t349274FE99585C3A3A56F84706A2EAAC58E4928A_StaticFields
{
	Comparer_1_t349274FE99585C3A3A56F84706A2EAAC58E4928A* ___defaultComparer;
};
struct Comparer_1_tEF25F1DB801EFE2B630996244237C9A87FE1F2A6_StaticFields
{
	Comparer_1_tEF25F1DB801EFE2B630996244237C9A87FE1F2A6* ___defaultComparer;
};
struct Comparer_1_tAEB9BDBB6E6B098717097547FA00C68C484C8E61_StaticFields
{
	Comparer_1_tAEB9BDBB6E6B098717097547FA00C68C484C8E61* ___defaultComparer;
};
struct Comparer_1_t30EDE4A1BC5FA7ADF248621947782C677833308C_StaticFields
{
	Comparer_1_t30EDE4A1BC5FA7ADF248621947782C677833308C* ___defaultComparer;
};
struct Comparer_1_t6CC844B989AE93163E90744FBDE5DC46CE82252C_StaticFields
{
	Comparer_1_t6CC844B989AE93163E90744FBDE5DC46CE82252C* ___defaultComparer;
};
struct Comparer_1_t8D1E640B4AB7DD29BA0DE9D4C9E16844734DD432_StaticFields
{
	Comparer_1_t8D1E640B4AB7DD29BA0DE9D4C9E16844734DD432* ___defaultComparer;
};
struct Comparer_1_t6916E99C71B0745FF2AC152B75FD4A0053BDCF20_StaticFields
{
	Comparer_1_t6916E99C71B0745FF2AC152B75FD4A0053BDCF20* ___defaultComparer;
};
struct Comparer_1_t20736A9CEDE849F79898D3668407800813B3D96A_StaticFields
{
	Comparer_1_t20736A9CEDE849F79898D3668407800813B3D96A* ___defaultComparer;
};
struct Comparer_1_t9A2EF4540BB15E9CD8C6621B5B6C38000531194A_StaticFields
{
	Comparer_1_t9A2EF4540BB15E9CD8C6621B5B6C38000531194A* ___defaultComparer;
};
struct Comparer_1_t28AB01559DC24979532C98382E03D786703C23A3_StaticFields
{
	Comparer_1_t28AB01559DC24979532C98382E03D786703C23A3* ___defaultComparer;
};
struct Comparer_1_t4A32688AA2A0035BF550714701DCB59071C5C238_StaticFields
{
	Comparer_1_t4A32688AA2A0035BF550714701DCB59071C5C238* ___defaultComparer;
};
struct Comparer_1_t863F60FDFC3BB2F4804DE509838EDD1651EE17E4_StaticFields
{
	Comparer_1_t863F60FDFC3BB2F4804DE509838EDD1651EE17E4* ___defaultComparer;
};
struct Comparer_1_tF3253AF199E14EAEAA1F532B988B206070B122FE_StaticFields
{
	Comparer_1_tF3253AF199E14EAEAA1F532B988B206070B122FE* ___defaultComparer;
};
struct Comparer_1_tC9CDD1656D3ADAAA24687E2B8CEEFBCDD149E10D_StaticFields
{
	Comparer_1_tC9CDD1656D3ADAAA24687E2B8CEEFBCDD149E10D* ___defaultComparer;
};
struct Comparer_1_tBA88744BBB37AF51F08AEFFC56268AE6678644F3_StaticFields
{
	Comparer_1_tBA88744BBB37AF51F08AEFFC56268AE6678644F3* ___defaultComparer;
};
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4_StaticFields
{
	Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* ___defaultComparer;
};
struct Comparer_1_t34A89469081D6D38698AEA98234EB2570B181944_StaticFields
{
	Comparer_1_t34A89469081D6D38698AEA98234EB2570B181944* ___defaultComparer;
};
struct Comparer_1_t7E98ADD40AACA5A489930C91F1395FCB8315F225_StaticFields
{
	Comparer_1_t7E98ADD40AACA5A489930C91F1395FCB8315F225* ___defaultComparer;
};
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer;
};
struct Comparer_1_t4EB0ADBCB3F521E51B444B8E631738B14C0C0063_StaticFields
{
	Comparer_1_t4EB0ADBCB3F521E51B444B8E631738B14C0C0063* ___defaultComparer;
};
struct Comparer_1_tECF0600884656F0F4F27BCB54DB74A5BFE41EB91_StaticFields
{
	Comparer_1_tECF0600884656F0F4F27BCB54DB74A5BFE41EB91* ___defaultComparer;
};
struct Comparer_1_t2158F98C5484AAD9CDBEC169B93B8E28C528F647_StaticFields
{
	Comparer_1_t2158F98C5484AAD9CDBEC169B93B8E28C528F647* ___defaultComparer;
};
struct Comparer_1_tB561CAA6EA37F5AB92B7DD62949A3DE640305D48_StaticFields
{
	Comparer_1_tB561CAA6EA37F5AB92B7DD62949A3DE640305D48* ___defaultComparer;
};
struct Comparer_1_t76A0766C012F99A002D7E6C094CF54F7445E30A9_StaticFields
{
	Comparer_1_t76A0766C012F99A002D7E6C094CF54F7445E30A9* ___defaultComparer;
};
struct Comparer_1_t7D79B93D962FED51539E57571D173019714D3A58_StaticFields
{
	Comparer_1_t7D79B93D962FED51539E57571D173019714D3A58* ___defaultComparer;
};
struct Comparer_1_t2A7CD7D5B4BDA0E0234E7B9B180F2C39F864BC0A_StaticFields
{
	Comparer_1_t2A7CD7D5B4BDA0E0234E7B9B180F2C39F864BC0A* ___defaultComparer;
};
struct Comparer_1_t420D73C41321F646BA6C9F312DC3B7CFDE282912_StaticFields
{
	Comparer_1_t420D73C41321F646BA6C9F312DC3B7CFDE282912* ___defaultComparer;
};
struct Comparer_1_t015660693150FE8606CD0BCD312D047C1D694F4D_StaticFields
{
	Comparer_1_t015660693150FE8606CD0BCD312D047C1D694F4D* ___defaultComparer;
};
struct Comparer_1_t3093E6EEB43CE2B11D84CFE0500ED48F22CBE8FD_StaticFields
{
	Comparer_1_t3093E6EEB43CE2B11D84CFE0500ED48F22CBE8FD* ___defaultComparer;
};
struct Comparer_1_t9797759A13ACC2754ADBB42EFA5EDCC1701FE036_StaticFields
{
	Comparer_1_t9797759A13ACC2754ADBB42EFA5EDCC1701FE036* ___defaultComparer;
};
struct Comparer_1_t8BD78E66482FF4A4F4BBC5928AACAB5BB30B5E94_StaticFields
{
	Comparer_1_t8BD78E66482FF4A4F4BBC5928AACAB5BB30B5E94* ___defaultComparer;
};
struct Comparer_1_t899D90A399D35CB1E70FF681B73910B9C1077E34_StaticFields
{
	Comparer_1_t899D90A399D35CB1E70FF681B73910B9C1077E34* ___defaultComparer;
};
struct Comparer_1_t5D93D590BAEF39CA04B3F277ADCB55F92C55A7CB_StaticFields
{
	Comparer_1_t5D93D590BAEF39CA04B3F277ADCB55F92C55A7CB* ___defaultComparer;
};
struct Comparer_1_t297C425A92272F06C8AF46E01E0FFF916F075C6E_StaticFields
{
	Comparer_1_t297C425A92272F06C8AF46E01E0FFF916F075C6E* ___defaultComparer;
};
struct Comparer_1_t592FEFF1A46B062B8C2A75B332AC13A6DBA7D272_StaticFields
{
	Comparer_1_t592FEFF1A46B062B8C2A75B332AC13A6DBA7D272* ___defaultComparer;
};
struct Comparer_1_tFC18D573723C22C61D052736BB038C772706EA86_StaticFields
{
	Comparer_1_tFC18D573723C22C61D052736BB038C772706EA86* ___defaultComparer;
};
struct Comparer_1_t4DA171D1CD971A4E1C9CF2367DE77C36DD4D2687_StaticFields
{
	Comparer_1_t4DA171D1CD971A4E1C9CF2367DE77C36DD4D2687* ___defaultComparer;
};
struct Comparer_1_tB5C67F47A3BD6C116B20FAB729E8BB6FEA90C781_StaticFields
{
	Comparer_1_tB5C67F47A3BD6C116B20FAB729E8BB6FEA90C781* ___defaultComparer;
};
struct Comparer_1_t27B822B3C88DEBBBFDB00E52663F584AAE251A8C_StaticFields
{
	Comparer_1_t27B822B3C88DEBBBFDB00E52663F584AAE251A8C* ___defaultComparer;
};
struct Comparer_1_t062DD1108ED729C784DCBD9514C298C6F09F4AA2_StaticFields
{
	Comparer_1_t062DD1108ED729C784DCBD9514C298C6F09F4AA2* ___defaultComparer;
};
struct Comparer_1_tC072BB6D9751DF60DECD30E25A7AFC03C1B9224B_StaticFields
{
	Comparer_1_tC072BB6D9751DF60DECD30E25A7AFC03C1B9224B* ___defaultComparer;
};
struct Comparer_1_t5564AAE71040E00A06891C3C2A1EAB7C9FCF05CC_StaticFields
{
	Comparer_1_t5564AAE71040E00A06891C3C2A1EAB7C9FCF05CC* ___defaultComparer;
};
struct Comparer_1_t47F40F83DC568A418923973A9DF4570DEE5225E1_StaticFields
{
	Comparer_1_t47F40F83DC568A418923973A9DF4570DEE5225E1* ___defaultComparer;
};
struct Comparer_1_t046F9560C4CECCB3DA2344DC3427B27420989DE9_StaticFields
{
	Comparer_1_t046F9560C4CECCB3DA2344DC3427B27420989DE9* ___defaultComparer;
};
struct Comparer_1_t533505BAE6FAEE95883DC4F092C9B1503370EE82_StaticFields
{
	Comparer_1_t533505BAE6FAEE95883DC4F092C9B1503370EE82* ___defaultComparer;
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer;
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80_StaticFields
{
	Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* ___defaultComparer;
};
struct Comparer_1_t88D1E609547CDB93D82F17BA326F506DC1C371E6_StaticFields
{
	Comparer_1_t88D1E609547CDB93D82F17BA326F506DC1C371E6* ___defaultComparer;
};
struct Comparer_1_tF64ADEFB94CE2268B18EB8F0DA44DB9D8E3A94BD_StaticFields
{
	Comparer_1_tF64ADEFB94CE2268B18EB8F0DA44DB9D8E3A94BD* ___defaultComparer;
};
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D_StaticFields
{
	Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* ___defaultComparer;
};
struct Comparer_1_t3DB3DE7BB01E6125039318497F95D839804473D6_StaticFields
{
	Comparer_1_t3DB3DE7BB01E6125039318497F95D839804473D6* ___defaultComparer;
};
struct Comparer_1_t77500A2EFE7424E8B06A6E0690A05E1EE7A3B91E_StaticFields
{
	Comparer_1_t77500A2EFE7424E8B06A6E0690A05E1EE7A3B91E* ___defaultComparer;
};
struct Comparer_1_t7F5FD392B768C539D47F9869EC37E1E72149F006_StaticFields
{
	Comparer_1_t7F5FD392B768C539D47F9869EC37E1E72149F006* ___defaultComparer;
};
struct Comparer_1_t748E80C1A47B867E6DBB5D12E500B6516A27B880_StaticFields
{
	Comparer_1_t748E80C1A47B867E6DBB5D12E500B6516A27B880* ___defaultComparer;
};
struct Comparer_1_t23421756F8088B6B5616896BDBE558A89217CCDC_StaticFields
{
	Comparer_1_t23421756F8088B6B5616896BDBE558A89217CCDC* ___defaultComparer;
};
struct Comparer_1_tBCE328A5CAD7B70102267D55F580E22896B90A62_StaticFields
{
	Comparer_1_tBCE328A5CAD7B70102267D55F580E22896B90A62* ___defaultComparer;
};
struct Comparer_1_tC87240B80734A873F7622A6031AAF6F7B9305570_StaticFields
{
	Comparer_1_tC87240B80734A873F7622A6031AAF6F7B9305570* ___defaultComparer;
};
struct Comparer_1_tBF53A970ED6F537ECB335BF96DCD7BE6ACF61CC5_StaticFields
{
	Comparer_1_tBF53A970ED6F537ECB335BF96DCD7BE6ACF61CC5* ___defaultComparer;
};
struct Comparer_1_tEA9EC5743A4F2950C76AC377A788286E8039B53C_StaticFields
{
	Comparer_1_tEA9EC5743A4F2950C76AC377A788286E8039B53C* ___defaultComparer;
};
struct Comparer_1_tEC0532A752985C5027C95B36A051FC9116BEBAAB_StaticFields
{
	Comparer_1_tEC0532A752985C5027C95B36A051FC9116BEBAAB* ___defaultComparer;
};
struct Comparer_1_t4CD637988E21011E3775D04BAB82074E5CD1607A_StaticFields
{
	Comparer_1_t4CD637988E21011E3775D04BAB82074E5CD1607A* ___defaultComparer;
};
struct Comparer_1_tD0678FDAC373F41CF41D954C5C58D4377BD77A39_StaticFields
{
	Comparer_1_tD0678FDAC373F41CF41D954C5C58D4377BD77A39* ___defaultComparer;
};
struct Comparer_1_t33558EBC37D1C8667C87D8FB3559B99135BD8AEC_StaticFields
{
	Comparer_1_t33558EBC37D1C8667C87D8FB3559B99135BD8AEC* ___defaultComparer;
};
struct Comparer_1_t2469E2C46043B8C17CEFDDA3D95714EFD120AE58_StaticFields
{
	Comparer_1_t2469E2C46043B8C17CEFDDA3D95714EFD120AE58* ___defaultComparer;
};
struct Comparer_1_t85127BA50FE9EB21CEECD9D95C0636932C41EF10_StaticFields
{
	Comparer_1_t85127BA50FE9EB21CEECD9D95C0636932C41EF10* ___defaultComparer;
};
struct Comparer_1_t1A2B7330777E2361D018C47C4BE717D8BDA862CC_StaticFields
{
	Comparer_1_t1A2B7330777E2361D018C47C4BE717D8BDA862CC* ___defaultComparer;
};
struct Comparer_1_t8B8C5AA2B7398E73F4DA37CF8E95898DECC1CC56_StaticFields
{
	Comparer_1_t8B8C5AA2B7398E73F4DA37CF8E95898DECC1CC56* ___defaultComparer;
};
struct Comparer_1_t6AF36413158EA24D71858F557432B4F5EEF95A8C_StaticFields
{
	Comparer_1_t6AF36413158EA24D71858F557432B4F5EEF95A8C* ___defaultComparer;
};
struct Comparer_1_t41A6C22A19F40D026751614933AF9E8E4DBCADEB_StaticFields
{
	Comparer_1_t41A6C22A19F40D026751614933AF9E8E4DBCADEB* ___defaultComparer;
};
struct Comparer_1_t6FB7AE63222025BCABE276726945F870924CBC06_StaticFields
{
	Comparer_1_t6FB7AE63222025BCABE276726945F870924CBC06* ___defaultComparer;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_t2C2287E441A351DB1EDBB6A3671E06D7AE5E5F79 ObjectPool_1_Get_mC71BA7CBB58416202F477C9EA00D9E3AB436CF2D_gshared (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject** ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_fshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_fshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC_gshared (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___0_createFunc, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___1_actionOnGet, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___2_actionOnRelease, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisIl2CppFullySharedGenericAny_m1480F4A804D000C8613E5F669E3AB77411F468A5_fshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_VerifyValueType_mCCC186ED94E7E5E2B6045EC28058A6114EA4FC17_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_IsCompatibleObject_m8EC681F3845782BE270CDD8A54BCCCD61343516D_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_get_Count_m4E6700446481671FD288965E4B65F22E64D9A0FC_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A_fshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_set_Item_m06AE2AE919C0BB6ECC0D6B7F9DE5B47B386524D2_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Add_mF22066358998A145CE60DDE6744CA01EB558E2FF_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_IsCompatibleObject_m92713E94D30BC00F4194BFF0BB209EE195B6EA02_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_Contains_m18024715EBAF403F2BAB0C57C3D1E6514B0A3BED_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_IndexOf_mC7240C5BF76EA8F698670E42707029D928AA0564_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Insert_mF526AB1879424E4471FE76E1350C7EFDD33C1B6A_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_Remove_m18F4865C353A82187E0D177BC61C7E7C0FF3456A_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934_gshared (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_LocalInit_mF4473619A9FFEBBC4E91C595246FA58F7EE63F0A_gshared (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommandEventBase_1_set_commandName_m522BCB7AB1126F596938605F6D2D5D2EF7978BDF_gshared_inline (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD_gshared (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_fshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_fshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26_gshared (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;

inline Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline)(__this, method);
}
inline PooledObject_1_t2C2287E441A351DB1EDBB6A3671E06D7AE5E5F79 ObjectPool_1_Get_mC71BA7CBB58416202F477C9EA00D9E3AB436CF2D (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject** ___0_v, const RuntimeMethod* method)
{
	return ((  PooledObject_1_t2C2287E441A351DB1EDBB6A3671E06D7AE5E5F79 (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, Il2CppSharedGenericObject**, const RuntimeMethod*))ObjectPool_1_Get_mC71BA7CBB58416202F477C9EA00D9E3AB436CF2D_gshared)(__this, ___0_v, method);
}
inline void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, Il2CppSharedGenericObject*, const RuntimeMethod*))ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline)(__this, ___0_element, method);
}
inline void Func_1__ctor_m5FD0E1320A7A8964A7FCC0D0EA7F809E4E76E0EF (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t566D4A654882E282E54CDC3A001E05486F913903*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_fshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_mDF5EF31AC1ADD4373D136754E84CC2A4BA4E065C (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_fshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___0_createFunc, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___1_actionOnGet, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___2_actionOnRelease, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, Func_1_t566D4A654882E282E54CDC3A001E05486F913903*, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC_gshared)(__this, ___0_createFunc, ___1_actionOnGet, ___2_actionOnRelease, ___3_actionOnDestroy, ___4_collectionCheck, ___5_defaultCapacity, ___6_maxSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method) ;
inline RuntimeObject* Enumerable_Cast_TisIl2CppFullySharedGenericAny_m1480F4A804D000C8613E5F669E3AB77411F468A5 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisIl2CppFullySharedGenericAny_m1480F4A804D000C8613E5F669E3AB77411F468A5_fshared)(___0_source, method);
}
inline void CollectionWrapper_1_VerifyValueType_mCCC186ED94E7E5E2B6045EC28058A6114EA4FC17 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))CollectionWrapper_1_VerifyValueType_mCCC186ED94E7E5E2B6045EC28058A6114EA4FC17_fshared)(___0_value, method);
}
inline bool CollectionWrapper_1_IsCompatibleObject_m8EC681F3845782BE270CDD8A54BCCCD61343516D (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))CollectionWrapper_1_IsCompatibleObject_m8EC681F3845782BE270CDD8A54BCCCD61343516D_fshared)(___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mE8641D4F1BDCF64E9876EE3B78F84D7AC377D3E9 (String_t* ___0_format, RuntimeObject* ___1_provider, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsValueType_mD736A971C1BB5B1092EBD01BB9DF7B8D8C1C26BD (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsNullableType_mA710C2540434AAA2353481C15C48C3996EC69963 (Type_t* ___0_t, const RuntimeMethod* method) ;
inline void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Collection_1_get_Count_m4E6700446481671FD288965E4B65F22E64D9A0FC (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*, const RuntimeMethod*))Collection_1_get_Count_m4E6700446481671FD288965E4B65F22E64D9A0FC_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A_fshared)(___0_value, ___1_argName, method);
}
inline void Collection_1_set_Item_m06AE2AE919C0BB6ECC0D6B7F9DE5B47B386524D2 (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))Collection_1_set_Item_m06AE2AE919C0BB6ECC0D6B7F9DE5B47B386524D2_fshared)((Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*)__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void Collection_1_Add_mF22066358998A145CE60DDE6744CA01EB558E2FF (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Collection_1_Add_mF22066358998A145CE60DDE6744CA01EB558E2FF_fshared)((Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*)__this, ___0_item, method);
}
inline bool Collection_1_IsCompatibleObject_m92713E94D30BC00F4194BFF0BB209EE195B6EA02 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Collection_1_IsCompatibleObject_m92713E94D30BC00F4194BFF0BB209EE195B6EA02_fshared)(___0_value, method);
}
inline bool Collection_1_Contains_m18024715EBAF403F2BAB0C57C3D1E6514B0A3BED (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Collection_1_Contains_m18024715EBAF403F2BAB0C57C3D1E6514B0A3BED_fshared)((Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*)__this, ___0_item, method);
}
inline int32_t Collection_1_IndexOf_mC7240C5BF76EA8F698670E42707029D928AA0564 (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Collection_1_IndexOf_mC7240C5BF76EA8F698670E42707029D928AA0564_fshared)((Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*)__this, ___0_item, method);
}
inline void Collection_1_Insert_mF526AB1879424E4471FE76E1350C7EFDD33C1B6A (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))Collection_1_Insert_mF526AB1879424E4471FE76E1350C7EFDD33C1B6A_fshared)((Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*)__this, ___0_index, ___1_item, method);
}
inline bool Collection_1_Remove_m18F4865C353A82187E0D177BC61C7E7C0FF3456A (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Collection_1_Remove_m18F4865C353A82187E0D177BC61C7E7C0FF3456A_fshared)((Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*)__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
inline void EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934 (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*, const RuntimeMethod*))EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934_gshared)(__this, method);
}
inline void CommandEventBase_1_LocalInit_mF4473619A9FFEBBC4E91C595246FA58F7EE63F0A (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, const RuntimeMethod* method)
{
	((  void (*) (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4*, const RuntimeMethod*))CommandEventBase_1_LocalInit_mF4473619A9FFEBBC4E91C595246FA58F7EE63F0A_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void CommandEventBase_1_set_commandName_m522BCB7AB1126F596938605F6D2D5D2EF7978BDF_inline (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4*, String_t*, const RuntimeMethod*))CommandEventBase_1_set_commandName_m522BCB7AB1126F596938605F6D2D5D2EF7978BDF_gshared_inline)(__this, ___0_value, method);
}
inline Il2CppSharedGenericObject* EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDispatchUtilities_DispatchToFocusedElementOrPanelRoot_m4CEE7476000CEC9E6B2CEE39FDBE53D7B017E050 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___1_panel, const RuntimeMethod* method) ;
inline void EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*, const RuntimeMethod*))EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD_gshared)(__this, method);
}
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_fshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline)(__this, method);
}
inline void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, int32_t, const RuntimeMethod*))ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline)(__this, ___0_value, method);
}
inline Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_fshared)(__this, ___0_index, method);
}
inline void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5 (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_fshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
inline int32_t ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26 (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26_gshared)(__this, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 38921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* CollectionPool_2_Get_mCA6A59037E62E82C9DC1969FB51DAB1EE6680BC7_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(CollectionPool_2_tBED14C57FCB68DB76BF3F96F4FB125E03B25076A_StaticInit);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18925));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18926));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/CollectionPool.cs:13>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18927));
		CHECKED_LOCAL_INIT(CollectionPool_2_tBED14C57FCB68DB76BF3F96F4FB125E03B25076A_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_0 = ((CollectionPool_2_t010265BE2E6280164CBDAF3A6FA76A68D5023DAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18928));
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_1;
		L_1 = ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_inline(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18928));
		return L_1;
	}
}
// Method Definition Index: 38922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_t2C2287E441A351DB1EDBB6A3671E06D7AE5E5F79 CollectionPool_2_Get_m361A4851344AA371CE1C6A8365FFD0E904A6404D_fshared (Il2CppSharedGenericObject** ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(CollectionPool_2_tBED14C57FCB68DB76BF3F96F4FB125E03B25076A_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18929));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18930));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/CollectionPool.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18931));
		CHECKED_LOCAL_INIT(CollectionPool_2_tBED14C57FCB68DB76BF3F96F4FB125E03B25076A_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_0 = ((CollectionPool_2_t010265BE2E6280164CBDAF3A6FA76A68D5023DAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		Il2CppSharedGenericObject** L_1 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18932));
		NullCheck(L_0);
		PooledObject_1_t2C2287E441A351DB1EDBB6A3671E06D7AE5E5F79 L_2;
		L_2 = ObjectPool_1_Get_mC71BA7CBB58416202F477C9EA00D9E3AB436CF2D(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18932));
		return L_2;
	}
}
// Method Definition Index: 38923
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_mDA9650042FBFBF87ACF8578952DED7412E6B8A75_fshared (Il2CppSharedGenericObject* ___0_toRelease, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(CollectionPool_2_tBED14C57FCB68DB76BF3F96F4FB125E03B25076A_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_toRelease));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18933));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18934));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/CollectionPool.cs:26>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18935));
		CHECKED_LOCAL_INIT(CollectionPool_2_tBED14C57FCB68DB76BF3F96F4FB125E03B25076A_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_0 = ((CollectionPool_2_t010265BE2E6280164CBDAF3A6FA76A68D5023DAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		Il2CppSharedGenericObject* L_1 = ___0_toRelease;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18936));
		NullCheck(L_0);
		ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_inline(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18936));
		return;
	}
}
// Method Definition Index: 38924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_mC96F45196B0D336F2483F63EAFCB30BE0437A4E5_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t63CAD67F42EE09460E8CE67D3D4AFC06C24EC824_StaticInit);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18937));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18938));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/CollectionPool.cs:7>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18939));
		CHECKED_LOCAL_INIT(U3CU3Ec_t63CAD67F42EE09460E8CE67D3D4AFC06C24EC824_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t1FAB174F52CB9A91AE0D234692A4318F222CA215* L_0 = ((U3CU3Ec_t1FAB174F52CB9A91AE0D234692A4318F222CA215_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18940));
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_1 = (Func_1_t566D4A654882E282E54CDC3A001E05486F913903*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		Func_1__ctor_m5FD0E1320A7A8964A7FCC0D0EA7F809E4E76E0EF(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18940));
		U3CU3Ec_t1FAB174F52CB9A91AE0D234692A4318F222CA215* L_2 = ((U3CU3Ec_t1FAB174F52CB9A91AE0D234692A4318F222CA215_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18941));
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_3 = (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		Action_1__ctor_mDF5EF31AC1ADD4373D136754E84CC2A4BA4E065C(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18941));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18942));
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_4 = (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC(L_4, L_1, (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)NULL, L_3, (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18942));
		((CollectionPool_2_t010265BE2E6280164CBDAF3A6FA76A68D5023DAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t010265BE2E6280164CBDAF3A6FA76A68D5023DAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool), (void*)L_4);
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
// Method Definition Index: 58029
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1__ctor_mBEF82316A479E910A72BB660D2F85CC475F4A858_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC, NULL);
		RuntimeObject* L_1 = ___0_list;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0))))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_2 = ___0_list;
		__this->____genericCollection = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____genericCollection), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0))));
		return;
	}

IL_0026:
	{
		RuntimeObject* L_3 = ___0_list;
		__this->____list = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list), (void*)L_3);
		return;
	}
}
// Method Definition Index: 58030
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1__ctor_m3201772CF5DA350674F2DDA4671C3BF88185845B_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888((RuntimeObject*)L_0, _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC, NULL);
		RuntimeObject* L_1 = ___0_list;
		__this->____genericCollection = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____genericCollection), (void*)L_1);
		return;
	}
}
// Method Definition Index: 58031
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_Add_m11CD3EB04BAE94EED696399D005FDB09A77CCF57_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		NullCheck(L_1);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_2: *(void**)L_2));
		return;
	}

IL_0015:
	{
		RuntimeObject* L_3 = __this->____list;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_4);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3, L_5);
		return;
	}
}
// Method Definition Index: 58032
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_Clear_m45C30C847BF0C132654DE456D0A4F1B84F9DB75A_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1);
		return;
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->____list;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(4, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2);
		return;
	}
}
// Method Definition Index: 58033
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_Contains_m9853AEA49A2875DBB3A59CA46BC618393181E404_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_2: *(void**)L_2));
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = __this->____list;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_6);
		return L_7;
	}
}
// Method Definition Index: 58034
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_CopyTo_mC26F73DA2C5CCEA54249D9FDE96CE93637F41AB5_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
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
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = ___1_arrayIndex;
		NullCheck(L_1);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1, L_2, L_3);
		return;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->____list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = ___1_arrayIndex;
		NullCheck(L_4);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4, (RuntimeArray*)L_5, L_6);
		return;
	}
}
// Method Definition Index: 58035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionWrapper_1_get_Count_mC9DDBFF5719B9681C21A0B0AD4D206AAF1EB8581_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
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
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____list;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}
}
// Method Definition Index: 58036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_get_IsReadOnly_m767702D56270BA96E1AC7D3B0DBED9829AA3E66A_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____list;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(5, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}
}
// Method Definition Index: 58037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_Remove_m4A57FDF9F890046B97DDDD483A2B0FAB44442FD8_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	const Il2CppFullySharedGenericAny L_10 = L_2;
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(6, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_2: *(void**)L_2));
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = __this->____list;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_6);
		bool L_8 = L_7;
		if (!L_8)
		{
			G_B4_0 = L_8;
			goto IL_003a;
		}
		G_B3_0 = L_8;
	}
	{
		RuntimeObject* L_9 = __this->____list;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_10);
		NullCheck(L_9);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(9, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_9, L_11);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		return G_B4_0;
	}
}
// Method Definition Index: 58038
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionWrapper_1_GetEnumerator_mCABE1C18D2D27E76903D6D517D3DE481CF0BC23E_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), (RuntimeObject*)L_1);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____list;
		RuntimeObject* L_4;
		L_4 = Enumerable_Cast_TisIl2CppFullySharedGenericAny_m1480F4A804D000C8613E5F669E3AB77411F468A5(L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), L_4);
		return L_5;
	}
}
// Method Definition Index: 58039
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionWrapper_1_System_Collections_IEnumerable_GetEnumerator_mC1A386B8A604559704FD72C83A74D094C4A3D995_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
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
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), (RuntimeObject*)L_1);
		return (RuntimeObject*)L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____list;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}
}
// Method Definition Index: 58040
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionWrapper_1_System_Collections_IList_Add_m57391EC2504A50024E76AC5F74F5C08082A2F800_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		CollectionWrapper_1_VerifyValueType_mCCC186ED94E7E5E2B6045EC28058A6114EA4FC17(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		RuntimeObject* L_1 = ___0_value;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_2);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(29, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(33, __this);
		return ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}
}
// Method Definition Index: 58041
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_System_Collections_IList_Contains_m424D93372878016C632BC96D8BC7E4C037C24AE0_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = CollectionWrapper_1_IsCompatibleObject_m8EC681F3845782BE270CDD8A54BCCCD61343516D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(31, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 58042
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionWrapper_1_System_Collections_IList_IndexOf_mDC701E8B8BE57D66FE3742AC72D393385E3B0034_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B07B43F1557775B37A1B8EA12D9C378EDB7EC4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = CollectionWrapper_1_IsCompatibleObject_m8EC681F3845782BE270CDD8A54BCCCD61343516D(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = __this->____list;
		RuntimeObject* L_5 = ___0_value;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_6);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)));
		NullCheck(L_4);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_8);
		return L_9;
	}

IL_0032:
	{
		return (-1);
	}
}
// Method Definition Index: 58043
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_System_Collections_IList_RemoveAt_mFD3792DB395092EAA57AFA249CCF56E67002B0AA_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D708D3E8ACC426EF77E8F9A83D11A00B8B80AB4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____list;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(10, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// Method Definition Index: 58044
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_System_Collections_IList_Insert_mB3FB91FE10A009F4CD273972E98AD78EE49D56D0_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26D123FC6FB490AE20447BCDB0DEBAC133C96A6D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___1_value;
		CollectionWrapper_1_VerifyValueType_mCCC186ED94E7E5E2B6045EC28058A6114EA4FC17(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		RuntimeObject* L_3 = __this->____list;
		int32_t L_4 = ___0_index;
		RuntimeObject* L_5 = ___1_value;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_6);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)));
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(8, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3, L_4, L_8);
		return;
	}
}
// Method Definition Index: 58045
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_System_Collections_IList_get_IsFixedSize_m884AF557423F4C3CA85B9DF14A5FF341E4556775_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____list;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(6, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}
}
// Method Definition Index: 58046
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_System_Collections_IList_Remove_m4DC720E3065F6AF9B449F6CCDFD26F26E79F315E_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = CollectionWrapper_1_IsCompatibleObject_m8EC681F3845782BE270CDD8A54BCCCD61343516D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(35, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
	}

IL_0015:
	{
		return;
	}
}
// Method Definition Index: 58047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionWrapper_1_System_Collections_IList_get_Item_m22C59846FFA337BDC4DAA85FC883BB80DDDF6B1D_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral226374B4A4A54F92AC022D20C6A05ACB5EEC4C76)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____list;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// Method Definition Index: 58048
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_System_Collections_IList_set_Item_mD44F604204235FA71B111BC2CD21BC2C32753E17_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral226374B4A4A54F92AC022D20C6A05ACB5EEC4C76)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___1_value;
		CollectionWrapper_1_VerifyValueType_mCCC186ED94E7E5E2B6045EC28058A6114EA4FC17(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		RuntimeObject* L_3 = __this->____list;
		int32_t L_4 = ___0_index;
		RuntimeObject* L_5 = ___1_value;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_6);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)));
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3, L_4, L_8);
		return;
	}
}
// Method Definition Index: 58049
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_System_Collections_ICollection_CopyTo_m683BEF188D55E19C80B5D6FB2C151767A9DC8DE1_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeArray* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(32, __this, ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), L_1);
		return;
	}
}
// Method Definition Index: 58050
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_System_Collections_ICollection_get_IsSynchronized_m22FAEBB882AC0CA9EA73B82E79755316B8E4F1DD_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// Method Definition Index: 58051
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionWrapper_1_System_Collections_ICollection_get_SyncRoot_m00FD632BA038DED11A9A2381A91D2BDEF6E2BC6B_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 58052
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_VerifyValueType_mCCC186ED94E7E5E2B6045EC28058A6114EA4FC17_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = CollectionWrapper_1_IsCompatibleObject_m8EC681F3845782BE270CDD8A54BCCCD61343516D(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		CHECKED_LOCAL_INIT(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit,(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeObject* L_3 = ___0_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = StringUtils_FormatWith_mE8641D4F1BDCF64E9876EE3B78F84D7AC377D3E9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_2, L_3, L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_002d:
	{
		return;
	}
}
// Method Definition Index: 58053
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_IsCompatibleObject_m8EC681F3845782BE270CDD8A54BCCCD61343516D_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = TypeExtensions_IsValueType_mD736A971C1BB5B1092EBD01BB9DF7B8D8C1C26BD(L_3, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		CHECKED_LOCAL_INIT(ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_StaticInit,(ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7;
		L_7 = ReflectionUtils_IsNullableType_mA710C2540434AAA2353481C15C48C3996EC69963(L_6, NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		return (bool)0;
	}

IL_002f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 58054
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionWrapper_1_get_UnderlyingCollection_m8BA487F6F3A33A7DFB5AE917E435BF8B1DF4F605_fshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		return (RuntimeObject*)L_1;
	}

IL_000f:
	{
		RuntimeObject* L_2 = __this->____list;
		return L_2;
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
// Method Definition Index: 10891
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_m67B249F628BE8100AB3633B0DEDF15A5D57DEC91_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->___items = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 10892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_m1D5C099D16710C6E5066F3424681A81EC38325D4_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
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
		__this->___items = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items), (void*)L_1);
		return;
	}
}
// Method Definition Index: 10893
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_get_Count_m4E6700446481671FD288965E4B65F22E64D9A0FC_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10894
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_get_Items_m28790124F51325F0D7B3D6D8F6DA85624B384468_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		return L_0;
	}
}
// Method Definition Index: 10895
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_get_Item_m26800C9AF2A5E664431CBE9E7226640FC911673C_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		return;
	}
}
// Method Definition Index: 10896
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_set_Item_m06AE2AE919C0BB6ECC0D6B7F9DE5B47B386524D2_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
	}

IL_0014:
	{
		int32_t L_2 = ___0_index;
		RuntimeObject* L_3 = __this->___items;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___0_index;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		VirtualActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(38, __this, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_6: *(void**)L_6));
		return;
	}
}
// Method Definition Index: 10897
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Add_mF22066358998A145CE60DDE6744CA01EB558E2FF_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->___items;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		VirtualActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(36, __this, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_5: *(void**)L_5));
		return;
	}
}
// Method Definition Index: 10898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Clear_mAB5B1D9440DFAF16F118155B623406D9751D679D_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
	}

IL_0014:
	{
		VirtualActionInvoker0::Invoke(35, __this);
		return;
	}
}
// Method Definition Index: 10899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_CopyTo_mBD77E8AAC65A9EC7B32D594703BF55D8AE74A794_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10900
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_Contains_m18024715EBAF403F2BAB0C57C3D1E6514B0A3BED_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 10901
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_m4618C8F0B86731E29AEFD0835E13E634DB91E2A5_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10902
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_IndexOf_mC7240C5BF76EA8F698670E42707029D928AA0564_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 10903
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Insert_mF526AB1879424E4471FE76E1350C7EFDD33C1B6A_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
	}

IL_0014:
	{
		int32_t L_2 = ___0_index;
		RuntimeObject* L_3 = __this->___items;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_3);
		if ((!(((uint32_t)L_2) > ((uint32_t)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___0_index;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_item : &___1_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		VirtualActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(36, __this, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_6: *(void**)L_6));
		return;
	}
}
// Method Definition Index: 10904
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_Remove_m18F4865C353A82187E0D177BC61C7E7C0FF3456A_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->___items;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(37, __this, L_6);
		return (bool)1;
	}
}
// Method Definition Index: 10905
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_RemoveAt_m388FBEB87048121DAF672F01A92B16FB07883160_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
	}

IL_0014:
	{
		int32_t L_2 = ___0_index;
		RuntimeObject* L_3 = __this->___items;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___0_index;
		VirtualActionInvoker1< int32_t >::Invoke(37, __this, L_5);
		return;
	}
}
// Method Definition Index: 10906
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_ClearItems_m6527D5A287BCACD46BE2DFCC3EB26B35A53A2820_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 10907
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_InsertItem_m5B6FCA9390868D5D01E64342BE845196712FDD3B_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_item : &___1_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_2: *(void**)L_2));
		return;
	}
}
// Method Definition Index: 10908
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_RemoveItem_mD4B98D63D11C8FB4F72C9E76D7FAC1373F11FD97_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return;
	}
}
// Method Definition Index: 10909
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_SetItem_m856C514754B9A8E549766FC2F7CCC4CBE438F33F_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_item : &___1_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_2: *(void**)L_2));
		return;
	}
}
// Method Definition Index: 10910
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mE5452D0613EA0DC6799888E3EAE0F05FF1B2E8BA_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10911
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_IEnumerable_GetEnumerator_m1F346E952C4E9B473D727EF95089E012601C5791_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
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
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10912
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_ICollection_get_IsSynchronized_mB78969E7CD5148E9FC07E5609BDE547CBBFB3F5D_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_ICollection_get_SyncRoot_mA25F25D837C0C5C8188E4350536A3D4F7422134C_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
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
		RuntimeObject* L_0 = __this->___items;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (RuntimeObject*)__this;
	}

IL_0011:
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_ICollection_CopyTo_m96133CAD62C8A682C23B8AF6AEA5A525B12CE781_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
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
		L_9 = Collection_1_get_Count_m4E6700446481671FD288965E4B65F22E64D9A0FC(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
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
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_12, L_13, L_14);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 19)) };
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
		RuntimeObject* L_28 = __this->___items;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_28);
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
			RuntimeObject* L_33 = __this->___items;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
			RuntimeObject* L_36 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_35);
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
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_IList_get_Item_mFB46FD861CD7B06AF1AF98C045F282D4A00DD54C_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_2);
		return L_3;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_set_Item_m56EEA5E90A4574AA8B7740C48A8C2DE685833F91_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A(L_0, ((int32_t)15), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_3);
		Collection_1_set_Item_m06AE2AE919C0BB6ECC0D6B7F9DE5B47B386524D2(__this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_6 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_7 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 19)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_7, L_9, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_get_IsReadOnly_mA1CBD8F74A6A9E4547CF80AC2712864CC6610125_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_get_IsFixedSize_m750DB53F230619A5C888FD0C8C13DB99FB42EFDC_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(6, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->___items;
		NullCheck((RuntimeObject*)L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_4);
		return L_5;
	}
}
// Method Definition Index: 10919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_Add_mECF5C4D5474CE2B4843D7BF03AB6F4A08013F31F_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A(L_2, ((int32_t)15), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		RuntimeObject* L_3 = ___0_value;
		void* L_5 = UnBox_Any(L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_4);
		Collection_1_Add_mF22066358998A145CE60DDE6744CA01EB558E2FF(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? il2cpp_codegen_memcpy(L_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_5)), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_5))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		goto IL_003d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002a;
		}
		throw e;
	}

CATCH_002a:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_7 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_8 = ___0_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 19)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003d;
	}

IL_003d:
	{
		int32_t L_11;
		L_11 = Collection_1_get_Count_m4E6700446481671FD288965E4B65F22E64D9A0FC(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}
}
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_Contains_m5EB8FCB5962F76524860905BF9CD60A319C76236_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = Collection_1_IsCompatibleObject_m92713E94D30BC00F4194BFF0BB209EE195B6EA02(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_3);
		bool L_6;
		L_6 = Collection_1_Contains_m18024715EBAF403F2BAB0C57C3D1E6514B0A3BED(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		return L_6;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_IndexOf_mEA525DC04547386EA983242F9716F2C78ADD7FFC_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = Collection_1_IsCompatibleObject_m92713E94D30BC00F4194BFF0BB209EE195B6EA02(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_3);
		int32_t L_6;
		L_6 = Collection_1_IndexOf_mC7240C5BF76EA8F698670E42707029D928AA0564(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_6;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Insert_mAB65E283CF82461CAB8BD50628162000F77D201D_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A(L_2, ((int32_t)15), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		int32_t L_3 = ___0_index;
		RuntimeObject* L_4 = ___1_value;
		void* L_6 = UnBox_Any(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_5);
		Collection_1_Insert_mF526AB1879424E4471FE76E1350C7EFDD33C1B6A(__this, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? il2cpp_codegen_memcpy(L_7, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6)), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_003e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002b;
		}
		throw e;
	}

CATCH_002b:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_8 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_9 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 19)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_9, L_11, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003e;
	}

IL_003e:
	{
		return;
	}
}
// Method Definition Index: 10923
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Remove_m18A4F173AF2AC959DC8A7C9BE989A23C2FB14782_fshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = Collection_1_IsCompatibleObject_m92713E94D30BC00F4194BFF0BB209EE195B6EA02(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_4 = ___0_value;
		void* L_6 = UnBox_Any(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_5);
		bool L_8;
		L_8 = Collection_1_Remove_m18F4865C353A82187E0D177BC61C7E7C0FF3456A(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? il2cpp_codegen_memcpy(L_7, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6)), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 10924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_IsCompatibleObject_m92713E94D30BC00F4194BFF0BB209EE195B6EA02_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	memset(V_0, 0, SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
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
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 13814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommandEventBase_1_get_commandName_m594532495369592A5E8C0DD568E1355226D2E5A3_gshared (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18258));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18259));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:44>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18260));
		String_t* L_0 = __this->___m_CommandName;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18261));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1;
		L_1 = EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18261));
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:46>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18262));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18263));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2;
		L_2 = EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18263));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18264));
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18264));
		return L_3;
	}

IL_001c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:49>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18265));
		String_t* L_4 = __this->___m_CommandName;
		return L_4;
	}
}
// Method Definition Index: 13815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_set_commandName_m522BCB7AB1126F596938605F6D2D5D2EF7978BDF_gshared (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18266));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18267));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:52>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18268));
		String_t* L_0 = ___0_value;
		__this->___m_CommandName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CommandName), (void*)L_0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:52>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18269));
		return;
	}
}
// Method Definition Index: 13816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_Init_m721E2578439E4CE2FDE364EA26F5A4870BD74957_gshared (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18270));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18271));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:60>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18272));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18273));
		NullCheck((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this);
		EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18273));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18274));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18275));
		CommandEventBase_1_LocalInit_mF4473619A9FFEBBC4E91C595246FA58F7EE63F0A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18275));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:62>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18276));
		return;
	}
}
// Method Definition Index: 13817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_LocalInit_mF4473619A9FFEBBC4E91C595246FA58F7EE63F0A_gshared (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18277));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18278));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:66>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18279));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18280));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, 3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18280));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:67>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18281));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18282));
		CommandEventBase_1_set_commandName_m522BCB7AB1126F596938605F6D2D5D2EF7978BDF_inline(__this, (String_t*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18282));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:68>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18283));
		return;
	}
}
// Method Definition Index: 13818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* CommandEventBase_1_GetPooled_m615327F2D65FB08BC7ADE5EAFAB3197C1F7EBE06_gshared (String_t* ___0_commandName, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EventBase_1_tE43EF603EA104DEAD63334F0AB1B078D9101B51C_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_commandName));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18284));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18285));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18286));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18287));
		CHECKED_LOCAL_INIT(EventBase_1_tE43EF603EA104DEAD63334F0AB1B078D9101B51C_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_0;
		L_0 = EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18287));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:90>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18288));
		Il2CppSharedGenericObject* L_1 = L_0;
		String_t* L_2 = ___0_commandName;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18289));
		NullCheck((CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4*)L_1);
		CommandEventBase_1_set_commandName_m522BCB7AB1126F596938605F6D2D5D2EF7978BDF_inline((CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4*)L_1, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18289));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:91>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18290));
		return L_1;
	}
}
// Method Definition Index: 13819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_Dispatch_mC0B2C44499B2AF7035269B59864FD6931C012AA5_gshared (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___0_panel, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_panel));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18291));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18292));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:96>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18293));
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_0 = ___0_panel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18294));
		EventDispatchUtilities_DispatchToFocusedElementOrPanelRoot_m4CEE7476000CEC9E6B2CEE39FDBE53D7B017E050((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18294));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:97>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18295));
		return;
	}
}
// Method Definition Index: 13820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1__ctor_mEE08985BBAA1CA0066580E1D759F47D31CA8DF47_gshared (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(EventBase_1_tE43EF603EA104DEAD63334F0AB1B078D9101B51C_StaticInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18296));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18297));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:99>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18298));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18299));
		CHECKED_LOCAL_INIT(EventBase_1_tE43EF603EA104DEAD63334F0AB1B078D9101B51C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)),il2cpp_codegen_runtime_class_init_inline);
		EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18299));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:101>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18300));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18301));
		CommandEventBase_1_LocalInit_mF4473619A9FFEBBC4E91C595246FA58F7EE63F0A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18301));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:102>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18302));
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
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11342
// Method Definition Index: 11343
// Method Definition Index: 11345
// Method Definition Index: 11346
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Method Definition Index: 38941
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19003));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19004));
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B7_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B6_0 = NULL;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:78>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19005));
		Il2CppSharedGenericObject* L_0 = __this->___m_FreshlyReleased;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:80>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19006));
		Il2CppSharedGenericObject* L_1 = __this->___m_FreshlyReleased;
		V_0 = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19007));
		Il2CppSharedGenericObject** L_2 = (Il2CppSharedGenericObject**)(&__this->___m_FreshlyReleased);
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19008));
		goto IL_0074;
	}

IL_0022:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:83>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19009));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___m_List;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19010));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19010));
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:85>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19011));
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_5 = __this->___m_CreateFunc;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19012));
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6;
		L_6 = Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19012));
		V_0 = L_6;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:86>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19013));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19014));
		int32_t L_7;
		L_7 = ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19014));
		V_1 = L_7;
		int32_t L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19015));
		ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline(__this, ((int32_t)il2cpp_codegen_add(L_8, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19015));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19016));
		goto IL_0074;
	}

IL_004d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:90>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19017));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_9 = __this->___m_List;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19018));
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19018));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:91>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19019));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_11 = __this->___m_List;
		int32_t L_12 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19020));
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515(L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19020));
		V_0 = L_13;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:92>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19021));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_14 = __this->___m_List;
		int32_t L_15 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19022));
		NullCheck(L_14);
		List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C(L_14, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19022));
	}

IL_0074:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19023));
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_16 = __this->___m_ActionOnGet;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_17 = L_16;
		if (L_17)
		{
			G_B7_0 = L_17;
			goto IL_0080;
		}
		G_B6_0 = L_17;
	}
	{
		goto IL_0086;
	}

IL_0080:
	{
		Il2CppSharedGenericObject* L_18 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19024));
		NullCheck(G_B7_0);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5(G_B7_0, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19024));
	}

IL_0086:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:95>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19025));
		Il2CppSharedGenericObject* L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 38943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_element));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19031));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19032));
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B2_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B1_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B9_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B8_0 = NULL;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:126>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19033));
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_0 = __this->___m_ActionOnRelease;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		Il2CppSharedGenericObject* L_2 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19034));
		NullCheck(G_B2_0);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5(G_B2_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19034));
	}

IL_0012:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:127>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19035));
		Il2CppSharedGenericObject* L_3 = __this->___m_FreshlyReleased;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:129>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19036));
		Il2CppSharedGenericObject* L_4 = ___0_element;
		__this->___m_FreshlyReleased = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FreshlyReleased), (void*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19037));
		return;
	}

IL_0027:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:131>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19038));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19039));
		int32_t L_5;
		L_5 = ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19039));
		int32_t L_6 = __this->___m_MaxSize;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0042;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19040));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_7 = __this->___m_List;
		Il2CppSharedGenericObject* L_8 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19041));
		NullCheck(L_7);
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19041));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19042));
		return;
	}

IL_0042:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:137>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19043));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19044));
		int32_t L_9;
		L_9 = ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19044));
		V_0 = L_9;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19045));
		ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19045));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:138>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19046));
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_11 = __this->___m_ActionOnDestroy;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_12 = L_11;
		if (L_12)
		{
			G_B9_0 = L_12;
			goto IL_005d;
		}
		G_B8_0 = L_12;
	}
	{
		return;
	}

IL_005d:
	{
		Il2CppSharedGenericObject* L_13 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19047));
		NullCheck(G_B9_0);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5(G_B9_0, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19047));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 19048));
		return;
	}
}
// Method Definition Index: 13815
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommandEventBase_1_set_commandName_m522BCB7AB1126F596938605F6D2D5D2EF7978BDF_gshared_inline (CommandEventBase_1_tA3B7DB33007FBA9534D2635A0A05B301836DA6C4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18266));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18267));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:52>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18268));
		String_t* L_0 = ___0_value;
		__this->___m_CommandName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CommandName), (void*)L_0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/CommandEvents.cs:52>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18269));
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
// Method Definition Index: 38937
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18972));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18973));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18974));
		int32_t L_0 = __this->___U3CCountAllU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 38938
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18975));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18976));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/ObjectPool/ObjectPools.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 18977));
		int32_t L_0 = ___0_value;
		__this->___U3CCountAllU3Ek__BackingField = L_0;
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
