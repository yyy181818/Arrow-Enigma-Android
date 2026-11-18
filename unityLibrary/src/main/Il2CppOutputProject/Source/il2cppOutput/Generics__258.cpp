#include "pch-cpp.hpp"





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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
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
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
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
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639;
struct Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32;
struct Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E;
struct Func_3_t9930F2FFFB3CB451E7392AD05C05AFE07BB79723;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0;
struct Func_4_t27B1485FB065AE0CDDDC47B88CEC84C84FA4CD4D;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
struct IStateMachineRunnerPromise_1_t78474339D848ACAEFF73DBAF0D1831BF547498F7;
struct IUniTaskAsyncEnumerable_1_t0CB028B32B673BB85A6A87D4DEC149BC854DDAC2;
struct IUniTaskAsyncEnumerator_1_t0D9B1FFBEDB8385250F8DBFB2856A59132E447A8;
struct IUniTaskSource_1_t3AC7BD8AD7C73F824021F01A9B6BA55A99FDBA02;
struct IUniTaskSource_1_tDC2C04F454DA6014A673DE75ED517C3C8600A834;
struct IUniTaskSource_1_tABA22394E5AB6554F45A3FEBFAE762CC4B48EB0F;
struct IUniTaskSource_1_t2C8F4FFAEA2519DDBAF340A2F6870E873FD053A6;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct _SkipWhile_t37B23299A5A1B6DE223BC32833F1FC42D43CFE01;
struct _SkipWhileAwait_t9767148E714EDE082DB8EA6B14C97A84DAE8B452;
struct _SkipWhileAwaitWithCancellation_t9C6FF72F10870A5E6984A4A66BA2F24C6ACCA244;
struct _SkipWhileInt_tC1B9115E581284D2EF7CCD3C426ECF1A69ADF055;
struct _SkipWhileIntAwait_tF5125A787CCC0EB10A6E54F63BD9361438D12CE5;
struct _SkipWhileIntAwaitWithCancellation_t26F013E4F80B35BF142B3E0050DF9A32906F04E6;
struct _Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F;
struct _TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B;
struct _TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256;
struct _TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1;
struct _TakeWhile_tCD1AC33C43A74484C24A3B480C20E14F7093118A;
struct _TakeWhileAwait_t74A04E4999035197F8FE225A189DFBED2F3AAE6E;
struct _TakeWhileAwaitWithCancellation_tA6A3DABC0278DA23E7E683BA2D7552900EC4265D;
struct _TakeWhileInt_tBFB53321392233FB7CC1D808F8702142FF0E880F;
struct _TakeWhileIntAwait_tBE2E053F5CD846ED8FB60CA3A40721BF66971FB2;
struct _TakeWhileIntAwaitWithCancellation_tDA6862CD6358F449DB02FFC342645483EE070829;
struct _Throw_tFE564DC3F1C8BFABE7A5C2CF451DE723F9D09CDE;
struct _ToUniTaskAsyncEnumerable_t015EFDD19CF1B36E1F6A6A91DEE8DF2AE3DAE7EF;
struct _ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184;
struct _ToUniTaskAsyncEnumerableTask_tCC06DB5074BC07C0613BC84F2E49E22B066D8ECE;
struct _ToUniTaskAsyncEnumerableUniTask_t5634E0B18370D4C2BD56BAA777324F83A982E9C1;
struct _Where_t9CEF62DC9384BA7AA2F8C4BD9008ED0911E8A9D0;
struct _Where_t2657A222C9BD18F24A781BDC97C853B219E0A4D4;
struct _WhereAwait_tD08A611AEC94AF1F8FADC5153BEE5EDDFBD216CA;
struct _WhereAwait_tD3CAB2F326080E7D38A4AC3043F09218B47712BF;
struct _WhereAwaitWithCancellation_tA2B26F9529F6CCA2545EAE837313FA1E17E57216;
struct _WhereAwaitWithCancellation_tDCC28AA0BF1B923186B24E4F4E619C72B056EC2B;
struct _Zip_t8991D0A263D84A4584993FB831352B63E33762E9;
struct _ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34;
struct _ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IStateMachineRunner_t2EF87504110019AFD3056E3EA6390ED40D88A387;
struct IStateMachineRunnerPromise_t71E56C676447ACF93D0CBAF9739B2CFD5769775E;
struct IUniTaskSource_t9DF4D499CAE21B0D156421AAED7BE953DFBAEBF6;
struct MethodInfo_t;
struct MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_tACF0A72C0170990C8406D83DA0BE868D543FD7B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t71E56C676447ACF93D0CBAF9739B2CFD5769775E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t9DF4D499CAE21B0D156421AAED7BE953DFBAEBF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_get_Task_mA9B74FF59B2822518F2D0C381A6BD04C6B472F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC58FE3DBF8B6FCE1CCB0673C5C0B896FE35E05E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct AwaiterActions_tACF0A72C0170990C8406D83DA0BE868D543FD7B2  : public RuntimeObject
{
};
struct CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1  : public RuntimeObject
{
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
struct AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	bool ___result;
};
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source;
	int32_t ____index;
};
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F 
{
	bool ___result;
	RuntimeObject* ___error;
	int16_t ___version;
	bool ___hasUnhandledError;
	int32_t ___completedCount;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation;
	RuntimeObject* ___continuationState;
};
struct UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 
{
	RuntimeObject* ___source;
	bool ___result;
	int16_t ___token;
};
struct UniTask_1_t4531D86F9DDD0536575398D411E468B64CA0DD9C 
{
	RuntimeObject* ___source;
	int32_t ___result;
	int16_t ___token;
};
typedef Il2CppFullySharedGenericStruct UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067;
struct AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
};
struct AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704 
{
	RuntimeObject* ___runner;
};
struct AsyncUnit_t2CF0EEE21BCC6EB48EA717DFF7AB761F9DF47C75 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_t2CF0EEE21BCC6EB48EA717DFF7AB761F9DF47C75__padding[1];
	};
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
struct UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 
{
	RuntimeObject* ___source;
	int16_t ___token;
};
struct UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD__padding[1];
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
struct U3CMoveNextAsyncU3Ed__7_t1A7BBC5F56DB2DD005EB3DB41C8B1FB72EF6A413 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679 ___U3CU3Et__builder;
	_ToUniTaskAsyncEnumerableTask_tCC06DB5074BC07C0613BC84F2E49E22B066D8ECE* ___U3CU3E4__this;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 ___U3CU3Eu__1;
};
struct Awaiter_tCE9684D04AC81E8992F681675221207032735831 
{
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 ___task;
};
typedef Il2CppFullySharedGenericStruct Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7;
struct UniTask_1_tDF4AABCAD9E9F5EFD2A087B76A00E8F76A751841 
{
	RuntimeObject* ___source;
	AsyncUnit_t2CF0EEE21BCC6EB48EA717DFF7AB761F9DF47C75 ___result;
	int16_t ___token;
};
struct _Throw_tFE564DC3F1C8BFABE7A5C2CF451DE723F9D09CDE  : public RuntimeObject
{
	Exception_t* ___exception;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
};
struct _ToUniTaskAsyncEnumerable_t015EFDD19CF1B36E1F6A6A91DEE8DF2AE3DAE7EF  : public RuntimeObject
{
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___enumerator;
};
struct _ToUniTaskAsyncEnumerableTask_tCC06DB5074BC07C0613BC84F2E49E22B066D8ECE : public RuntimeObject {};
struct _ToUniTaskAsyncEnumerableUniTask_t5634E0B18370D4C2BD56BAA777324F83A982E9C1 : public RuntimeObject {};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
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
struct MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814  : public RuntimeObject
{
	UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F ___completionSource;
};
struct UniTaskStatus_t3DD8DB635156FD16DBCF5234F376EFA91708D6CF 
{
	int32_t ___value__;
};
struct Awaiter_t1FC4395DCC002B28D3817787BA46E12A194899B0 
{
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 ___task;
};
struct Awaiter_t1FC4395DCC002B28D3817787BA46E12A194899B0_marshaled_pinvoke
{
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 ___task;
};
struct Awaiter_t1FC4395DCC002B28D3817787BA46E12A194899B0_marshaled_com
{
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 ___task;
};
struct U3CDisposeAsyncU3Ed__18_tCF8862D72927FC75D4DEB022F37319879F4D9108 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 ___U3CU3Et__builder;
	_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* ___U3CU3E4__this;
	Awaiter_t1FC4395DCC002B28D3817787BA46E12A194899B0 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__21_tEDA417745710B502271AC8642E84D5EA6F753DA5 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 ___U3CU3Et__builder;
	_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* ___U3CU3E4__this;
	Awaiter_t1FC4395DCC002B28D3817787BA46E12A194899B0 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__21_tD178882977E1E5ACA7D65F755B891EF1F9D634FC 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 ___U3CU3Et__builder;
	_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* ___U3CU3E4__this;
	Awaiter_t1FC4395DCC002B28D3817787BA46E12A194899B0 ___U3CU3Eu__1;
};
typedef Il2CppFullySharedGenericStruct U3CMoveNextAsyncU3Ed__7_t6A482E8E448EFDDD8B4A785C20B218607D12C300;
struct U3CRunOtherU3Ed__17_t6C2A87D0ECF78DFDD56B08E6F684A6306EE02B40 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704 ___U3CU3Et__builder;
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 ___other;
	_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* ___U3CU3E4__this;
	Awaiter_t1FC4395DCC002B28D3817787BA46E12A194899B0 ___U3CU3Eu__1;
};
struct AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _Where_t9CEF62DC9384BA7AA2F8C4BD9008ED0911E8A9D0 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _Where_t2657A222C9BD18F24A781BDC97C853B219E0A4D4 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _WhereAwait_tD08A611AEC94AF1F8FADC5153BEE5EDDFBD216CA : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _WhereAwait_tD3CAB2F326080E7D38A4AC3043F09218B47712BF : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _WhereAwaitWithCancellation_tA2B26F9529F6CCA2545EAE837313FA1E17E57216 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _WhereAwaitWithCancellation_tDCC28AA0BF1B923186B24E4F4E619C72B056EC2B : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _Zip_t8991D0A263D84A4584993FB831352B63E33762E9 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
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
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639  : public MulticastDelegate_t
{
};
struct Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32  : public MulticastDelegate_t
{
};
struct Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E  : public MulticastDelegate_t
{
};
struct Func_3_t9930F2FFFB3CB451E7392AD05C05AFE07BB79723  : public MulticastDelegate_t
{
};
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};
struct Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0  : public MulticastDelegate_t
{
};
struct Func_4_t27B1485FB065AE0CDDDC47B88CEC84C84FA4CD4D  : public MulticastDelegate_t
{
};
struct _SkipWhile_t37B23299A5A1B6DE223BC32833F1FC42D43CFE01 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _SkipWhileAwait_t9767148E714EDE082DB8EA6B14C97A84DAE8B452 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _SkipWhileAwaitWithCancellation_t9C6FF72F10870A5E6984A4A66BA2F24C6ACCA244 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _SkipWhileInt_tC1B9115E581284D2EF7CCD3C426ECF1A69ADF055 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _SkipWhileIntAwait_tF5125A787CCC0EB10A6E54F63BD9361438D12CE5 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _SkipWhileIntAwaitWithCancellation_t26F013E4F80B35BF142B3E0050DF9A32906F04E6 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _TakeWhile_tCD1AC33C43A74484C24A3B480C20E14F7093118A : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _TakeWhileAwait_t74A04E4999035197F8FE225A189DFBED2F3AAE6E : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _TakeWhileAwaitWithCancellation_tA6A3DABC0278DA23E7E683BA2D7552900EC4265D : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _TakeWhileInt_tBFB53321392233FB7CC1D808F8702142FF0E880F : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _TakeWhileIntAwait_tBE2E053F5CD846ED8FB60CA3A40721BF66971FB2 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct _TakeWhileIntAwaitWithCancellation_tDA6862CD6358F449DB02FFC342645483EE070829 : public MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814 {};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct AwaiterActions_tACF0A72C0170990C8406D83DA0BE868D543FD7B2_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate;
};
struct CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields
{
	UniTask_1_tDF4AABCAD9E9F5EFD2A087B76A00E8F76A751841 ___AsyncUnit;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 ___True;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 ___False;
	UniTask_1_t4531D86F9DDD0536575398D411E468B64CA0DD9C ___Zero;
	UniTask_1_t4531D86F9DDD0536575398D411E468B64CA0DD9C ___MinusOne;
	UniTask_1_t4531D86F9DDD0536575398D411E468B64CA0DD9C ___One;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory;
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
struct UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticFields
{
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 ___CanceledUniTask;
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 ___CompletedTask;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___moveNextCallbackDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___setCurrentCallbackDelegate;
};
struct AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___moveNextCallbackDelegate;
};
struct _Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___OnCanceledDelegate;
};
struct _Zip_t8991D0A263D84A4584993FB831352B63E33762E9_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
};
struct _ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate;
};
struct _ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tCE9684D04AC81E8992F681675221207032735831 UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0 (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D (MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814* __this, Awaiter_tCE9684D04AC81E8992F681675221207032735831 ___0_awaiter, bool* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7 (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDF5EF31AC1ADD4373D136754E84CC2A4BA4E065C_gshared (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC58FE3DBF8B6FCE1CCB0673C5C0B896FE35E05E9 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetCanceled_mD17A6E424611D0F6F6DA3ED729A7AD8D16204154 (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679 AsyncUniTaskMethodBuilder_1_Create_m34FF5CC73E1088E8447AA68B32ACC3887D3EDBF8_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 AsyncUniTaskMethodBuilder_1_get_Task_mA9B74FF59B2822518F2D0C381A6BD04C6B472F6F_inline (AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mEAE8436CA24B4E874C3947695C299A0B1A810406_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m2A0A2AFA1E8B66EAC7F41189C1D65E156E9F750F_inline (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 UniTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAF939D3C24635846F74464790880E534204F7CE6 (bool ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D (MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tCE9684D04AC81E8992F681675221207032735831 UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0 (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D (MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814* __this, Awaiter_tCE9684D04AC81E8992F681675221207032735831 ___0_awaiter, bool* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7 (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, bool ___0_result, const RuntimeMethod* method) ;
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDF5EF31AC1ADD4373D136754E84CC2A4BA4E065C_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mD3C28D9D4A58F73C3C6CDDA5E0DC986CEEBEF2E9 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskVoid_Forget_m82321C4B2F04E1063602479EC9FA49C3751798EB (UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC58FE3DBF8B6FCE1CCB0673C5C0B896FE35E05E9 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetCanceled_mD17A6E424611D0F6F6DA3ED729A7AD8D16204154 (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704 AsyncUniTaskVoidMethodBuilder_Create_mB2F6F1ADF85712767A7A8D9DBD76E46CCB28D638_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD AsyncUniTaskVoidMethodBuilder_get_Task_mB71C82F7E32102835B3338AB8C21BFF03DF91E0D_inline (AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_op_Inequality_m60DF5AE3E4D1B701E332343118A07A42EF5A4C55 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_left, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679 AsyncUniTaskMethodBuilder_1_Create_m34FF5CC73E1088E8447AA68B32ACC3887D3EDBF8_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 AsyncUniTaskMethodBuilder_1_get_Task_mA9B74FF59B2822518F2D0C381A6BD04C6B472F6F_inline (AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 AsyncUniTaskMethodBuilder_Create_m324C8A6BE1894C6A62807500800069685855F07D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 AsyncUniTaskMethodBuilder_get_Task_m93C7C005E5201982C092999F774A09A84883B43B_inline (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 UniTask_FromException_mE8608F2EFD343EB4BBAC701C87B66415D866B7EA (Exception_t* ___0_ex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mEAE8436CA24B4E874C3947695C299A0B1A810406_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m2A0A2AFA1E8B66EAC7F41189C1D65E156E9F750F_inline (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m2EC66A0B90EB85539E91138C71D4E5C9FDB97638_inline (int32_t ___0_status, const RuntimeMethod* method) ;
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 UniTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAF939D3C24635846F74464790880E534204F7CE6 (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhile__ctor_m611309EBF9F82CB0FEF16A97433C1A6342A2BD64_fshared (_SkipWhile_t37B23299A5A1B6DE223BC32833F1FC42D43CFE01* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorBase_2_t9D81DB39C942FA2E627E0D1E09D246864945F3E1_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorBase_2_t9D81DB39C942FA2E627E0D1E09D246864945F3E1_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhile_TryMoveNextCore_mCBB2CBE52071FE1EF0CFE2BC7FADEB5C24AB51A0_fshared (_SkipWhile_t37B23299A5A1B6DE223BC32833F1FC42D43CFE01* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t4FD054A7254BA93CAED73253AD249E99D4C8873F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_t4FD054A7254BA93CAED73253AD249E99D4C8873F);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	{
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (Il2CppFullySharedGenericAny*)L_3);
		NullCheck(L_2);
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_3: *(void**)L_3));
		if (L_4)
		{
			goto IL_0036;
		}
	}

IL_001e:
	{
		il2cpp_codegen_write_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)NULL);
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (Il2CppFullySharedGenericAny*)L_5);
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_5: *(void**)L_5));
		bool* L_6 = ___1_result;
		*(((int8_t*)L_6)) = ((int8_t)1);
		return (bool)1;
	}

IL_0036:
	{
		bool* L_7 = ___1_result;
		*(((int8_t*)L_7)) = ((int8_t)0);
		return (bool)0;
	}

IL_003b:
	{
		bool* L_8 = ___1_result;
		*(((int8_t*)L_8)) = ((int8_t)0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileAwait__ctor_m67E0C9C8702F10382066660F53361740C0125513_fshared (_SkipWhileAwait_t9767148E714EDE082DB8EA6B14C97A84DAE8B452* __this, RuntimeObject* ___0_source, Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorAwaitSelectorBase_3_t9B0E43C86BA352739B9B7FD36EF64BFEB845C18E_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorAwaitSelectorBase_3_t9B0E43C86BA352739B9B7FD36EF64BFEB845C18E_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _SkipWhileAwait_TransformAsync_mB46230F3AEEDBD67B605565695E782D97D388B2C_fshared (_SkipWhileAwait_t9767148E714EDE082DB8EA6B14C97A84DAE8B452* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit);
	const uint32_t SizeOf_TSource_tE981DCCA7455425ED5EBF5737E947B13BB0D4567 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_tE981DCCA7455425ED5EBF5737E947B13BB0D4567);
	{
		Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735* L_0 = *(Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___False;
		return L_1;
	}

IL_000e:
	{
		Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735* L_2 = *(Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_tE981DCCA7455425ED5EBF5737E947B13BB0D4567);
		NullCheck(L_2);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_4;
		L_4 = InvokerFuncInvoker1< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_3: *(void**)L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileAwait_TrySetCurrentCore_m0530BF230301D5523B68E4AC8FFDE2AF5F14DD7D_fshared (_SkipWhileAwait_t9767148E714EDE082DB8EA6B14C97A84DAE8B452* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tE981DCCA7455425ED5EBF5737E947B13BB0D4567 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_tE981DCCA7455425ED5EBF5737E947B13BB0D4567);
	{
		bool L_0 = ___0_awaitResult;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_write_field_data<Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), (Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735*)NULL);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		bool* L_2 = ___1_terminateIteration;
		*(((int8_t*)L_2)) = ((int8_t)0);
		return (bool)1;
	}

IL_001b:
	{
		bool* L_3 = ___1_terminateIteration;
		*(((int8_t*)L_3)) = ((int8_t)0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileAwaitWithCancellation__ctor_mEBEA5AA25EC8ED784C830D7619BAC5684A0058E1_fshared (_SkipWhileAwaitWithCancellation_t9C6FF72F10870A5E6984A4A66BA2F24C6ACCA244* __this, RuntimeObject* ___0_source, Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorAwaitSelectorBase_3_tE78480474E560CA7AA613EB2991586B38027AF4C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorAwaitSelectorBase_3_tE78480474E560CA7AA613EB2991586B38027AF4C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _SkipWhileAwaitWithCancellation_TransformAsync_mA88C02AF32C78A6B33FCC29413D258DD912DF5A8_fshared (_SkipWhileAwaitWithCancellation_t9C6FF72F10870A5E6984A4A66BA2F24C6ACCA244* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit);
	const uint32_t SizeOf_TSource_tC71164C4A3E970A58A60BEFB373FA5A070203546 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_tC71164C4A3E970A58A60BEFB373FA5A070203546);
	{
		Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639* L_0 = *(Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___False;
		return L_1;
	}

IL_000e:
	{
		Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639* L_2 = *(Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_tC71164C4A3E970A58A60BEFB373FA5A070203546);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		NullCheck(L_2);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_5;
		L_5 = InvokerFuncInvoker2< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_3: *(void**)L_3), L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileAwaitWithCancellation_TrySetCurrentCore_m6616321E523AC6FA0A78668EC8EA0A785157B8E7_fshared (_SkipWhileAwaitWithCancellation_t9C6FF72F10870A5E6984A4A66BA2F24C6ACCA244* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tC71164C4A3E970A58A60BEFB373FA5A070203546 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_tC71164C4A3E970A58A60BEFB373FA5A070203546);
	{
		bool* L_0 = ___1_terminateIteration;
		*(((int8_t*)L_0)) = ((int8_t)0);
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_write_field_data<Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), (Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639*)NULL);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (Il2CppFullySharedGenericAny*)L_2);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_2: *(void**)L_2));
		return (bool)1;
	}

IL_001b:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileInt__ctor_m412E6F0BFB04AD828B91831B741AFE585801E939_fshared (_SkipWhileInt_tC1B9115E581284D2EF7CCD3C426ECF1A69ADF055* __this, RuntimeObject* ___0_source, Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorBase_2_t05964EC1B38D72AE5C39338CA5733B146E1DB4D3_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorBase_2_t05964EC1B38D72AE5C39338CA5733B146E1DB4D3_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileInt_TryMoveNextCore_m4FE535E4260EFE2BA6E08F2155B1135A6FDA5520_fshared (_SkipWhileInt_tC1B9115E581284D2EF7CCD3C426ECF1A69ADF055* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t7476D6FB747FBEC6FEE130AFE6CA773EE772B53A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_t7476D6FB747FBEC6FEE130AFE6CA773EE772B53A);
	const Il2CppFullySharedGenericAny L_8 = L_3;
	int32_t V_0 = 0;
	{
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_1 = *(Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_2 = *(Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (Il2CppFullySharedGenericAny*)L_3);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		int32_t L_6 = V_0;
		NullCheck(L_2);
		bool L_7;
		L_7 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_3: *(void**)L_3), L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}

IL_002f:
	{
		il2cpp_codegen_write_field_data<Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), (Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*)NULL);
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (Il2CppFullySharedGenericAny*)L_8);
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_8: *(void**)L_8));
		bool* L_9 = ___1_result;
		*(((int8_t*)L_9)) = ((int8_t)1);
		return (bool)1;
	}

IL_0047:
	{
		bool* L_10 = ___1_result;
		*(((int8_t*)L_10)) = ((int8_t)0);
		return (bool)0;
	}

IL_004c:
	{
		bool* L_11 = ___1_result;
		*(((int8_t*)L_11)) = ((int8_t)0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileIntAwait__ctor_m099522B8F6EA4721284CD7272086D2BD220955D4_fshared (_SkipWhileIntAwait_tF5125A787CCC0EB10A6E54F63BD9361438D12CE5* __this, RuntimeObject* ___0_source, Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorAwaitSelectorBase_3_tAD4924D786C056B30D095F08A4F737F5A92C3F2F_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorAwaitSelectorBase_3_tAD4924D786C056B30D095F08A4F737F5A92C3F2F_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _SkipWhileIntAwait_TransformAsync_m1695F7D991425C7385F71BCFEAB39E39815B3371_fshared (_SkipWhileIntAwait_tF5125A787CCC0EB10A6E54F63BD9361438D12CE5* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit);
	const uint32_t SizeOf_TSource_t64F67485E016FC7D604ADC68307AD1C8ECBAE97B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_t64F67485E016FC7D604ADC68307AD1C8ECBAE97B);
	int32_t V_0 = 0;
	{
		Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32* L_0 = *(Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___False;
		return L_1;
	}

IL_000e:
	{
		Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32* L_2 = *(Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t64F67485E016FC7D604ADC68307AD1C8ECBAE97B);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		int32_t L_6 = V_0;
		NullCheck(L_2);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_7;
		L_7 = InvokerFuncInvoker2< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_3: *(void**)L_3), L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileIntAwait_TrySetCurrentCore_mFD0A51DEA61CAF55ACEB9368607DD16759933BE1_fshared (_SkipWhileIntAwait_tF5125A787CCC0EB10A6E54F63BD9361438D12CE5* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t64F67485E016FC7D604ADC68307AD1C8ECBAE97B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_t64F67485E016FC7D604ADC68307AD1C8ECBAE97B);
	{
		bool* L_0 = ___1_terminateIteration;
		*(((int8_t*)L_0)) = ((int8_t)0);
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_write_field_data<Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), (Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32*)NULL);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (Il2CppFullySharedGenericAny*)L_2);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_2: *(void**)L_2));
		return (bool)1;
	}

IL_001b:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileIntAwaitWithCancellation__ctor_m1688368804C5981D0935BE3DCD1DDF5C2B7F7196_fshared (_SkipWhileIntAwaitWithCancellation_t26F013E4F80B35BF142B3E0050DF9A32906F04E6* __this, RuntimeObject* ___0_source, Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorAwaitSelectorBase_3_t538AE143D84753E04D51DFDC3D0377AB35A9269C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorAwaitSelectorBase_3_t538AE143D84753E04D51DFDC3D0377AB35A9269C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _SkipWhileIntAwaitWithCancellation_TransformAsync_mE094F348D33D5708016139D6A38B04B19ECF7963_fshared (_SkipWhileIntAwaitWithCancellation_t26F013E4F80B35BF142B3E0050DF9A32906F04E6* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit);
	const uint32_t SizeOf_TSource_t3984E3F1E622D251E6FFFE09E5E28D6B8C32F4A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_t3984E3F1E622D251E6FFFE09E5E28D6B8C32F4A1);
	int32_t V_0 = 0;
	{
		Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0* L_0 = *(Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___False;
		return L_1;
	}

IL_000e:
	{
		Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0* L_2 = *(Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t3984E3F1E622D251E6FFFE09E5E28D6B8C32F4A1);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		int32_t L_6 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		NullCheck(L_2);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_8;
		L_8 = InvokerFuncInvoker3< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_3: *(void**)L_3), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileIntAwaitWithCancellation_TrySetCurrentCore_m87CC746994CF35CA740E59AB34AA75DDF8AD8926_fshared (_SkipWhileIntAwaitWithCancellation_t26F013E4F80B35BF142B3E0050DF9A32906F04E6* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t3984E3F1E622D251E6FFFE09E5E28D6B8C32F4A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_t3984E3F1E622D251E6FFFE09E5E28D6B8C32F4A1);
	{
		bool* L_0 = ___1_terminateIteration;
		*(((int8_t*)L_0)) = ((int8_t)0);
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_write_field_data<Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), (Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0*)NULL);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (Il2CppFullySharedGenericAny*)L_2);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_2: *(void**)L_2));
		return (bool)1;
	}

IL_001b:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take__ctor_m94EA1397F37B394FCFE788F0FF5C81F5765384A5_fshared (_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* __this, RuntimeObject* ___0_source, int32_t ___1_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		int32_t L_1 = ___1_count;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_get_Current_m1E16F71678E7FCF50BE84633723C2D18B373B34C_fshared (_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tBAFF451AAC8BD484814E2031A511B6CA0EEDC1E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tBAFF451AAC8BD484814E2031A511B6CA0EEDC1E6);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5)), SizeOf_TSource_tBAFF451AAC8BD484814E2031A511B6CA0EEDC1E6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tBAFF451AAC8BD484814E2031A511B6CA0EEDC1E6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_set_Current_m93972385BE67B2A2D1FAE2837EDC842708406AAF_fshared (_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tBAFF451AAC8BD484814E2031A511B6CA0EEDC1E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tBAFF451AAC8BD484814E2031A511B6CA0EEDC1E6);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_value : &___0_value), SizeOf_TSource_tBAFF451AAC8BD484814E2031A511B6CA0EEDC1E6);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), L_0, SizeOf_TSource_tBAFF451AAC8BD484814E2031A511B6CA0EEDC1E6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _Take_MoveNextAsync_mA04186527AC1059A42A647AA8F25689671EB2890_fshared (_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	CHECKED_LOCAL(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit);
	{
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)))), NULL);
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_1, L_2);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_3);
	}

IL_002a:
	{
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003e;
		}
	}
	{
		CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_6 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___False;
		return L_6;
	}

IL_003e:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_7 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_7, NULL);
		((  void (*) (_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_8 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_9;
		L_9 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_8, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_10;
		memset((&L_10), 0, sizeof(L_10));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_10), (RuntimeObject*)__this, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_SourceMoveNext_mFBE75AFB4B440F29E8BC2C90E1981EE9A9D2618D_fshared (_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(_Take_t75AFEBFE3F408F84FC8E452556BDC1CBDED7914D_StaticInit);
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			NullCheck(L_0);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_0);
			V_0 = L_1;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_2;
			L_2 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_0), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13), L_2);
			bool L_3;
			L_3 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)))), NULL);
			if (!L_3)
			{
				goto IL_002e_1;
			}
		}
		{
			CHECKED_LOCAL_INIT(_Take_t75AFEBFE3F408F84FC8E452556BDC1CBDED7914D_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))((RuntimeObject*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			CHECKED_LOCAL_INIT(_Take_t75AFEBFE3F408F84FC8E452556BDC1CBDED7914D_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___MoveNextCoreDelegate;
			Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)))), L_4, (RuntimeObject*)__this, NULL);
		}

IL_003f_1:
		{
			goto IL_0051;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_5;
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_6 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		Exception_t* L_7 = V_1;
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_6, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0051;
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_MoveNextCore_mDFFB4D19416DD5BEC287CEC082545CD614BC335D_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TSource_tBAFF451AAC8BD484814E2031A511B6CA0EEDC1E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tBAFF451AAC8BD484814E2031A511B6CA0EEDC1E6);
	_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* L_1 = V_0;
		_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* L_2 = V_0;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_3 = *(Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* L_6 = V_0;
		_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* L_7 = L_6;
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		NullCheck(L_7);
		il2cpp_codegen_write_field_data<int32_t, false>(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),6), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), ((int32_t)il2cpp_codegen_add(L_8, 1)));
		_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* L_9 = V_0;
		_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* L_10 = V_0;
		RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		NullCheck(L_11);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), L_11, (Il2CppFullySharedGenericAny*)L_12);
		NullCheck(L_9);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) ? L_12: *(void**)L_12));
		_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* L_13 = V_0;
		NullCheck(L_13);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_14 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_13)->___completionSource);
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_14, (bool)1, NULL);
		return;
	}

IL_0047:
	{
		_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_17 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_16)->___completionSource);
		bool L_18;
		L_18 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_17, (bool)0, NULL);
	}

IL_0054:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _Take_DisposeAsync_mB116A0D8336A1501E45B2D7E99D2BA2815B20BE1_fshared (_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		NullCheck((RuntimeObject*)L_1);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(0, IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589));
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take__cctor_mBE93FE78EBF6BE94D94C691D7767476210B7F21E_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		((_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___MoveNextCoreDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Take_t4518A208D9A29F39BE713E3E15A480FDD1DF7E0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___MoveNextCoreDelegate), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast__ctor_m5BFCC178ECB986E424ADE40056D1458B6EE9CC18_fshared (_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* __this, RuntimeObject* ___0_source, int32_t ___1_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		int32_t L_1 = ___1_count;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_get_Current_m1AD3B120D88439C2353EC3B08D68B421612FF4F7_fshared (_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5)), SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_set_Current_m5C23522D757454C48B901CA6A859351110505390_fshared (_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_value : &___0_value), SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),9), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), L_0, SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _TakeLast_MoveNextAsync_m040E612179B5EF13FF15497BE265635CD78FF8C6_fshared (_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	{
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)))), NULL);
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_1, L_2);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		il2cpp_codegen_write_field_data<Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_4);
	}

IL_0035:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_5 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_5, NULL);
		((  void (*) (_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_6 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_7;
		L_7 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_6, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_8;
		memset((&L_8), 0, sizeof(L_8));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_8), (RuntimeObject*)__this, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_SourceMoveNext_mDD8DD46988CF2C0429312EA2FBE93EADD0F39E31_fshared (_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(_TakeLast_t6CA5A3E0A46ADB0722ADC72FEDA26EBD6434D552_StaticInit);
	const uint32_t SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C);
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), L_3, (Il2CppFullySharedGenericAny*)L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_4: *(void**)L_4));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_5 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_6;
		L_6 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_5, (bool)1, NULL);
		return;
	}

IL_0035:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_7 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_7, (bool)0, NULL);
		return;
	}

IL_0043:
	{
	}

IL_0044:
	try
	{

IL_0044_1:
		{
			RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			NullCheck(L_9);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_10;
			L_10 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_9);
			V_0 = L_10;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_11;
			L_11 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_0), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19), L_11);
			bool L_12;
			L_12 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19)))), NULL);
			if (!L_12)
			{
				goto IL_0088_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20), (bool)1);
			CHECKED_LOCAL_INIT(_TakeLast_t6CA5A3E0A46ADB0722ADC72FEDA26EBD6434D552_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))((RuntimeObject*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
			bool L_13 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20));
			if (!L_13)
			{
				goto IL_0099_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20), (bool)0);
			goto IL_0044_1;
		}

IL_0088_1:
		{
			CHECKED_LOCAL_INIT(_TakeLast_t6CA5A3E0A46ADB0722ADC72FEDA26EBD6434D552_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___MoveNextCoreDelegate;
			Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19)))), L_14, (RuntimeObject*)__this, NULL);
		}

IL_0099_1:
		{
			goto IL_00ab;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009b;
		}
		throw e;
	}

CATCH_009b:
	{
		Exception_t* L_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_15;
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_16 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		Exception_t* L_17 = V_1;
		bool L_18;
		L_18 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_16, L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_MoveNextCore_mAD41CB41972627A84AF062E1058A077BEB71B34D_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C);
	const Il2CppFullySharedGenericAny L_21 = L_15;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TSource_t56B2486F9B4593ADE7C96DEBE2945905AF23048C);
	_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_1 = V_0;
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_2 = V_0;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_3 = *(Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_009b;
		}
	}
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0086;
		}
	}
	{
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_6 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(L_7, NULL);
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_9 = V_0;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0055;
		}
	}
	{
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_11 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_13 = V_0;
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		NullCheck(L_14);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_14, (Il2CppFullySharedGenericAny*)L_15);
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) ? L_15: *(void**)L_15));
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_16 = V_0;
		bool L_17 = *(bool*)il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		if (L_17)
		{
			goto IL_00a2;
		}
	}
	{
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_18 = V_0;
		NullCheck(L_18);
		((  void (*) (_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_18, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return;
	}

IL_0055:
	{
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_19 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_20 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		NullCheck(L_20);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), L_20, (Il2CppFullySharedGenericAny*)L_21);
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_22 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_23 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(L_22, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_24 = V_0;
		RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_24, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		NullCheck(L_25);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_25, (Il2CppFullySharedGenericAny*)L_26);
		NullCheck(L_23);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23), L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) ? L_26: *(void**)L_26));
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_27 = V_0;
		bool L_28 = *(bool*)il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		if (L_28)
		{
			goto IL_00a2;
		}
	}
	{
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_29 = V_0;
		NullCheck(L_29);
		((  void (*) (_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_29, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return;
	}

IL_0086:
	{
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_30 = V_0;
		NullCheck(L_30);
		il2cpp_codegen_write_field_data<bool, false>(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),8), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20), (bool)0);
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_31 = V_0;
		NullCheck(L_31);
		il2cpp_codegen_write_field_data<bool, false>(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),7), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), (bool)1);
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_32 = V_0;
		NullCheck(L_32);
		((  void (*) (_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_32, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return;
	}

IL_009b:
	{
		_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* L_33 = V_0;
		NullCheck(L_33);
		il2cpp_codegen_write_field_data<bool, false>(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),8), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20), (bool)0);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _TakeLast_DisposeAsync_mC674CC1613259E24B444A22D1B4B8910856BB4E8_fshared (_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		NullCheck((RuntimeObject*)L_1);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(0, IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589));
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast__cctor_m3017FD64CA84EC224F2D3B6DA0310D76BB2577AB_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		((_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___MoveNextCoreDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeLast_t1344236A9A0F5615237622CECB3ACBD52B9F9A5B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___MoveNextCoreDelegate), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil__ctor_mE3D76B71F1E1AB1ADB82878AAF9E373350F72883_fshared (_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* __this, RuntimeObject* ___0_source, UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 ___1_other, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	CHECKED_LOCAL(_TakeUntil_tD1FD4975A5243EEF47D5C37C03CA6F9B23EB634A_StaticInit);
	CHECKED_LOCAL(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_StaticInit);
	UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken1;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_1);
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken1), NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_cancellationToken1;
		CHECKED_LOCAL_INIT(_TakeUntil_tD1FD4975A5243EEF47D5C37C03CA6F9B23EB634A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___CancelDelegate1;
		CHECKED_LOCAL_INIT(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_StaticInit,(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5;
		L_5 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mD3C28D9D4A58F73C3C6CDDA5E0DC986CEEBEF2E9(L_3, L_4, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_5);
	}

IL_002f:
	{
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_6 = ___1_other;
		UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD L_7;
		L_7 = ((  UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD (*) (_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256*, UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		V_0 = L_7;
		UniTaskVoid_Forget_m82321C4B2F04E1063602479EC9FA49C3751798EB((&V_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_get_Current_m0ACF78A6A853F8C1353A2128BD42CC5610DADEB9_fshared (_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t0B9E4F330EB4BCB7E8832A309897BB6C8610BA50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t0B9E4F330EB4BCB7E8832A309897BB6C8610BA50);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_TSource_t0B9E4F330EB4BCB7E8832A309897BB6C8610BA50);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t0B9E4F330EB4BCB7E8832A309897BB6C8610BA50);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_set_Current_mDA19CAFA66855E889C5C3EEA08D26CD9A5E80E59_fshared (_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t0B9E4F330EB4BCB7E8832A309897BB6C8610BA50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t0B9E4F330EB4BCB7E8832A309897BB6C8610BA50);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_value : &___0_value), SizeOf_TSource_t0B9E4F330EB4BCB7E8832A309897BB6C8610BA50);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),9), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_0, SizeOf_TSource_t0B9E4F330EB4BCB7E8832A309897BB6C8610BA50);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _TakeUntil_MoveNextAsync_mEB640457FAFA120AB6306024F0A11E6F3A3157F9_fshared (_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC58FE3DBF8B6FCE1CCB0673C5C0B896FE35E05E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit);
	CHECKED_LOCAL(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___False;
		return L_1;
	}

IL_000e:
	{
		Exception_t* L_2 = *(Exception_t**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8));
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t* L_3 = *(Exception_t**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8));
		CHECKED_LOCAL_INIT(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit,(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_4;
		L_4 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7(L_3, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7_RuntimeMethod_var);
		return L_4;
	}

IL_0022:
	{
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)))), NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
		CHECKED_LOCAL_INIT(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit,(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_7;
		L_7 = UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC58FE3DBF8B6FCE1CCB0673C5C0B896FE35E05E9(L_6, UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC58FE3DBF8B6FCE1CCB0673C5C0B896FE35E05E9_RuntimeMethod_var);
		return L_7;
	}

IL_003b:
	{
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if (L_8)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), L_9, L_10);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), L_11);
	}

IL_005a:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_12 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_12, NULL);
		((  void (*) (_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_13 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_13, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_15), (RuntimeObject*)__this, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_SourceMoveNext_m473BCBE34E24E909007611FC4EEFA89001933B24_fshared (_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(_TakeUntil_tD1FD4975A5243EEF47D5C37C03CA6F9B23EB634A_StaticInit);
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
			NullCheck(L_0);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0);
			V_0 = L_1;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_2;
			L_2 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_0), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_2);
			bool L_3;
			L_3 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), NULL);
			if (!L_3)
			{
				goto IL_002e_1;
			}
		}
		{
			CHECKED_LOCAL_INIT(_TakeUntil_tD1FD4975A5243EEF47D5C37C03CA6F9B23EB634A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))((RuntimeObject*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			CHECKED_LOCAL_INIT(_TakeUntil_tD1FD4975A5243EEF47D5C37C03CA6F9B23EB634A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___MoveNextCoreDelegate;
			Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), L_4, (RuntimeObject*)__this, NULL);
		}

IL_003f_1:
		{
			goto IL_0051;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_5;
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_6 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		Exception_t* L_7 = V_1;
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_6, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0051;
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_MoveNextCore_m7A7E74DB0C2E356E487FFF04BA2FEE02A47B5188_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	const uint32_t SizeOf_TSource_t0B9E4F330EB4BCB7E8832A309897BB6C8610BA50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TSource_t0B9E4F330EB4BCB7E8832A309897BB6C8610BA50);
	_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_1 = V_0;
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_2 = V_0;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_3 = *(Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0081;
		}
	}
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_6 = V_0;
		Exception_t* L_7 = *(Exception_t**)il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_8 = V_0;
		NullCheck(L_8);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_9 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_8)->___completionSource);
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_10 = V_0;
		Exception_t* L_11 = *(Exception_t**)il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		bool L_12;
		L_12 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_9, L_11, NULL);
		return;
	}

IL_0035:
	{
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_13 = V_0;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_14;
		L_14 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), NULL);
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_16 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_15)->___completionSource);
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_17 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD17A6E424611D0F6F6DA3ED729A7AD8D16204154(L_16, L_18, NULL);
		return;
	}

IL_0055:
	{
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_20 = V_0;
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_21 = V_0;
		RuntimeObject* L_22 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		NullCheck(L_22);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), L_22, (Il2CppFullySharedGenericAny*)L_23);
		NullCheck(L_20);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_23: *(void**)L_23));
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_24 = V_0;
		NullCheck(L_24);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_25 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_24)->___completionSource);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_25, (bool)1, NULL);
		return;
	}

IL_0074:
	{
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_27 = V_0;
		NullCheck(L_27);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_28 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_27)->___completionSource);
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_28, (bool)0, NULL);
	}

IL_0081:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD _TakeUntil_RunOther_m6CA547AAFFC2C42A50A9BCD4FF25B50C4EA6A9E3_fshared (_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* __this, UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 ___0_other, const RuntimeMethod* method) 
{
	U3CRunOtherU3Ed__17_t6C2A87D0ECF78DFDD56B08E6F684A6306EE02B40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704 L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_mB2F6F1ADF85712767A7A8D9DBD76E46CCB28D638_inline(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runner), (void*)NULL);
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_1 = ___0_other;
		(&V_0)->___other = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___other))->___source), (void*)NULL);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704* L_2 = (AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704*, U3CRunOtherU3Ed__17_t6C2A87D0ECF78DFDD56B08E6F684A6306EE02B40*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_2, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704* L_3 = (AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704*)(&(&V_0)->___U3CU3Et__builder);
		UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD L_4;
		L_4 = AsyncUniTaskVoidMethodBuilder_get_Task_mB71C82F7E32102835B3338AB8C21BFF03DF91E0D_inline(L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_OnCanceled1_mCE976CC6084AD64F21974B2808DC66777892181A_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_1 = V_0;
		NullCheck(L_1);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_2 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1)->___completionSource);
		_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* L_3 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_3, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD17A6E424611D0F6F6DA3ED729A7AD8D16204154(L_2, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _TakeUntil_DisposeAsync_m50C95350E88EA7C33967BE1BCF0A5F647C66AC70_fshared (_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)))), NULL);
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		NullCheck((RuntimeObject*)L_1);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(0, IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_001f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589));
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil__cctor_m0E44108C1C5871940C2DC73D7D2D994695E7E867_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)), NULL);
		((_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___CancelDelegate1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___CancelDelegate1), (void*)L_0);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)), NULL);
		((_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___MoveNextCoreDelegate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntil_t83C61A1F7AECCE201D4AAC8368F7F89A2C798256_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___MoveNextCoreDelegate), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled__ctor_m9B34CA4552233214A9859A3590943D30E8532A59_fshared (_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	CHECKED_LOCAL(_TakeUntilCanceled_t88C6D0BE43FDD8DF734AB8473A65BA3DD4759FF3_StaticInit);
	CHECKED_LOCAL(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_StaticInit);
	{
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken1;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken2;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken1), NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken1;
		CHECKED_LOCAL_INIT(_TakeUntilCanceled_t88C6D0BE43FDD8DF734AB8473A65BA3DD4759FF3_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___CancelDelegate1;
		CHECKED_LOCAL_INIT(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_StaticInit,(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mD3C28D9D4A58F73C3C6CDDA5E0DC986CEEBEF2E9(L_4, L_5, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_6);
	}

IL_0036:
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___1_cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8 = ___2_cancellationToken2;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_9;
		L_9 = CancellationToken_op_Inequality_m60DF5AE3E4D1B701E332343118A07A42EF5A4C55(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_10;
		L_10 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken2), NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___2_cancellationToken2;
		CHECKED_LOCAL_INIT(_TakeUntilCanceled_t88C6D0BE43FDD8DF734AB8473A65BA3DD4759FF3_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___CancelDelegate2;
		CHECKED_LOCAL_INIT(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_StaticInit,(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13;
		L_13 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mD3C28D9D4A58F73C3C6CDDA5E0DC986CEEBEF2E9(L_11, L_12, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), L_13);
	}

IL_005a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_get_Current_m513371FEB11F2C58030F9BB9F321472D23139315_fshared (_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t1106A6737F2D66D1076AE0535FD6230814D1351D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t1106A6737F2D66D1076AE0535FD6230814D1351D);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7)), SizeOf_TSource_t1106A6737F2D66D1076AE0535FD6230814D1351D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t1106A6737F2D66D1076AE0535FD6230814D1351D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_set_Current_mF29768B3453B918F68915B0055B941880C3C22D3_fshared (_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t1106A6737F2D66D1076AE0535FD6230814D1351D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t1106A6737F2D66D1076AE0535FD6230814D1351D);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_value : &___0_value), SizeOf_TSource_t1106A6737F2D66D1076AE0535FD6230814D1351D);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),11), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7), L_0, SizeOf_TSource_t1106A6737F2D66D1076AE0535FD6230814D1351D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _TakeUntilCanceled_MoveNextAsync_mFBC5379B109A1753FD124E1498BD4A73C53DBC44_fshared (_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	CHECKED_LOCAL(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit);
	{
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)))), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), (bool)1);
	}

IL_0014:
	{
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)))), NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), (bool)1);
	}

IL_0028:
	{
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), L_3, L_4);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),9), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), L_5);
	}

IL_0047:
	{
		bool L_6 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8));
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_7 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___False;
		return L_7;
	}

IL_0055:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_8 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_8, NULL);
		((  void (*) (_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_9 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_10;
		L_10 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_9, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_11;
		memset((&L_11), 0, sizeof(L_11));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_11), (RuntimeObject*)__this, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_SourceMoveNext_m33D785EB539741AC05F1F62891A47FB82F82F7E6_fshared (_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(_TakeUntilCanceled_t88C6D0BE43FDD8DF734AB8473A65BA3DD4759FF3_StaticInit);
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
			NullCheck(L_0);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0);
			V_0 = L_1;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_2;
			L_2 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_0), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),10), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_2);
			bool L_3;
			L_3 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), NULL);
			if (!L_3)
			{
				goto IL_002e_1;
			}
		}
		{
			CHECKED_LOCAL_INIT(_TakeUntilCanceled_t88C6D0BE43FDD8DF734AB8473A65BA3DD4759FF3_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))((RuntimeObject*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			CHECKED_LOCAL_INIT(_TakeUntilCanceled_t88C6D0BE43FDD8DF734AB8473A65BA3DD4759FF3_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___MoveNextCoreDelegate;
			Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), L_4, (RuntimeObject*)__this, NULL);
		}

IL_003f_1:
		{
			goto IL_0051;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_5;
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_6 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		Exception_t* L_7 = V_1;
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_6, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0051;
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_MoveNextCore_mBADF77F749CB5B3CEA18B0B00FAE1F977D4A1702_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TSource_t1106A6737F2D66D1076AE0535FD6230814D1351D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_t1106A6737F2D66D1076AE0535FD6230814D1351D);
	_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_1 = V_0;
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_2 = V_0;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_3 = *(Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_6 = V_0;
		bool L_7 = *(bool*)il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_8 = V_0;
		NullCheck(L_8);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_9 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_8)->___completionSource);
		bool L_10;
		L_10 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_9, (bool)0, NULL);
		return;
	}

IL_0030:
	{
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_11 = V_0;
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_12 = V_0;
		RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		NullCheck(L_13);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), L_13, (Il2CppFullySharedGenericAny*)L_14);
		NullCheck(L_11);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)) ? L_14: *(void**)L_14));
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_16 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_15)->___completionSource);
		bool L_17;
		L_17 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_16, (bool)1, NULL);
		return;
	}

IL_004f:
	{
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_18 = V_0;
		NullCheck(L_18);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_19 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_18)->___completionSource);
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_19, (bool)0, NULL);
	}

IL_005c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_OnCanceled1_m2C344658663E169B4EA127308CF2F64D5F1463CE_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_1 = V_0;
		bool L_2 = *(bool*)il2cpp_codegen_get_field_data_pointer(L_1, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_3 = V_0;
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_field_data_pointer(L_3, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), NULL);
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_4 = V_0;
		NullCheck(L_4);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_5 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_4)->___completionSource);
		bool L_6;
		L_6 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_5, (bool)0, NULL);
	}

IL_0027:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_OnCanceled2_mFB98B37DC58556FB736092CE7A30B6B7AC24FE75_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_1 = V_0;
		bool L_2 = *(bool*)il2cpp_codegen_get_field_data_pointer(L_1, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_3 = V_0;
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_field_data_pointer(L_3, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), NULL);
		_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* L_4 = V_0;
		NullCheck(L_4);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_5 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_4)->___completionSource);
		bool L_6;
		L_6 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_5, (bool)0, NULL);
	}

IL_0027:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _TakeUntilCanceled_DisposeAsync_m889ED489726A287AE19187294CE2A5059CF2A75C_fshared (_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)))), NULL);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5)))), NULL);
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		NullCheck((RuntimeObject*)L_1);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(0, IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_002a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589));
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled__cctor_mEED665C922EAADFC02CBB5137718E202F59ACCAD_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)), NULL);
		((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___CancelDelegate1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___CancelDelegate1), (void*)L_0);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)), NULL);
		((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___CancelDelegate2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___CancelDelegate2), (void*)L_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)), NULL);
		((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___MoveNextCoreDelegate = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_tFC76F03B542919C3B7094B7B03D04484C26166E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___MoveNextCoreDelegate), (void*)L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhile__ctor_m7972FB57E981E02BCD0E34A4C433E253F8A7D6D9_fshared (_TakeWhile_tCD1AC33C43A74484C24A3B480C20E14F7093118A* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorBase_2_t5A4D386CD72AA5F57C14BD03288EF439BA07DA45_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorBase_2_t5A4D386CD72AA5F57C14BD03288EF439BA07DA45_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhile_TryMoveNextCore_m8938BB615134D493190B47C349BBD282C5088A1D_fshared (_TakeWhile_tCD1AC33C43A74484C24A3B480C20E14F7093118A* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tC76DECE8E0C339D0F35E787154F139864B3205DC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_tC76DECE8E0C339D0F35E787154F139864B3205DC);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	{
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (Il2CppFullySharedGenericAny*)L_2);
		NullCheck(L_1);
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_2: *(void**)L_2));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (Il2CppFullySharedGenericAny*)L_4);
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_4: *(void**)L_4));
		bool* L_5 = ___1_result;
		*(((int8_t*)L_5)) = ((int8_t)1);
		return (bool)1;
	}

IL_0027:
	{
		bool* L_6 = ___1_result;
		*(((int8_t*)L_6)) = ((int8_t)0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileAwait__ctor_m110640D579F8F282C22D3186BB95C8A31FE33FD0_fshared (_TakeWhileAwait_t74A04E4999035197F8FE225A189DFBED2F3AAE6E* __this, RuntimeObject* ___0_source, Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorAwaitSelectorBase_3_tCA511094AE647452898FAEA8582A7309233457C4_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorAwaitSelectorBase_3_tCA511094AE647452898FAEA8582A7309233457C4_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _TakeWhileAwait_TransformAsync_m933B9EE1AC91149EC1D026E702C15302C9749BAB_fshared (_TakeWhileAwait_t74A04E4999035197F8FE225A189DFBED2F3AAE6E* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t9491F4DDDB3CACE40E2ACE9DB071494F5D6626B9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t9491F4DDDB3CACE40E2ACE9DB071494F5D6626B9);
	{
		Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735* L_0 = *(Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t9491F4DDDB3CACE40E2ACE9DB071494F5D6626B9);
		NullCheck(L_0);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_2;
		L_2 = InvokerFuncInvoker1< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileAwait_TrySetCurrentCore_mFB0006DFB3D2374297EED60ED1B28DFD9CAA2025_fshared (_TakeWhileAwait_t74A04E4999035197F8FE225A189DFBED2F3AAE6E* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t9491F4DDDB3CACE40E2ACE9DB071494F5D6626B9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t9491F4DDDB3CACE40E2ACE9DB071494F5D6626B9);
	{
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		bool* L_2 = ___1_terminateIteration;
		*(((int8_t*)L_2)) = ((int8_t)0);
		return (bool)1;
	}

IL_0014:
	{
		bool* L_3 = ___1_terminateIteration;
		*(((int8_t*)L_3)) = ((int8_t)1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileAwaitWithCancellation__ctor_m255490443B6724BBC97DEA45D24363EC0CEEB988_fshared (_TakeWhileAwaitWithCancellation_tA6A3DABC0278DA23E7E683BA2D7552900EC4265D* __this, RuntimeObject* ___0_source, Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorAwaitSelectorBase_3_t376B4604D04E866AEA087ED1A0E6025F959370D4_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorAwaitSelectorBase_3_t376B4604D04E866AEA087ED1A0E6025F959370D4_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _TakeWhileAwaitWithCancellation_TransformAsync_m60462B93DF9836D7641C84564AEB983595610896_fshared (_TakeWhileAwaitWithCancellation_tA6A3DABC0278DA23E7E683BA2D7552900EC4265D* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t227900CFB5C5B6C423D5AE5A09A7FD23BC670E47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t227900CFB5C5B6C423D5AE5A09A7FD23BC670E47);
	{
		Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639* L_0 = *(Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t227900CFB5C5B6C423D5AE5A09A7FD23BC670E47);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		NullCheck(L_0);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_3;
		L_3 = InvokerFuncInvoker2< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileAwaitWithCancellation_TrySetCurrentCore_m44E7F2C6879668D16065763383C54BCAF2DEF5CD_fshared (_TakeWhileAwaitWithCancellation_tA6A3DABC0278DA23E7E683BA2D7552900EC4265D* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t227900CFB5C5B6C423D5AE5A09A7FD23BC670E47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t227900CFB5C5B6C423D5AE5A09A7FD23BC670E47);
	{
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		bool* L_2 = ___1_terminateIteration;
		*(((int8_t*)L_2)) = ((int8_t)0);
		return (bool)1;
	}

IL_0014:
	{
		bool* L_3 = ___1_terminateIteration;
		*(((int8_t*)L_3)) = ((int8_t)1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileInt__ctor_m379BAE8F59E823CD948899335D01F16255E7CAE2_fshared (_TakeWhileInt_tBFB53321392233FB7CC1D808F8702142FF0E880F* __this, RuntimeObject* ___0_source, Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorBase_2_t113B800216286296D57D653C64A35450FB41583E_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorBase_2_t113B800216286296D57D653C64A35450FB41583E_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileInt_TryMoveNextCore_m85E575267E1CF889CD390A4FC9AD142CB70696B7_fshared (_TakeWhileInt_tBFB53321392233FB7CC1D808F8702142FF0E880F* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t44950C7C8D6AC0EE1A119D357F7B1D7F2F8A0D87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_t44950C7C8D6AC0EE1A119D357F7B1D7F2F8A0D87);
	const Il2CppFullySharedGenericAny L_7 = L_2;
	int32_t V_0 = 0;
	{
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_1 = *(Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (Il2CppFullySharedGenericAny*)L_2);
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (((int64_t)L_4 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_4 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), ((int32_t)il2cpp_codegen_add(L_4, 1)));
		int32_t L_5 = V_0;
		NullCheck(L_1);
		bool L_6;
		L_6 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_2: *(void**)L_2), L_5);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck((AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (AsyncEnumeratorBase_2_t79D7FE8B78BDBF863D20A92DA6D1F5665A9C5C90*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_7: *(void**)L_7));
		bool* L_8 = ___1_result;
		*(((int8_t*)L_8)) = ((int8_t)1);
		return (bool)1;
	}

IL_0038:
	{
		bool* L_9 = ___1_result;
		*(((int8_t*)L_9)) = ((int8_t)0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileIntAwait__ctor_m23B46E33C0FB7362A1813020721609D1805E83D0_fshared (_TakeWhileIntAwait_tBE2E053F5CD846ED8FB60CA3A40721BF66971FB2* __this, RuntimeObject* ___0_source, Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorAwaitSelectorBase_3_t37EAD24A43345C5A167B3546669EEF3180BBC44C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorAwaitSelectorBase_3_t37EAD24A43345C5A167B3546669EEF3180BBC44C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _TakeWhileIntAwait_TransformAsync_m9773FFC142D10DF534DAA2DC32C32C619BF19C58_fshared (_TakeWhileIntAwait_tBE2E053F5CD846ED8FB60CA3A40721BF66971FB2* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tE7CC2FF146A7BB934DDA7EE7CA9AAA2E326A5270 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_tE7CC2FF146A7BB934DDA7EE7CA9AAA2E326A5270);
	int32_t V_0 = 0;
	{
		Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32* L_0 = *(Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_tE7CC2FF146A7BB934DDA7EE7CA9AAA2E326A5270);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int64_t)L_3 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), ((int32_t)il2cpp_codegen_add(L_3, 1)));
		int32_t L_4 = V_0;
		NullCheck(L_0);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_5;
		L_5 = InvokerFuncInvoker2< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1), L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileIntAwait_TrySetCurrentCore_mECBF930C8CB58EA939CB55FD6DC54939C53DCC4D_fshared (_TakeWhileIntAwait_tBE2E053F5CD846ED8FB60CA3A40721BF66971FB2* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tE7CC2FF146A7BB934DDA7EE7CA9AAA2E326A5270 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_tE7CC2FF146A7BB934DDA7EE7CA9AAA2E326A5270);
	{
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		bool* L_2 = ___1_terminateIteration;
		*(((int8_t*)L_2)) = ((int8_t)0);
		return (bool)1;
	}

IL_0014:
	{
		bool* L_3 = ___1_terminateIteration;
		*(((int8_t*)L_3)) = ((int8_t)1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileIntAwaitWithCancellation__ctor_m7948E9290C3E3B6995C108EE35D20D108E7C8254_fshared (_TakeWhileIntAwaitWithCancellation_tDA6862CD6358F449DB02FFC342645483EE070829* __this, RuntimeObject* ___0_source, Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(AsyncEnumeratorAwaitSelectorBase_3_tB6CEED670A507ACE80ADDA85F322AC8C3A2D3B1F_StaticInit);
	{
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		CHECKED_LOCAL_INIT(AsyncEnumeratorAwaitSelectorBase_3_tB6CEED670A507ACE80ADDA85F322AC8C3A2D3B1F_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0* L_2 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _TakeWhileIntAwaitWithCancellation_TransformAsync_mC19FE2C425201F238BF2FDB27A747C49C81D0092_fshared (_TakeWhileIntAwaitWithCancellation_tDA6862CD6358F449DB02FFC342645483EE070829* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tD5F1847D45CFA0E9C32A6A86F020BA6725A57D28 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_tD5F1847D45CFA0E9C32A6A86F020BA6725A57D28);
	int32_t V_0 = 0;
	{
		Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0* L_0 = *(Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_tD5F1847D45CFA0E9C32A6A86F020BA6725A57D28);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int64_t)L_3 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), ((int32_t)il2cpp_codegen_add(L_3, 1)));
		int32_t L_4 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		NullCheck(L_0);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_6;
		L_6 = InvokerFuncInvoker3< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1), L_4, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileIntAwaitWithCancellation_TrySetCurrentCore_m462D8EBC31DEF02120BEE11B85DDDB7067FEB4CF_fshared (_TakeWhileIntAwaitWithCancellation_tDA6862CD6358F449DB02FFC342645483EE070829* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tD5F1847D45CFA0E9C32A6A86F020BA6725A57D28 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_tD5F1847D45CFA0E9C32A6A86F020BA6725A57D28);
	{
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), (AsyncEnumeratorAwaitSelectorBase_3_t5A38856FF301366D547DBDCDCD2A28DCDB5E06E9*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		bool* L_2 = ___1_terminateIteration;
		*(((int8_t*)L_2)) = ((int8_t)0);
		return (bool)1;
	}

IL_0014:
	{
		bool* L_3 = ___1_terminateIteration;
		*(((int8_t*)L_3)) = ((int8_t)1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Throw__ctor_m7A7081D6EF6A0C100BE7F2965028F335268B5D72_fshared (_Throw_tFE564DC3F1C8BFABE7A5C2CF451DE723F9D09CDE* __this, Exception_t* ___0_exception, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Exception_t* L_0 = ___0_exception;
		__this->___exception = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken))->____source), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Throw_get_Current_m6C325703EB6FE964BA9BB69F3536B9CDE3D4B5CE_fshared (_Throw_tFE564DC3F1C8BFABE7A5C2CF451DE723F9D09CDE* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t3BA94C16D59C4427A6F43192623784F8B68C0FCD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t3BA94C16D59C4427A6F43192623784F8B68C0FCD);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t3BA94C16D59C4427A6F43192623784F8B68C0FCD);
	memset(V_0, 0, SizeOf_TValue_t3BA94C16D59C4427A6F43192623784F8B68C0FCD);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t3BA94C16D59C4427A6F43192623784F8B68C0FCD);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_TValue_t3BA94C16D59C4427A6F43192623784F8B68C0FCD);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t3BA94C16D59C4427A6F43192623784F8B68C0FCD);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _Throw_MoveNextAsync_m51659F0ED6F69098511D28D12895F0870FE96B78_fshared (_Throw_tFE564DC3F1C8BFABE7A5C2CF451DE723F9D09CDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	CHECKED_LOCAL(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit);
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken);
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		Exception_t* L_1 = __this->___exception;
		CHECKED_LOCAL_INIT(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit,(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_2;
		L_2 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7(L_1, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _Throw_DisposeAsync_mCF88F54A6260BA969DF4EC9323AC0648394640C4_fshared (_Throw_tFE564DC3F1C8BFABE7A5C2CF451DE723F9D09CDE* __this, const RuntimeMethod* method) 
{
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589));
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerable__ctor_mBBB7F6089E046995126E0387176F8F2AE1EB2781_fshared (_ToUniTaskAsyncEnumerable_t015EFDD19CF1B36E1F6A6A91DEE8DF2AE3DAE7EF* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken))->____source), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerable_get_Current_mDD2300FB04B56F9B1EAC32D65D91C4A7C72BC5DF_fshared (_ToUniTaskAsyncEnumerable_t015EFDD19CF1B36E1F6A6A91DEE8DF2AE3DAE7EF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t47B026AB3D38DEFEE808EFEC4B51639BCC66005C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t47B026AB3D38DEFEE808EFEC4B51639BCC66005C);
	{
		RuntimeObject* L_0 = __this->___enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t47B026AB3D38DEFEE808EFEC4B51639BCC66005C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _ToUniTaskAsyncEnumerable_MoveNextAsync_mA2B06D809810AC60C751B9E4C7CAEF60151D7426_fshared (_ToUniTaskAsyncEnumerable_t015EFDD19CF1B36E1F6A6A91DEE8DF2AE3DAE7EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	CHECKED_LOCAL(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit);
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken);
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		RuntimeObject* L_1 = __this->___enumerator;
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_2 = __this->___source;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 3), L_2);
		__this->___enumerator = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_3);
	}

IL_0024:
	{
		RuntimeObject* L_4 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_6 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___True;
		return L_6;
	}

IL_0037:
	{
		CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_7 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___False;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _ToUniTaskAsyncEnumerable_DisposeAsync_m99533225C0E68158251C5B66D56444FFE0619A2C_fshared (_ToUniTaskAsyncEnumerable_t015EFDD19CF1B36E1F6A6A91DEE8DF2AE3DAE7EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589));
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_1 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable__ctor_m73FCD613DA31799BB4B0EA89F555E2E8A5B44B83_fshared (_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	CHECKED_LOCAL(_ToUniTaskAsyncEnumerableObservable_t5168770776ECE4406D091B31A727A79432756009_StaticInit);
	CHECKED_LOCAL(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_StaticInit);
	{
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_1);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		il2cpp_codegen_write_field_data<Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), L_2);
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken), NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken;
		CHECKED_LOCAL_INIT(_ToUniTaskAsyncEnumerableObservable_t5168770776ECE4406D091B31A727A79432756009_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___OnCanceledDelegate;
		CHECKED_LOCAL_INIT(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_StaticInit,(CancellationTokenExtensions_tAEA3343D3F1E0AAF2B9B3C4E956062E2BEABECC8_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mD3C28D9D4A58F73C3C6CDDA5E0DC986CEEBEF2E9(L_4, L_5, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),9), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_6);
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_get_Current_mA0A5EDCF6513C884A79F49C52B79CF0F1F8A7914_fshared (_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
	const Il2CppFullySharedGenericAny L_9 = L_1;
	const Il2CppFullySharedGenericAny L_11 = L_1;
	const Il2CppFullySharedGenericAny L_12 = L_1;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
	memset(V_2, 0, SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
	memset(V_3, 0, SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)), SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
		return;
	}

IL_000f:
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0063;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_4, NULL);
				}

IL_0063:
				{
					return;
				}
			}
		});
		try
		{
			{
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_5, (&V_1), NULL);
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
				NullCheck(L_6);
				int32_t L_7;
				L_7 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(L_6, NULL);
				if (!L_7)
				{
					goto IL_004e_1;
				}
			}
			{
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
				NullCheck(L_8);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), L_9, SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
				il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7), (bool)1);
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9)), SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
				il2cpp_codegen_memcpy(V_2, L_10, SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
				goto IL_0064;
			}

IL_004e_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
				il2cpp_codegen_memcpy(L_11, V_3, SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
				il2cpp_codegen_memcpy(V_2, L_11, SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
				goto IL_0064;
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

IL_0064:
	{
		il2cpp_codegen_memcpy(L_12, V_2, SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _ToUniTaskAsyncEnumerableObservable_MoveNextAsync_mF356C555716ED356908FC2840ACECED0E94500C9_fshared (_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC58FE3DBF8B6FCE1CCB0673C5C0B896FE35E05E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	CHECKED_LOCAL(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit);
	CHECKED_LOCAL(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit);
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a7:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00b0;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_00b0:
				{
					return;
				}
			}
		});
		try
		{
			{
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
				il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7), (bool)0);
				CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				bool L_4;
				L_4 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)))), NULL);
				if (!L_4)
				{
					goto IL_0033_1;
				}
			}
			{
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
				CHECKED_LOCAL_INIT(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit,(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_6;
				L_6 = UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC58FE3DBF8B6FCE1CCB0673C5C0B896FE35E05E9(L_5, UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC58FE3DBF8B6FCE1CCB0673C5C0B896FE35E05E9_RuntimeMethod_var);
				V_2 = L_6;
				goto IL_00b1;
			}

IL_0033_1:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12));
				if (L_7)
				{
					goto IL_004d_1;
				}
			}
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_8, (RuntimeObject*)__this);
				il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), L_9);
			}

IL_004d_1:
			{
				Exception_t* L_10 = *(Exception_t**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
				if (!L_10)
				{
					goto IL_0063_1;
				}
			}
			{
				Exception_t* L_11 = *(Exception_t**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
				CHECKED_LOCAL_INIT(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit,(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_12;
				L_12 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7(L_11, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7_RuntimeMethod_var);
				V_2 = L_12;
				goto IL_00b1;
			}

IL_0063_1:
			{
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_13 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
				NullCheck(L_13);
				int32_t L_14;
				L_14 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(L_13, NULL);
				if (!L_14)
				{
					goto IL_0078_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_15 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___True;
				V_2 = L_15;
				goto IL_00b1;
			}

IL_0078_1:
			{
				bool L_16 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16));
				if (!L_16)
				{
					goto IL_0088_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticInit,(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_17 = ((CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t27AE5B8641C6A18F6E488124494233EB6C30FBC1_il2cpp_TypeInfo_var))->___False;
				V_2 = L_17;
				goto IL_00b1;
			}

IL_0088_1:
			{
				UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_18 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
				UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_18, NULL);
				UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_19 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
				int16_t L_20;
				L_20 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_19, NULL);
				UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_21;
				memset((&L_21), 0, sizeof(L_21));
				UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_21), (RuntimeObject*)__this, L_20, NULL);
				V_2 = L_21;
				goto IL_00b1;
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

IL_00b1:
	{
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_22 = V_2;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _ToUniTaskAsyncEnumerableObservable_DisposeAsync_mE78900826482B7D24C5871708E96D6AFC11BD998_fshared (_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12));
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_0);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_1 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_1, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589));
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnCompleted_mD69B1E347495FD1A02A0AE51E9ECB78AA9769C44_fshared (_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* __this, const RuntimeMethod* method) 
{
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	bool V_1 = false;
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16), (bool)1);
			UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_4 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
			bool L_5;
			L_5 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_4, (bool)0, NULL);
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
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnError_mFEC62987BAA07BCA33C58247FF8615320839CC1B_fshared (_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	bool V_1 = false;
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			Exception_t* L_4 = ___0_error;
			il2cpp_codegen_write_field_data<Exception_t*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_4);
			UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_5 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
			Exception_t* L_6 = ___0_error;
			bool L_7;
			L_7 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_5, L_6, NULL);
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
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnNext_m2041903B765B78BB41F95E81F87D11388F899282_fshared (_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	bool V_1 = false;
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0035;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0035:
				{
					return;
				}
			}
		});
		try
		{
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
			il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)) ? ___0_value : &___0_value), SizeOf_T_tF904E3AB8430EDC9BE418660B1ED115BDCBF14B1);
			NullCheck(L_4);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)) ? L_5: *(void**)L_5));
			UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_6 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
			bool L_7;
			L_7 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_6, (bool)1, NULL);
			goto IL_0036;
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

IL_0036:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnCanceled_mA3610F75A76A25AFC0FB12A636C8E3D75C7B55B1_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* V_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* L_1 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(L_1, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_0035;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_4, NULL);
				}

IL_0035:
				{
					return;
				}
			}
		});
		try
		{
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_5, (&V_2), NULL);
			_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* L_6 = V_0;
			NullCheck(L_6);
			UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_7 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_6)->___completionSource);
			_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184* L_8 = V_0;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
			bool L_10;
			L_10 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD17A6E424611D0F6F6DA3ED729A7AD8D16204154(L_7, L_9, NULL);
			goto IL_0036;
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

IL_0036:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable__cctor_m2623F6CE8CA9F35D0E43395F1B88B896A604F709_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18)), NULL);
		((_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___OnCanceledDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ToUniTaskAsyncEnumerableObservable_tA0A04DECCF29C5C0C9AC76F78022D078C35B0184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___OnCanceledDelegate), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableTask__ctor_mE8C97E4DC75C149B0DB5BF2B1C902AC093048702_fshared (_ToUniTaskAsyncEnumerableTask_tCC06DB5074BC07C0613BC84F2E49E22B066D8ECE* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_1);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), (bool)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableTask_get_Current_m8F90B395D4A5AE0B7E4E5649D27B391FA1223124_fshared (_ToUniTaskAsyncEnumerableTask_tCC06DB5074BC07C0613BC84F2E49E22B066D8ECE* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tDDCA541B4198D685B9A576D6A4BCD0FDECD42460 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tDDCA541B4198D685B9A576D6A4BCD0FDECD42460);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5)), SizeOf_T_tDDCA541B4198D685B9A576D6A4BCD0FDECD42460);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tDDCA541B4198D685B9A576D6A4BCD0FDECD42460);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _ToUniTaskAsyncEnumerableTask_MoveNextAsync_mBB4C057AED21149092C357A8B621CED280F36210_fshared (_ToUniTaskAsyncEnumerableTask_tCC06DB5074BC07C0613BC84F2E49E22B066D8ECE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_mA9B74FF59B2822518F2D0C381A6BD04C6B472F6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMoveNextAsyncU3Ed__7_t1A7BBC5F56DB2DD005EB3DB41C8B1FB72EF6A413 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_m34FF5CC73E1088E8447AA68B32ACC3887D3EDBF8_inline(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runnerPromise), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___ex), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679* L_1 = (AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679*, U3CMoveNextAsyncU3Ed__7_t1A7BBC5F56DB2DD005EB3DB41C8B1FB72EF6A413*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(L_1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679* L_2 = (AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679*)(&(&V_0)->___U3CU3Et__builder);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_3;
		L_3 = AsyncUniTaskMethodBuilder_1_get_Task_mA9B74FF59B2822518F2D0C381A6BD04C6B472F6F_inline(L_2, AsyncUniTaskMethodBuilder_1_get_Task_mA9B74FF59B2822518F2D0C381A6BD04C6B472F6F_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _ToUniTaskAsyncEnumerableTask_DisposeAsync_mE9073624F767AE9C5502F750E362F8ABFCB228C2_fshared (_ToUniTaskAsyncEnumerableTask_tCC06DB5074BC07C0613BC84F2E49E22B066D8ECE* __this, const RuntimeMethod* method) 
{
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589));
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableUniTask__ctor_m4F72C9EC26303D69A899822A38DDB74033C65532_fshared (_ToUniTaskAsyncEnumerableUniTask_t5634E0B18370D4C2BD56BAA777324F83A982E9C1* __this, UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_UniTask_1_t65A10554C2C80B764D96333C8AB655DE90374700 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067 L_0 = alloca(SizeOf_UniTask_1_t65A10554C2C80B764D96333C8AB655DE90374700);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, ___0_source, SizeOf_UniTask_1_t65A10554C2C80B764D96333C8AB655DE90374700);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0, SizeOf_UniTask_1_t65A10554C2C80B764D96333C8AB655DE90374700);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), (bool)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableUniTask_get_Current_mDE449FB3ADCE0AF55D78E16278AD4E8A9DBF65AC_fshared (_ToUniTaskAsyncEnumerableUniTask_t5634E0B18370D4C2BD56BAA777324F83A982E9C1* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t4CB03941510DF2ACDBD148C368C605F634037951 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t4CB03941510DF2ACDBD148C368C605F634037951);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_T_t4CB03941510DF2ACDBD148C368C605F634037951);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t4CB03941510DF2ACDBD148C368C605F634037951);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _ToUniTaskAsyncEnumerableUniTask_MoveNextAsync_m61DC8F042FE0061031FC7BF59AF7B98F01A8AB51_fshared (_ToUniTaskAsyncEnumerableUniTask_t5634E0B18370D4C2BD56BAA777324F83A982E9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_mA9B74FF59B2822518F2D0C381A6BD04C6B472F6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_U3CMoveNextAsyncU3Ed__7_t1BF5D46E07E1C7EF6DD006238D86DA363150B4F5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	U3CMoveNextAsyncU3Ed__7_t6A482E8E448EFDDD8B4A785C20B218607D12C300 V_0 = alloca(SizeOf_U3CMoveNextAsyncU3Ed__7_t1BF5D46E07E1C7EF6DD006238D86DA363150B4F5);
	memset(V_0, 0, SizeOf_U3CMoveNextAsyncU3Ed__7_t1BF5D46E07E1C7EF6DD006238D86DA363150B4F5);
	{
		AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_m34FF5CC73E1088E8447AA68B32ACC3887D3EDBF8_inline(NULL);
		il2cpp_codegen_write_field_data<AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679, true>((U3CMoveNextAsyncU3Ed__7_t6A482E8E448EFDDD8B4A785C20B218607D12C300*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_0);
		il2cpp_codegen_write_field_data<_ToUniTaskAsyncEnumerableUniTask_t5634E0B18370D4C2BD56BAA777324F83A982E9C1*, true>((U3CMoveNextAsyncU3Ed__7_t6A482E8E448EFDDD8B4A785C20B218607D12C300*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), __this);
		il2cpp_codegen_write_field_data<int32_t, false>((U3CMoveNextAsyncU3Ed__7_t6A482E8E448EFDDD8B4A785C20B218607D12C300*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 10), (-1));
		((  void (*) (AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679*, U3CMoveNextAsyncU3Ed__7_t6A482E8E448EFDDD8B4A785C20B218607D12C300*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))((((AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679*)il2cpp_codegen_get_field_data_pointer((U3CMoveNextAsyncU3Ed__7_t6A482E8E448EFDDD8B4A785C20B218607D12C300*)V_0, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8)))), (U3CMoveNextAsyncU3Ed__7_t6A482E8E448EFDDD8B4A785C20B218607D12C300*)V_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1;
		L_1 = AsyncUniTaskMethodBuilder_1_get_Task_mA9B74FF59B2822518F2D0C381A6BD04C6B472F6F_inline((((AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679*)il2cpp_codegen_get_field_data_pointer((U3CMoveNextAsyncU3Ed__7_t6A482E8E448EFDDD8B4A785C20B218607D12C300*)V_0, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8)))), AsyncUniTaskMethodBuilder_1_get_Task_mA9B74FF59B2822518F2D0C381A6BD04C6B472F6F_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _ToUniTaskAsyncEnumerableUniTask_DisposeAsync_mD7441C02918571E58639C7E912D31871D1CFDB8F_fshared (_ToUniTaskAsyncEnumerableUniTask_t5634E0B18370D4C2BD56BAA777324F83A982E9C1* __this, const RuntimeMethod* method) 
{
	UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589));
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where__ctor_m43E99D5C601E8863CB77111A6B29108BD24AEB67_fshared (_Where_t9CEF62DC9384BA7AA2F8C4BD9008ED0911E8A9D0* __this, RuntimeObject* ___0_source, Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), (-1));
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0);
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_1 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), NULL);
		il2cpp_codegen_write_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_get_Current_mA2D82DE0FF2AE2E170D88DBA6E68C049FE3A8D81_fshared (_Where_t9CEF62DC9384BA7AA2F8C4BD9008ED0911E8A9D0* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8)), SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_set_Current_m8F988712EA824FD89C71D06C4E76752FE32A34A1_fshared (_Where_t9CEF62DC9384BA7AA2F8C4BD9008ED0911E8A9D0* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_value : &___0_value), SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_0, SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _Where_MoveNextAsync_mD1B0C381FEFC3A230611C1CD370491CCDB912ACD_fshared (_Where_t9CEF62DC9384BA7AA2F8C4BD9008ED0911E8A9D0* __this, const RuntimeMethod* method) 
{
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205));
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_2 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_2, NULL);
		((  void (*) (_Where_t9CEF62DC9384BA7AA2F8C4BD9008ED0911E8A9D0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_3 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_3, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_5), (RuntimeObject*)__this, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_MoveNext_mC73E1BF56C7760D7DAAE6882C1DDAA8E8AEF23B7_fshared (_Where_t9CEF62DC9384BA7AA2F8C4BD9008ED0911E8A9D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_t9C75A2BE920F4BFAF452BA8A861BABD67F0CE69F);
	int32_t V_0 = 0;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0021_1;
				}
				case 1:
				{
					goto IL_0038_1;
				}
				case 2:
				{
					goto IL_007b_1;
				}
			}
		}
		{
			goto IL_00cb_1;
		}

IL_0021_1:
		{
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 9), L_2, L_3);
			il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_4);
		}

IL_0038_1:
		{
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_5);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_5);
			V_1 = L_6;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_7;
			L_7 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_1), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_7);
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), NULL);
			if (L_8)
			{
				goto IL_007b_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 1);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), L_9, NULL);
			goto IL_0110;
		}

IL_007b_1:
		{
			bool L_10;
			L_10 = Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00cb_1;
			}
		}
		{
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_12: *(void**)L_12));
			Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_13 = *(Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, (Il2CppFullySharedGenericAny*)L_14);
			int32_t L_15 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 18));
			V_2 = L_15;
			int32_t L_16 = V_2;
			if (((int64_t)L_16 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_16 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 18), ((int32_t)il2cpp_codegen_add(L_16, 1)));
			int32_t L_17 = V_2;
			NullCheck(L_13);
			bool L_18;
			L_18 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_14: *(void**)L_14), L_17);
			if (!L_18)
			{
				goto IL_00bf_1;
			}
		}
		{
			goto IL_00fb;
		}

IL_00bf_1:
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
			goto IL_0000;
		}

IL_00cb_1:
		{
			goto IL_00e5;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cd;
		}
		throw e;
	}

CATCH_00cd:
	{
		Exception_t* L_19 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_19;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_20 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		Exception_t* L_21 = V_3;
		bool L_22;
		L_22 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_20, L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0110;
	}

IL_00e5:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_23 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_23, (bool)0, NULL);
		return;
	}

IL_00fb:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_25 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_25, (bool)1, NULL);
		return;
	}

IL_0110:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _Where_DisposeAsync_mDF626CCC1DEEE442FA6AB7C88A0E82E1A7F0AAA3_fshared (_Where_t9CEF62DC9384BA7AA2F8C4BD9008ED0911E8A9D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		NullCheck((RuntimeObject*)L_0);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(0, IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where__ctor_mD8325B3884CE8B5080B87E5F5379B4705DEC6E5C_fshared (_Where_t2657A222C9BD18F24A781BDC97C853B219E0A4D4* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), (-1));
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), NULL);
		il2cpp_codegen_write_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_get_Current_m360E086DC99D0515486620E21197ADAD2D1E3643_fshared (_Where_t2657A222C9BD18F24A781BDC97C853B219E0A4D4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8)), SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_set_Current_m8982D2BD64112D39F4995D583D1AAB1C232B4E7E_fshared (_Where_t2657A222C9BD18F24A781BDC97C853B219E0A4D4* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_value : &___0_value), SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_0, SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _Where_MoveNextAsync_mE0139EC8A2592D45D735A992FDD98A914C1C81B0_fshared (_Where_t2657A222C9BD18F24A781BDC97C853B219E0A4D4* __this, const RuntimeMethod* method) 
{
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205));
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_2 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_2, NULL);
		((  void (*) (_Where_t2657A222C9BD18F24A781BDC97C853B219E0A4D4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_3 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_3, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_5), (RuntimeObject*)__this, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_MoveNext_mA71F711308B937ABF139B06B9AF24902E57D28CC_fshared (_Where_t2657A222C9BD18F24A781BDC97C853B219E0A4D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_tEB70F173B96A2DFEE10036C4E4BE30E4DF40A0F6);
	int32_t V_0 = 0;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0021_1;
				}
				case 1:
				{
					goto IL_0038_1;
				}
				case 2:
				{
					goto IL_007b_1;
				}
			}
		}
		{
			goto IL_00ba_1;
		}

IL_0021_1:
		{
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 9), L_2, L_3);
			il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_4);
		}

IL_0038_1:
		{
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_5);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_5);
			V_1 = L_6;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_7;
			L_7 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_1), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_7);
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), NULL);
			if (L_8)
			{
				goto IL_007b_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 1);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), L_9, NULL);
			goto IL_00ff;
		}

IL_007b_1:
		{
			bool L_10;
			L_10 = Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00ba_1;
			}
		}
		{
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_12: *(void**)L_12));
			Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_13 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, (Il2CppFullySharedGenericAny*)L_14);
			NullCheck(L_13);
			bool L_15;
			L_15 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_14: *(void**)L_14));
			if (!L_15)
			{
				goto IL_00ae_1;
			}
		}
		{
			goto IL_00ea;
		}

IL_00ae_1:
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
			goto IL_0000;
		}

IL_00ba_1:
		{
			goto IL_00d4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		throw e;
	}

CATCH_00bc:
	{
		Exception_t* L_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_2 = L_16;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_17 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		Exception_t* L_18 = V_2;
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_17, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ff;
	}

IL_00d4:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_20 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_21;
		L_21 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_20, (bool)0, NULL);
		return;
	}

IL_00ea:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_22 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_22, (bool)1, NULL);
		return;
	}

IL_00ff:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _Where_DisposeAsync_mD480B482DC2AD199922878BE5526C29D45EC0987_fshared (_Where_t2657A222C9BD18F24A781BDC97C853B219E0A4D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		NullCheck((RuntimeObject*)L_0);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(0, IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait__ctor_m79FB9E7DF5F845B00F5395A692D007E0C7C37B5D_fshared (_WhereAwait_tD08A611AEC94AF1F8FADC5153BEE5EDDFBD216CA* __this, RuntimeObject* ___0_source, Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), (-1));
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0);
		Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735* L_1 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), NULL);
		il2cpp_codegen_write_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_get_Current_m714C378485222EFFFEC960928A1AC0A4E980928E_fshared (_WhereAwait_tD08A611AEC94AF1F8FADC5153BEE5EDDFBD216CA* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8)), SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_set_Current_mE1751FCD260952ABD43DE52A95F5242DA44A3EF6_fshared (_WhereAwait_tD08A611AEC94AF1F8FADC5153BEE5EDDFBD216CA* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_value : &___0_value), SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_0, SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _WhereAwait_MoveNextAsync_mBCF4D668A6485044F3751953B41C45D5EDACC6E5_fshared (_WhereAwait_tD08A611AEC94AF1F8FADC5153BEE5EDDFBD216CA* __this, const RuntimeMethod* method) 
{
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205));
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_2 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_2, NULL);
		((  void (*) (_WhereAwait_tD08A611AEC94AF1F8FADC5153BEE5EDDFBD216CA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_3 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_3, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_5), (RuntimeObject*)__this, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_MoveNext_m326974F27E2A45E948E2EB609F46A733839D7D1E_fshared (_WhereAwait_tD08A611AEC94AF1F8FADC5153BEE5EDDFBD216CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_t325452D155F73BD8F2B84AD7AA33144344E6ED42);
	int32_t V_0 = 0;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00e5_1;
				}
			}
		}
		{
			goto IL_0100_1;
		}

IL_0025_1:
		{
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 9), L_2, L_3);
			il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_4);
		}

IL_003c_1:
		{
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_5);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_5);
			V_1 = L_6;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_7;
			L_7 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_1), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_7);
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), NULL);
			if (L_8)
			{
				goto IL_007f_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 1);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), L_9, NULL);
			goto IL_0145;
		}

IL_007f_1:
		{
			bool L_10;
			L_10 = Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00e3_1;
			}
		}
		{
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_12: *(void**)L_12));
			Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735* L_13 = *(Func_2_tE80728ADCCE91C1802FD91E3115DCA684B986735**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, (Il2CppFullySharedGenericAny*)L_14);
			NullCheck(L_13);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_15;
			L_15 = InvokerFuncInvoker1< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_14: *(void**)L_14));
			V_1 = L_15;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_16;
			L_16 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_1), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19), L_16);
			bool L_17;
			L_17 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19)))), NULL);
			if (L_17)
			{
				goto IL_00e5_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 2);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19)))), L_18, NULL);
			goto IL_0145;
		}

IL_00e3_1:
		{
			goto IL_011a;
		}

IL_00e5_1:
		{
			bool L_19;
			L_19 = Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19)))), Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
			if (!L_19)
			{
				goto IL_00f4_1;
			}
		}
		{
			goto IL_0130;
		}

IL_00f4_1:
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
			goto IL_0000;
		}

IL_0100_1:
		{
			goto IL_011a;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0102;
		}
		throw e;
	}

CATCH_0102:
	{
		Exception_t* L_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_2 = L_20;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_21 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		Exception_t* L_22 = V_2;
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_21, L_22, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0145;
	}

IL_011a:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_24 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_24, (bool)0, NULL);
		return;
	}

IL_0130:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_26 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_26, (bool)1, NULL);
		return;
	}

IL_0145:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _WhereAwait_DisposeAsync_mA39EFBDA42F744C943F1EF6A54876364997FA120_fshared (_WhereAwait_tD08A611AEC94AF1F8FADC5153BEE5EDDFBD216CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		NullCheck((RuntimeObject*)L_0);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(0, IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait__ctor_m203FFC91FC64054EF11F51AE07B03AABCB3273EB_fshared (_WhereAwait_tD3CAB2F326080E7D38A4AC3043F09218B47712BF* __this, RuntimeObject* ___0_source, Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), (-1));
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0);
		Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32* L_1 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), NULL);
		il2cpp_codegen_write_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_get_Current_mD5D24A4ADF7662F52CB789B60D0B42C515C2456B_fshared (_WhereAwait_tD3CAB2F326080E7D38A4AC3043F09218B47712BF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8)), SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_set_Current_m96CF5F4F9782231656B5F18DFB36FA4483A50A33_fshared (_WhereAwait_tD3CAB2F326080E7D38A4AC3043F09218B47712BF* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_value : &___0_value), SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),9), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_0, SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _WhereAwait_MoveNextAsync_m892AC5AAA3602F8A8E739D557631C3DC4917E9F4_fshared (_WhereAwait_tD3CAB2F326080E7D38A4AC3043F09218B47712BF* __this, const RuntimeMethod* method) 
{
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205));
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_2 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_2, NULL);
		((  void (*) (_WhereAwait_tD3CAB2F326080E7D38A4AC3043F09218B47712BF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_3 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_3, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_5), (RuntimeObject*)__this, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_MoveNext_mA06039D53AF3CCAB370F8B1EB0E8972D4729CCA8_fshared (_WhereAwait_tD3CAB2F326080E7D38A4AC3043F09218B47712BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_t79DD6A6B3DA8A1C51D82CE7EB2A49C2BEFE01A4D);
	int32_t V_0 = 0;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00f6_1;
				}
			}
		}
		{
			goto IL_0111_1;
		}

IL_0025_1:
		{
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 9), L_2, L_3);
			il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_4);
		}

IL_003c_1:
		{
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_5);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_5);
			V_1 = L_6;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_7;
			L_7 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_1), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_7);
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), NULL);
			if (L_8)
			{
				goto IL_007f_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 1);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), L_9, NULL);
			goto IL_0156;
		}

IL_007f_1:
		{
			bool L_10;
			L_10 = Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00f4_1;
			}
		}
		{
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_12: *(void**)L_12));
			Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32* L_13 = *(Func_3_t5B947A76559B59D7AF122D5498E64D97F8C07D32**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, (Il2CppFullySharedGenericAny*)L_14);
			int32_t L_15 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 18));
			V_2 = L_15;
			int32_t L_16 = V_2;
			if (((int64_t)L_16 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_16 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 18), ((int32_t)il2cpp_codegen_add(L_16, 1)));
			int32_t L_17 = V_2;
			NullCheck(L_13);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_18;
			L_18 = InvokerFuncInvoker2< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_14: *(void**)L_14), L_17);
			V_1 = L_18;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_19;
			L_19 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_1), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20), L_19);
			bool L_20;
			L_20 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20)))), NULL);
			if (L_20)
			{
				goto IL_00f6_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 2);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20)))), L_21, NULL);
			goto IL_0156;
		}

IL_00f4_1:
		{
			goto IL_012b;
		}

IL_00f6_1:
		{
			bool L_22;
			L_22 = Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20)))), Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
			if (!L_22)
			{
				goto IL_0105_1;
			}
		}
		{
			goto IL_0141;
		}

IL_0105_1:
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
			goto IL_0000;
		}

IL_0111_1:
		{
			goto IL_012b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0113;
		}
		throw e;
	}

CATCH_0113:
	{
		Exception_t* L_23 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_23;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_24 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		Exception_t* L_25 = V_3;
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_24, L_25, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0156;
	}

IL_012b:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_27 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_27, (bool)0, NULL);
		return;
	}

IL_0141:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_29 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_29, (bool)1, NULL);
		return;
	}

IL_0156:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _WhereAwait_DisposeAsync_m66F424303E309FD41C1BEE288146E1C324349EE6_fshared (_WhereAwait_tD3CAB2F326080E7D38A4AC3043F09218B47712BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		NullCheck((RuntimeObject*)L_0);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(0, IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_m454C42D56825938963F3DB988E157294B260453E_fshared (_WhereAwaitWithCancellation_tA2B26F9529F6CCA2545EAE837313FA1E17E57216* __this, RuntimeObject* ___0_source, Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), (-1));
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0);
		Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639* L_1 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), NULL);
		il2cpp_codegen_write_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_get_Current_m8F2BF4B867EF0393C58FCB222A27C55F2D400249_fshared (_WhereAwaitWithCancellation_tA2B26F9529F6CCA2545EAE837313FA1E17E57216* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8)), SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_m2B51BABEDBF3D2C9E5E364EE5309B112E7D6ED08_fshared (_WhereAwaitWithCancellation_tA2B26F9529F6CCA2545EAE837313FA1E17E57216* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_value : &___0_value), SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_0, SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _WhereAwaitWithCancellation_MoveNextAsync_m3E985FB0C7F6ACA68B5A848DCCD51391CC3F0EF5_fshared (_WhereAwaitWithCancellation_tA2B26F9529F6CCA2545EAE837313FA1E17E57216* __this, const RuntimeMethod* method) 
{
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205));
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_2 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_2, NULL);
		((  void (*) (_WhereAwaitWithCancellation_tA2B26F9529F6CCA2545EAE837313FA1E17E57216*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_3 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_3, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_5), (RuntimeObject*)__this, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_m31D2F630EFACB8B8544AC787E7FAD0AD8415F90D_fshared (_WhereAwaitWithCancellation_tA2B26F9529F6CCA2545EAE837313FA1E17E57216* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_tB30DD741BC2529E237B557516EBAB0CE5853A28B);
	int32_t V_0 = 0;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00eb_1;
				}
			}
		}
		{
			goto IL_0106_1;
		}

IL_0025_1:
		{
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 9), L_2, L_3);
			il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_4);
		}

IL_003c_1:
		{
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_5);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_5);
			V_1 = L_6;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_7;
			L_7 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_1), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_7);
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), NULL);
			if (L_8)
			{
				goto IL_007f_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 1);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), L_9, NULL);
			goto IL_014b;
		}

IL_007f_1:
		{
			bool L_10;
			L_10 = Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00e9_1;
			}
		}
		{
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_12: *(void**)L_12));
			Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639* L_13 = *(Func_3_tFC9D61E4872024B2422FCDAC03CE6A4CB782A639**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, (Il2CppFullySharedGenericAny*)L_14);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_15 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
			NullCheck(L_13);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_16;
			L_16 = InvokerFuncInvoker2< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_14: *(void**)L_14), L_15);
			V_1 = L_16;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_17;
			L_17 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_1), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19), L_17);
			bool L_18;
			L_18 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19)))), NULL);
			if (L_18)
			{
				goto IL_00eb_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 2);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19)))), L_19, NULL);
			goto IL_014b;
		}

IL_00e9_1:
		{
			goto IL_0120;
		}

IL_00eb_1:
		{
			bool L_20;
			L_20 = Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19)))), Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
			if (!L_20)
			{
				goto IL_00fa_1;
			}
		}
		{
			goto IL_0136;
		}

IL_00fa_1:
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
			goto IL_0000;
		}

IL_0106_1:
		{
			goto IL_0120;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0108;
		}
		throw e;
	}

CATCH_0108:
	{
		Exception_t* L_21 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_2 = L_21;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_22 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		Exception_t* L_23 = V_2;
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_014b;
	}

IL_0120:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_25 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_25, (bool)0, NULL);
		return;
	}

IL_0136:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_27 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_27, (bool)1, NULL);
		return;
	}

IL_014b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _WhereAwaitWithCancellation_DisposeAsync_m3CF0CB811BA0799980C767387EFD67E6A3823622_fshared (_WhereAwaitWithCancellation_tA2B26F9529F6CCA2545EAE837313FA1E17E57216* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		NullCheck((RuntimeObject*)L_0);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(0, IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_m299AD525E2808DD42E7E7F1368BB40359093EF15_fshared (_WhereAwaitWithCancellation_tDCC28AA0BF1B923186B24E4F4E619C72B056EC2B* __this, RuntimeObject* ___0_source, Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), (-1));
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0);
		Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0* L_1 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), NULL);
		il2cpp_codegen_write_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_get_Current_mEC25F03AED18C3015B298D8450BFB719699FC11B_fshared (_WhereAwaitWithCancellation_tDCC28AA0BF1B923186B24E4F4E619C72B056EC2B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8)), SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_m035AC286AA222066889620337EF57610B72D3E89_fshared (_WhereAwaitWithCancellation_tDCC28AA0BF1B923186B24E4F4E619C72B056EC2B* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_value : &___0_value), SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),9), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_0, SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _WhereAwaitWithCancellation_MoveNextAsync_m919890CC5C98D981110A30FAE71D049092A2783B_fshared (_WhereAwaitWithCancellation_tDCC28AA0BF1B923186B24E4F4E619C72B056EC2B* __this, const RuntimeMethod* method) 
{
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205));
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_2 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_2, NULL);
		((  void (*) (_WhereAwaitWithCancellation_tDCC28AA0BF1B923186B24E4F4E619C72B056EC2B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_3 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_3, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_5), (RuntimeObject*)__this, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_m43BCB2386DD05FBAB0ED67544EA95C1E74754F16_fshared (_WhereAwaitWithCancellation_tDCC28AA0BF1B923186B24E4F4E619C72B056EC2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_tB55064A5AB075CB4EDA06B91AD19FD628E28E1C4);
	int32_t V_0 = 0;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00fc_1;
				}
			}
		}
		{
			goto IL_0117_1;
		}

IL_0025_1:
		{
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 9), L_2, L_3);
			il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_4);
		}

IL_003c_1:
		{
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_5);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_5);
			V_1 = L_6;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_7;
			L_7 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_1), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_7);
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), NULL);
			if (L_8)
			{
				goto IL_007f_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 1);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), L_9, NULL);
			goto IL_015c;
		}

IL_007f_1:
		{
			bool L_10;
			L_10 = Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)))), Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00fa_1;
			}
		}
		{
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_12: *(void**)L_12));
			Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0* L_13 = *(Func_4_t9539F1656C7A3A08EC9A2991C3EB146604C56CC0**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, (Il2CppFullySharedGenericAny*)L_14);
			int32_t L_15 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 18));
			V_2 = L_15;
			int32_t L_16 = V_2;
			if (((int64_t)L_16 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_16 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 18), ((int32_t)il2cpp_codegen_add(L_16, 1)));
			int32_t L_17 = V_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
			NullCheck(L_13);
			UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_19;
			L_19 = InvokerFuncInvoker3< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_14: *(void**)L_14), L_17, L_18);
			V_1 = L_19;
			Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_20;
			L_20 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_1), NULL);
			il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20), L_20);
			bool L_21;
			L_21 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20)))), NULL);
			if (L_21)
			{
				goto IL_00fc_1;
			}
		}
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 2);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
			Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20)))), L_22, NULL);
			goto IL_015c;
		}

IL_00fa_1:
		{
			goto IL_0131;
		}

IL_00fc_1:
		{
			bool L_23;
			L_23 = Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20)))), Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_RuntimeMethod_var);
			if (!L_23)
			{
				goto IL_010b_1;
			}
		}
		{
			goto IL_0147;
		}

IL_010b_1:
		{
			il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
			goto IL_0000;
		}

IL_0117_1:
		{
			goto IL_0131;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{
		Exception_t* L_24 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_24;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_25 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		Exception_t* L_26 = V_3;
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_015c;
	}

IL_0131:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), ((int32_t)-2));
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_28 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_28, (bool)0, NULL);
		return;
	}

IL_0147:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), 0);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_30 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_30, (bool)1, NULL);
		return;
	}

IL_015c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _WhereAwaitWithCancellation_DisposeAsync_m74BA8E8E4CFA67802EF404C9C687D3D7ABF131B6_fshared (_WhereAwaitWithCancellation_tDCC28AA0BF1B923186B24E4F4E619C72B056EC2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		NullCheck((RuntimeObject*)L_0);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(0, IUniTaskAsyncDisposable_t0F5CD3AD07F85515CBDB8FC62561E9520CDED6E4_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__ctor_m89E24A081A093D95DE0487F0A1A0DC3A4AB3E028_fshared (_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_first;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		RuntimeObject* L_1 = ___1_second;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_1);
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_2 = ___2_resultSelector;
		il2cpp_codegen_write_field_data<Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_get_Current_m0176A9BAAD1AF63EFABD711519922DE4DCD6F130_fshared (_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t84729FAA6B405BEF858398944B7C6B5B838E8BF9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t84729FAA6B405BEF858398944B7C6B5B838E8BF9);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_TResult_t84729FAA6B405BEF858398944B7C6B5B838E8BF9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_t84729FAA6B405BEF858398944B7C6B5B838E8BF9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_set_Current_m7E0EE3E635042F4FC00C57913D594151B3BB4C9D_fshared (_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t84729FAA6B405BEF858398944B7C6B5B838E8BF9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t84729FAA6B405BEF858398944B7C6B5B838E8BF9);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_value : &___0_value), SizeOf_TResult_t84729FAA6B405BEF858398944B7C6B5B838E8BF9);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),10), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_0, SizeOf_TResult_t84729FAA6B405BEF858398944B7C6B5B838E8BF9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _Zip_MoveNextAsync_m4869192B8F8F0FC712C70775BB515ECCA33461BD_fshared (_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(_Zip_t8512F8B3C3ADDAE97610E644EC2254E64040A9B3_StaticInit);
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_0 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_0, NULL);
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_2, L_3);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7), L_4);
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), L_5, L_6);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), L_7);
	}

IL_0041:
	{
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		NullCheck(L_8);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_8);
		V_0 = L_9;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_10;
		L_10 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_0), NULL);
		il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_10);
		bool L_11;
		L_11 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		CHECKED_LOCAL_INIT(_Zip_t8512F8B3C3ADDAE97610E644EC2254E64040A9B3_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))((RuntimeObject*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		goto IL_0080;
	}

IL_006f:
	{
		CHECKED_LOCAL_INIT(_Zip_t8512F8B3C3ADDAE97610E644EC2254E64040A9B3_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_Zip_t8991D0A263D84A4584993FB831352B63E33762E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___firstMoveNextCoreDelegate;
		Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), L_12, (RuntimeObject*)__this, NULL);
	}

IL_0080:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_13 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_13, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_15), (RuntimeObject*)__this, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_FirstMoveNextCore_m9FEF845D42A517F349D899F4531A72B97D9F5769_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(_Zip_t8512F8B3C3ADDAE97610E644EC2254E64040A9B3_StaticInit);
	_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t8991D0A263D84A4584993FB831352B63E33762E9*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_1 = V_0;
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_2 = V_0;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_3 = *(Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_6 = V_0;
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		NullCheck(L_8);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_8);
		V_2 = L_9;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_10;
		L_10 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_2), NULL);
		NullCheck(L_6);
		il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),9), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19), L_10);
		goto IL_0045;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_11;
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_13 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_12)->___completionSource);
		Exception_t* L_14 = V_3;
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}

IL_0045:
	{
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_16 = V_0;
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))), NULL);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_18 = V_0;
		CHECKED_LOCAL_INIT(_Zip_t8512F8B3C3ADDAE97610E644EC2254E64040A9B3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)))((RuntimeObject*)L_18, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		return;
	}

IL_0059:
	{
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_19 = V_0;
		CHECKED_LOCAL_INIT(_Zip_t8512F8B3C3ADDAE97610E644EC2254E64040A9B3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((_Zip_t8991D0A263D84A4584993FB831352B63E33762E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___secondMoveNextCoreDelegate;
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_21 = V_0;
		Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))), L_20, (RuntimeObject*)L_21, NULL);
		return;
	}

IL_006b:
	{
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_22 = V_0;
		NullCheck(L_22);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_23 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_22)->___completionSource);
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_23, (bool)0, NULL);
	}

IL_0078:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_SecondMoveNextCore_m507EF52D3160A51F97712F33CEACF12DDF6BE5B8_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	const uint32_t SizeOf_TFirst_t96A0E4C4EF58B12689154AE65462673A8E320CF6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TFirst_t96A0E4C4EF58B12689154AE65462673A8E320CF6);
	const uint32_t SizeOf_TSecond_tA46A6B645BE3079830C6F350D1D4858615D680CC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSecond_tA46A6B645BE3079830C6F350D1D4858615D680CC);
	const uint32_t SizeOf_TResult_t84729FAA6B405BEF858398944B7C6B5B838E8BF9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TResult_t84729FAA6B405BEF858398944B7C6B5B838E8BF9);
	_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* V_0 = NULL;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t8991D0A263D84A4584993FB831352B63E33762E9*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_1 = V_0;
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_2 = V_0;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_3 = *(Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_6 = V_0;
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_7 = V_0;
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_8 = *(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4**)il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_9 = V_0;
		RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		NullCheck(L_10);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), L_10, (Il2CppFullySharedGenericAny*)L_11);
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_12 = V_0;
		RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		NullCheck(L_13);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_13, (Il2CppFullySharedGenericAny*)L_14);
		NullCheck(L_8);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24)) ? L_14: *(void**)L_14), (Il2CppFullySharedGenericAny*)L_15);
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_15: *(void**)L_15));
		goto IL_0053;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{
		Exception_t* L_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_2 = L_16;
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_17 = V_0;
		NullCheck(L_17);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_18 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_17)->___completionSource);
		Exception_t* L_19 = V_2;
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_18, L_19, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0053;
	}

IL_0053:
	{
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_21 = V_0;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_22;
		L_22 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), NULL);
		if (!L_22)
		{
			goto IL_0073;
		}
	}
	{
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_24 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_23)->___completionSource);
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_25 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_26 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_25, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD17A6E424611D0F6F6DA3ED729A7AD8D16204154(L_24, L_26, NULL);
		return;
	}

IL_0073:
	{
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_29 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_28)->___completionSource);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_29, (bool)1, NULL);
		return;
	}

IL_0081:
	{
		_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* L_31 = V_0;
		NullCheck(L_31);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_32 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_31)->___completionSource);
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_32, (bool)0, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _Zip_DisposeAsync_mF1836A6B8FCF806E79343F83B8A01BA44E50D677_fshared (_Zip_t8991D0A263D84A4584993FB831352B63E33762E9* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__18_tCF8862D72927FC75D4DEB022F37319879F4D9108 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m324C8A6BE1894C6A62807500800069685855F07D_inline(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runnerPromise), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___ex), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273* L_1 = (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273*, U3CDisposeAsyncU3Ed__18_tCF8862D72927FC75D4DEB022F37319879F4D9108*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)))(L_1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273* L_2 = (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273*)(&(&V_0)->___U3CU3Et__builder);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m93C7C005E5201982C092999F774A09A84883B43B_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__cctor_mE31FE3A6C3B22140F5DA77F10A9D45E0029D8AB2_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)), NULL);
		((_Zip_t8991D0A263D84A4584993FB831352B63E33762E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___firstMoveNextCoreDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t8991D0A263D84A4584993FB831352B63E33762E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___firstMoveNextCoreDelegate), (void*)L_0);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)), NULL);
		((_Zip_t8991D0A263D84A4584993FB831352B63E33762E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___secondMoveNextCoreDelegate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t8991D0A263D84A4584993FB831352B63E33762E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___secondMoveNextCoreDelegate), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__ctor_m01A421FA68AE682947F78B4D056E4428A9C32D1B_fshared (_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_t9930F2FFFB3CB451E7392AD05C05AFE07BB79723* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_first;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		RuntimeObject* L_1 = ___1_second;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_1);
		Func_3_t9930F2FFFB3CB451E7392AD05C05AFE07BB79723* L_2 = ___2_resultSelector;
		il2cpp_codegen_write_field_data<Func_3_t9930F2FFFB3CB451E7392AD05C05AFE07BB79723*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_get_Current_mB58253B8311C5120869204A9A5ADDE580B0BC37A_fshared (_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_set_Current_m1DFF540250722B9D19882697EB43B8C234F2551B_fshared (_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_value : &___0_value), SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),12), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_0, SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _ZipAwait_MoveNextAsync_m0248242554245CC74E750D96049AADA89E9A658E_fshared (_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(_ZipAwait_t3744F2675A37FBD4337F4F2DD096C023189AC0DA_StaticInit);
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_0 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_0, NULL);
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_2, L_3);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7), L_4);
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), L_5, L_6);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), L_7);
	}

IL_0041:
	{
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		NullCheck(L_8);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_8);
		V_0 = L_9;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_10;
		L_10 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_0), NULL);
		il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),9), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_10);
		bool L_11;
		L_11 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		CHECKED_LOCAL_INIT(_ZipAwait_t3744F2675A37FBD4337F4F2DD096C023189AC0DA_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))((RuntimeObject*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		goto IL_0080;
	}

IL_006f:
	{
		CHECKED_LOCAL_INIT(_ZipAwait_t3744F2675A37FBD4337F4F2DD096C023189AC0DA_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___firstMoveNextCoreDelegate;
		Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), L_12, (RuntimeObject*)__this, NULL);
	}

IL_0080:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_13 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_13, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_15), (RuntimeObject*)__this, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_FirstMoveNextCore_mE5EC973B0BE79E6532F1A66565FAE958B709FD84_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(_ZipAwait_t3744F2675A37FBD4337F4F2DD096C023189AC0DA_StaticInit);
	_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_1 = V_0;
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_2 = V_0;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_3 = *(Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_6 = V_0;
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		NullCheck(L_8);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_8);
		V_2 = L_9;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_10;
		L_10 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_2), NULL);
		NullCheck(L_6);
		il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),10), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19), L_10);
		goto IL_0045;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_11;
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_13 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_12)->___completionSource);
		Exception_t* L_14 = V_3;
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}

IL_0045:
	{
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_16 = V_0;
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))), NULL);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_18 = V_0;
		CHECKED_LOCAL_INIT(_ZipAwait_t3744F2675A37FBD4337F4F2DD096C023189AC0DA_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)))((RuntimeObject*)L_18, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		return;
	}

IL_0059:
	{
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_19 = V_0;
		CHECKED_LOCAL_INIT(_ZipAwait_t3744F2675A37FBD4337F4F2DD096C023189AC0DA_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___secondMoveNextCoreDelegate;
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_21 = V_0;
		Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))), L_20, (RuntimeObject*)L_21, NULL);
		return;
	}

IL_006b:
	{
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_22 = V_0;
		NullCheck(L_22);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_23 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_22)->___completionSource);
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_23, (bool)0, NULL);
	}

IL_0078:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_SecondMoveNextCore_mF041E6060A6944A9AB2FC0899748859C2FD21363_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_UniTask_1_t50574518462C131CFE595FF166B836EFA19FDC99 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26));
	const uint32_t SizeOf_Awaiter_tCAF3D8AFF8BD50C0632AAAA015D22ED4FE45F6E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28));
	CHECKED_LOCAL(_ZipAwait_t3744F2675A37FBD4337F4F2DD096C023189AC0DA_StaticInit);
	const uint32_t SizeOf_TFirst_t395D818D0CA6FE459FD8C59B15748DF4B9229B97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TFirst_t395D818D0CA6FE459FD8C59B15748DF4B9229B97);
	const uint32_t SizeOf_TSecond_t6181E8B3F6669933CEBE506EBB26B8E28389408F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSecond_t6181E8B3F6669933CEBE506EBB26B8E28389408F);
	const Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7 L_16 = alloca(SizeOf_Awaiter_tCAF3D8AFF8BD50C0632AAAA015D22ED4FE45F6E3);
	const UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067 L_15 = alloca(SizeOf_UniTask_1_t50574518462C131CFE595FF166B836EFA19FDC99);
	_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067 V_2 = alloca(SizeOf_UniTask_1_t50574518462C131CFE595FF166B836EFA19FDC99);
	memset(V_2, 0, SizeOf_UniTask_1_t50574518462C131CFE595FF166B836EFA19FDC99);
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_1 = V_0;
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_2 = V_0;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_3 = *(Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{
		{
			_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_6 = V_0;
			_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_7 = V_0;
			Func_3_t9930F2FFFB3CB451E7392AD05C05AFE07BB79723* L_8 = *(Func_3_t9930F2FFFB3CB451E7392AD05C05AFE07BB79723**)il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
			_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_9 = V_0;
			RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
			NullCheck(L_10);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), L_10, (Il2CppFullySharedGenericAny*)L_11);
			_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_12 = V_0;
			RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
			NullCheck(L_13);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_13, (Il2CppFullySharedGenericAny*)L_14);
			NullCheck(L_8);
			InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24)) ? L_14: *(void**)L_14), (UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067*)L_15);
			il2cpp_codegen_memcpy(V_2, L_15, SizeOf_UniTask_1_t50574518462C131CFE595FF166B836EFA19FDC99);
			InvokerActionInvoker1< Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27), (UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067*)V_2, (Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7*)L_16);
			NullCheck(L_6);
			il2cpp_codegen_write_field_data<true>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),11), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29), L_16, SizeOf_Awaiter_tCAF3D8AFF8BD50C0632AAAA015D22ED4FE45F6E3);
			_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_17 = V_0;
			bool L_18;
			L_18 = ((  bool (*) (Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 30)))((((Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7*)il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 30));
			if (!L_18)
			{
				goto IL_005e_1;
			}
		}
		{
			_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_19 = V_0;
			CHECKED_LOCAL_INIT(_ZipAwait_t3744F2675A37FBD4337F4F2DD096C023189AC0DA_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 31)))((RuntimeObject*)L_19, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 31));
			goto IL_006f_1;
		}

IL_005e_1:
		{
			_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_20 = V_0;
			CHECKED_LOCAL_INIT(_ZipAwait_t3744F2675A37FBD4337F4F2DD096C023189AC0DA_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = ((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___resultAwaitCoreDelegate;
			_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_22 = V_0;
			((  void (*) (Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 32)))((((Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7*)il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29)))), L_21, (RuntimeObject*)L_22, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 32));
		}

IL_006f_1:
		{
			goto IL_008e;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{
		Exception_t* L_23 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_23;
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_24 = V_0;
		NullCheck(L_24);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_25 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_24)->___completionSource);
		Exception_t* L_26 = V_3;
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_008e;
	}

IL_0081:
	{
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_29 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_28)->___completionSource);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_29, (bool)0, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_ResultAwaitCore_m829729A3091CA234D28A8589443F3E8670E936F3_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_Awaiter_tCAF3D8AFF8BD50C0632AAAA015D22ED4FE45F6E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28));
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483);
	const Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7 L_3 = alloca(SizeOf_Awaiter_tCAF3D8AFF8BD50C0632AAAA015D22ED4FE45F6E3);
	_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483);
	memset(V_1, 0, SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483);
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_1 = V_0;
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_2 = V_0;
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29)), SizeOf_Awaiter_tCAF3D8AFF8BD50C0632AAAA015D22ED4FE45F6E3);
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33), (MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (Il2CppFullySharedGenericAny*)V_1);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_TResult_t68828F880D7721D91D700E4F39F1076E5446A483);
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 34)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 34), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_6: *(void**)L_6));
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_7 = V_0;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_8;
		L_8 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_9 = V_0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_10 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_9)->___completionSource);
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_11 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		bool L_13;
		L_13 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD17A6E424611D0F6F6DA3ED729A7AD8D16204154(L_10, L_12, NULL);
		return;
	}

IL_003e:
	{
		_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* L_14 = V_0;
		NullCheck(L_14);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_15 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_14)->___completionSource);
		bool L_16;
		L_16 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_15, (bool)1, NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _ZipAwait_DisposeAsync_m169E84AD018D039BFE5706370911182CF3DA4151_fshared (_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_tD178882977E1E5ACA7D65F755B891EF1F9D634FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m324C8A6BE1894C6A62807500800069685855F07D_inline(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runnerPromise), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___ex), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273* L_1 = (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273*, U3CDisposeAsyncU3Ed__21_tD178882977E1E5ACA7D65F755B891EF1F9D634FC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35)))(L_1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273* L_2 = (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273*)(&(&V_0)->___U3CU3Et__builder);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m93C7C005E5201982C092999F774A09A84883B43B_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__cctor_m02197C07F4D606B265B665AAC27766F613849FEB_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)), NULL);
		((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___firstMoveNextCoreDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___firstMoveNextCoreDelegate), (void*)L_0);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)), NULL);
		((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___secondMoveNextCoreDelegate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___secondMoveNextCoreDelegate), (void*)L_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 31)), NULL);
		((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___resultAwaitCoreDelegate = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t470F7E0F68E4B67D500F58388BCCC3A621895C34_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___resultAwaitCoreDelegate), (void*)L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__ctor_m65DC96AAE5BB7BCAD2E93862902AC66D482E43B4_fshared (_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_4_t27B1485FB065AE0CDDDC47B88CEC84C84FA4CD4D* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		MoveNextSource__ctor_m17889313D5B723796DEFECCE65E971694E512D4D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this, NULL);
		RuntimeObject* L_0 = ___0_first;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		RuntimeObject* L_1 = ___1_second;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_1);
		Func_4_t27B1485FB065AE0CDDDC47B88CEC84C84FA4CD4D* L_2 = ___2_resultSelector;
		il2cpp_codegen_write_field_data<Func_4_t27B1485FB065AE0CDDDC47B88CEC84C84FA4CD4D*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_2);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		il2cpp_codegen_write_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_get_Current_m6909C0DF9BD7E5695EE0700A1799797274AFCDD4_fshared (_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_set_Current_m416FF713E6C7508D31989C22FA4B9233FC7742EF_fshared (_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_value : &___0_value), SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),12), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_0, SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 _ZipAwaitWithCancellation_MoveNextAsync_m1F5CE72C9F8AF2B1E3BA62267D662FCC3F321C4E_fshared (_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(_ZipAwaitWithCancellation_tCB22A4AFA8D68724F5ED2CF3317D39713FD29650_StaticInit);
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_0 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m3828AB335BF772D42D73C416944A3CE59DAA05AC(L_0, NULL);
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_2, L_3);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7), L_4);
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), L_5, L_6);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), L_7);
	}

IL_0041:
	{
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		NullCheck(L_8);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_8);
		V_0 = L_9;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_10;
		L_10 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_0), NULL);
		il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),9), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_10);
		bool L_11;
		L_11 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		CHECKED_LOCAL_INIT(_ZipAwaitWithCancellation_tCB22A4AFA8D68724F5ED2CF3317D39713FD29650_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))((RuntimeObject*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		goto IL_0080;
	}

IL_006f:
	{
		CHECKED_LOCAL_INIT(_ZipAwaitWithCancellation_tCB22A4AFA8D68724F5ED2CF3317D39713FD29650_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___firstMoveNextCoreDelegate;
		Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), L_12, (RuntimeObject*)__this, NULL);
	}

IL_0080:
	{
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_13 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)__this)->___completionSource);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline(L_13, NULL);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline((&L_15), (RuntimeObject*)__this, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_FirstMoveNextCore_mE0574336DD2980E752816A0A67F35E9CE858577A_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(_ZipAwaitWithCancellation_tCB22A4AFA8D68724F5ED2CF3317D39713FD29650_StaticInit);
	_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_1 = V_0;
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_2 = V_0;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_3 = *(Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_6 = V_0;
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		NullCheck(L_8);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_8);
		V_2 = L_9;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_10;
		L_10 = UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline((&V_2), NULL);
		NullCheck(L_6);
		il2cpp_codegen_write_field_data<Awaiter_tCE9684D04AC81E8992F681675221207032735831, true>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),10), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19), L_10);
		goto IL_0045;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_11;
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_13 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_12)->___completionSource);
		Exception_t* L_14 = V_3;
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}

IL_0045:
	{
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_16 = V_0;
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))), NULL);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_18 = V_0;
		CHECKED_LOCAL_INIT(_ZipAwaitWithCancellation_tCB22A4AFA8D68724F5ED2CF3317D39713FD29650_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)))((RuntimeObject*)L_18, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		return;
	}

IL_0059:
	{
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_19 = V_0;
		CHECKED_LOCAL_INIT(_ZipAwaitWithCancellation_tCB22A4AFA8D68724F5ED2CF3317D39713FD29650_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___secondMoveNextCoreDelegate;
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_21 = V_0;
		Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline((((Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))), L_20, (RuntimeObject*)L_21, NULL);
		return;
	}

IL_006b:
	{
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_22 = V_0;
		NullCheck(L_22);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_23 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_22)->___completionSource);
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_23, (bool)0, NULL);
	}

IL_0078:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_SecondMoveNextCore_m3452C252719FE70FCA713634AA2302C58F9AA7B4_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_UniTask_1_tF423A465A0CCD8DE2D941A1B59DBB55F91B9DC95 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26));
	const uint32_t SizeOf_Awaiter_tA72383A42A830C1A5D6252DDB8DE2881719655D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28));
	CHECKED_LOCAL(_ZipAwaitWithCancellation_tCB22A4AFA8D68724F5ED2CF3317D39713FD29650_StaticInit);
	const uint32_t SizeOf_TFirst_tC9AC7207C719C7EF151152A269CDB408A9030E89 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TFirst_tC9AC7207C719C7EF151152A269CDB408A9030E89);
	const uint32_t SizeOf_TSecond_t2BE905806000A926CB23784BEE3301BD11684BA7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSecond_t2BE905806000A926CB23784BEE3301BD11684BA7);
	const Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7 L_18 = alloca(SizeOf_Awaiter_tA72383A42A830C1A5D6252DDB8DE2881719655D4);
	const UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067 L_17 = alloca(SizeOf_UniTask_1_tF423A465A0CCD8DE2D941A1B59DBB55F91B9DC95);
	_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067 V_2 = alloca(SizeOf_UniTask_1_tF423A465A0CCD8DE2D941A1B59DBB55F91B9DC95);
	memset(V_2, 0, SizeOf_UniTask_1_tF423A465A0CCD8DE2D941A1B59DBB55F91B9DC95);
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_1 = V_0;
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_2 = V_0;
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_3 = *(Awaiter_tCE9684D04AC81E8992F681675221207032735831*)il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAEFDA01B643E6740D4A2010839DAD681A669225D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0094;
		}
	}
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	try
	{
		{
			_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_6 = V_0;
			_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_7 = V_0;
			Func_4_t27B1485FB065AE0CDDDC47B88CEC84C84FA4CD4D* L_8 = *(Func_4_t27B1485FB065AE0CDDDC47B88CEC84C84FA4CD4D**)il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
			_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_9 = V_0;
			RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
			NullCheck(L_10);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), L_10, (Il2CppFullySharedGenericAny*)L_11);
			_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_12 = V_0;
			RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
			NullCheck(L_13);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_13, (Il2CppFullySharedGenericAny*)L_14);
			_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_15 = V_0;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_15, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
			NullCheck(L_8);
			InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24)) ? L_14: *(void**)L_14), L_16, (UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067*)L_17);
			il2cpp_codegen_memcpy(V_2, L_17, SizeOf_UniTask_1_tF423A465A0CCD8DE2D941A1B59DBB55F91B9DC95);
			InvokerActionInvoker1< Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27), (UniTask_1_tE4EB27ACCDF4BBD794D1A4560FCD6F88AE7FE067*)V_2, (Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7*)L_18);
			NullCheck(L_6);
			il2cpp_codegen_write_field_data<true>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),11), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29), L_18, SizeOf_Awaiter_tA72383A42A830C1A5D6252DDB8DE2881719655D4);
			_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_19 = V_0;
			bool L_20;
			L_20 = ((  bool (*) (Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 30)))((((Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7*)il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 30));
			if (!L_20)
			{
				goto IL_0064_1;
			}
		}
		{
			_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_21 = V_0;
			CHECKED_LOCAL_INIT(_ZipAwaitWithCancellation_tCB22A4AFA8D68724F5ED2CF3317D39713FD29650_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 31)))((RuntimeObject*)L_21, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 31));
			goto IL_0075_1;
		}

IL_0064_1:
		{
			_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_22 = V_0;
			CHECKED_LOCAL_INIT(_ZipAwaitWithCancellation_tCB22A4AFA8D68724F5ED2CF3317D39713FD29650_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = ((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___resultAwaitCoreDelegate;
			_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_24 = V_0;
			((  void (*) (Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 32)))((((Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7*)il2cpp_codegen_get_field_data_pointer(L_22, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29)))), L_23, (RuntimeObject*)L_24, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 32));
		}

IL_0075_1:
		{
			goto IL_0094;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{
		Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_25;
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_26 = V_0;
		NullCheck(L_26);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_27 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_26)->___completionSource);
		Exception_t* L_28 = V_3;
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetException_m22781E27B81541F7017798949DA91260C4BEA8A0(L_27, L_28, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0094;
	}

IL_0087:
	{
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_30 = V_0;
		NullCheck(L_30);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_31 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_30)->___completionSource);
		bool L_32;
		L_32 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_31, (bool)0, NULL);
	}

IL_0094:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_ResultAwaitCore_m60714CD5C4C627828CA07AE5F5B6706D5FFF002C_fshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_Awaiter_tA72383A42A830C1A5D6252DDB8DE2881719655D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28));
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC);
	const Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7 L_3 = alloca(SizeOf_Awaiter_tA72383A42A830C1A5D6252DDB8DE2881719655D4);
	_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC);
	memset(V_1, 0, SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC);
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_1 = V_0;
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_2 = V_0;
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29)), SizeOf_Awaiter_tA72383A42A830C1A5D6252DDB8DE2881719655D4);
		NullCheck((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Awaiter_t6CDCBFD49E6D10BEE116F37110B013BDA663FAF7, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33), (MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_1, L_3, (Il2CppFullySharedGenericAny*)V_1);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_TResult_t19A490ABBDEA79A9CAD82D33037D556EF5E9BDBC);
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 34)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 34), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_6: *(void**)L_6));
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_7 = V_0;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_8;
		L_8 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_9 = V_0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_10 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_9)->___completionSource);
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_11 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		bool L_13;
		L_13 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD17A6E424611D0F6F6DA3ED729A7AD8D16204154(L_10, L_12, NULL);
		return;
	}

IL_003e:
	{
		_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* L_14 = V_0;
		NullCheck(L_14);
		UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* L_15 = (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F*)(&((MoveNextSource_t868849EBBDB023DB4C2600417EDB2F8419BD9814*)L_14)->___completionSource);
		bool L_16;
		L_16 = UniTaskCompletionSourceCore_1_TrySetResult_m9682466CDCC1CB6467DAC01114C657F1C13B3BC7(L_15, (bool)1, NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 _ZipAwaitWithCancellation_DisposeAsync_m3EC7B868D3BAAB592FA9F83F40FA0ED9D8E025BD_fshared (_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_tEDA417745710B502271AC8642E84D5EA6F753DA5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m324C8A6BE1894C6A62807500800069685855F07D_inline(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runnerPromise), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___ex), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273* L_1 = (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273*, U3CDisposeAsyncU3Ed__21_tEDA417745710B502271AC8642E84D5EA6F753DA5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35)))(L_1, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273* L_2 = (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273*)(&(&V_0)->___U3CU3Et__builder);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m93C7C005E5201982C092999F774A09A84883B43B_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__cctor_mEE6F46FAF98E49779E863BB72600AC632A19EF5A_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)), NULL);
		((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___firstMoveNextCoreDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___firstMoveNextCoreDelegate), (void*)L_0);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)), NULL);
		((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___secondMoveNextCoreDelegate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___secondMoveNextCoreDelegate), (void*)L_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 31)), NULL);
		((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___resultAwaitCoreDelegate = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tA8B98A6CFA2DBC726D34237036AB25FB5043FE0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___resultAwaitCoreDelegate), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704 AsyncUniTaskVoidMethodBuilder_Create_mB2F6F1ADF85712767A7A8D9DBD76E46CCB28D638_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704));
		AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD AsyncUniTaskVoidMethodBuilder_get_Task_mB71C82F7E32102835B3338AB8C21BFF03DF91E0D_inline (AsyncUniTaskVoidMethodBuilder_t090756A73DE552A7EED99773DBFD434605C0D704* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD));
		UniTaskVoid_tDADB411EDBFAFACD7A7D63B31749A57F516938CD L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 AsyncUniTaskMethodBuilder_Create_m324C8A6BE1894C6A62807500800069685855F07D_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273));
		AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 AsyncUniTaskMethodBuilder_get_Task_m93C7C005E5201982C092999F774A09A84883B43B_inline (AsyncUniTaskMethodBuilder_t9E3432601FA51962BC4873049540B21DE1B71273* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t71E56C676447ACF93D0CBAF9739B2CFD5769775E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit);
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runnerPromise;
		NullCheck(L_1);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 >::Invoke(1, IStateMachineRunnerPromise_t71E56C676447ACF93D0CBAF9739B2CFD5769775E_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		Exception_t* L_3 = __this->___ex;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Exception_t* L_4 = __this->___ex;
		CHECKED_LOCAL_INIT(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit,(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_5;
		L_5 = UniTask_FromException_mE8608F2EFD343EB4BBAC701C87B66415D866B7EA(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		CHECKED_LOCAL_INIT(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit,(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589 L_6 = ((UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var))->___CompletedTask;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m30EF31961853E8FD214F046B3B325DCEE798F612_inline (UniTaskCompletionSourceCore_1_t4C51E1370CFC32BB4F21C5211C53CE39C43DDB2F* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___version;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mF6AF93E8134ACD353668CAD5EB803885D0052FD3_inline (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		int16_t L_1 = ___1_token;
		__this->___token = L_1;
		bool* L_2 = (bool*)(&__this->___result);
		il2cpp_codegen_initobj(L_2, sizeof(bool));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tCE9684D04AC81E8992F681675221207032735831 UniTask_1_GetAwaiter_m50E09A742701E476DF29A2DD81141CE8CAD37723_inline (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* __this, const RuntimeMethod* method) 
{
	{
		Awaiter_tCE9684D04AC81E8992F681675221207032735831 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mEAE8436CA24B4E874C3947695C299A0B1A810406_inline((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mD7269C4D0FA4A49FB9BAE44F20D99F0556A5FDFD_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, const RuntimeMethod* method) 
{
	{
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* L_0 = (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m2A0A2AFA1E8B66EAC7F41189C1D65E156E9F750F_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m2EC66A0B90EB85539E91138C71D4E5C9FDB97638_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m0A23952BACB03F87301440D267C49C2DE0B27090_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t9DF4D499CAE21B0D156421AAED7BE953DFBAEBF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* L_0 = (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205*)(&__this->___task);
		RuntimeObject* L_1 = L_0->___source;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_continuation;
		RuntimeObject* L_4 = ___1_state;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___0_continuation;
		RuntimeObject* L_7 = ___1_state;
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* L_8 = (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205*)(&__this->___task);
		int16_t L_9 = L_8->___token;
		NullCheck(L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1, IUniTaskSource_t9DF4D499CAE21B0D156421AAED7BE953DFBAEBF6_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_9);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679 AsyncUniTaskMethodBuilder_1_Create_m34FF5CC73E1088E8447AA68B32ACC3887D3EDBF8_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679));
		AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 AsyncUniTaskMethodBuilder_1_get_Task_mA9B74FF59B2822518F2D0C381A6BD04C6B472F6F_inline (AsyncUniTaskMethodBuilder_1_t126DBADD192A4FAD5E2668FB2EF09DDC1A820679* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit);
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runnerPromise;
		NullCheck(L_1);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 >::Invoke(1, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_1);
		return L_2;
	}

IL_0014:
	{
		Exception_t* L_3 = __this->___ex;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Exception_t* L_4 = __this->___ex;
		CHECKED_LOCAL_INIT(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit,(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_5;
		L_5 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE830BC980393495754803D88090BE86D95310FF7(L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return L_5;
	}

IL_0028:
	{
		bool L_6 = __this->___result;
		CHECKED_LOCAL_INIT(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_StaticInit,(UniTask_tF23B700E268AB52DCD7068A7B7031586E5C3E589_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_7;
		L_7 = UniTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAF939D3C24635846F74464790880E534204F7CE6(L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mA7DEC2D3FF53D351F4A7AC7FACFD64D939831170_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_tACF0A72C0170990C8406D83DA0BE868D543FD7B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t9DF4D499CAE21B0D156421AAED7BE953DFBAEBF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AwaiterActions_tACF0A72C0170990C8406D83DA0BE868D543FD7B2_StaticInit);
	RuntimeObject* V_0 = NULL;
	{
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* L_0 = (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205*)(&__this->___task);
		RuntimeObject* L_1 = L_0->___source;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_continuation;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		return;
	}

IL_0016:
	{
		RuntimeObject* L_4 = V_0;
		CHECKED_LOCAL_INIT(AwaiterActions_tACF0A72C0170990C8406D83DA0BE868D543FD7B2_StaticInit,(AwaiterActions_tACF0A72C0170990C8406D83DA0BE868D543FD7B2_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_tACF0A72C0170990C8406D83DA0BE868D543FD7B2_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_tACF0A72C0170990C8406D83DA0BE868D543FD7B2_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_continuation;
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* L_7 = (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1, IUniTaskSource_t9DF4D499CAE21B0D156421AAED7BE953DFBAEBF6_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m2AEC747B82BB38A0B536F17764A3F4F8493C7428_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	RuntimeObject* V_0 = NULL;
	{
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* L_0 = (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205*)(&__this->___task);
		RuntimeObject* L_1 = L_0->___source;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* L_3 = (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205*)(&__this->___task);
		bool L_4 = L_3->___result;
		return L_4;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* L_6 = (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205*)(&__this->___task);
		int16_t L_7 = L_6->___token;
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m2EC66A0B90EB85539E91138C71D4E5C9FDB97638_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_status;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mEAE8436CA24B4E874C3947695C299A0B1A810406_inline (Awaiter_tCE9684D04AC81E8992F681675221207032735831* __this, UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* L_0 = ___0_task;
		UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205 L_1 = (*(UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m2A0A2AFA1E8B66EAC7F41189C1D65E156E9F750F_inline (UniTask_1_tE7DA0AB5B4BE20AF11366FA0336CA7BAD2AFE205* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t9DF4D499CAE21B0D156421AAED7BE953DFBAEBF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___source;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___source;
		int16_t L_2 = __this->___token;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t9DF4D499CAE21B0D156421AAED7BE953DFBAEBF6_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
