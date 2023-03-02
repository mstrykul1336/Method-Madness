#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// InventoryList`1<System.Object>
struct InventoryList_1_t995EB216DE8A7372C1307AF1338E632A498AB4E5;
// InventoryList`1<System.String>
struct InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// BaseManager
struct BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F;
// BulletBehavior
struct BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87;
// CameraBehavior
struct CameraBehavior_t7F1E8CF807060E73AD4984151E22E62E59CCB71A;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// CombatManager
struct CombatManager_t3332B4EDCE263CC54B4CC4D7761979B4458294C0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EnemyBehavior
struct EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE;
// GameBehavior
struct GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ItemBehavior
struct ItemBehavior_t07C6753350A6C6277B9DF6D5621CE744FABB9551;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerBehavior
struct PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GameBehavior/DebugDelegate
struct DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297;
// PlayerBehavior/JumpingEvent
struct JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utilities_t6F35AFE0F28F4AF967399B21FCB76780ED3D6BFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1538AA1C49A4854FF017DBE0C5C024503F69DE5B;
IL2CPP_EXTERN_C String_t* _stringLiteral1A1A84804DC817CFB4397EE3E81794D9AD4F2BB7;
IL2CPP_EXTERN_C String_t* _stringLiteral22BD4547A25F5FA044193662E354132CCC77846C;
IL2CPP_EXTERN_C String_t* _stringLiteral22D1A3C77269C2465D7C2ABD73474D4AB206E1DF;
IL2CPP_EXTERN_C String_t* _stringLiteral25B58FD2EB27C078911F873CDDE5677CDA486DDE;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3126C6C620C15DE71683F76B2A9DB2EAC56BD058;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral343CD6451A42B2A55299F602955727A0E2D38009;
IL2CPP_EXTERN_C String_t* _stringLiteral378E759A8B419C5129FF13EBEF802DD6BD7875FF;
IL2CPP_EXTERN_C String_t* _stringLiteral3EFCC23B167CD29EDD1D6179E316F84D59768C6F;
IL2CPP_EXTERN_C String_t* _stringLiteral465E631BC55CF1D5DF1B80FEED712BA54C3EB7AA;
IL2CPP_EXTERN_C String_t* _stringLiteral48934E2895EFFAC09FCD7186A450668D15C0290A;
IL2CPP_EXTERN_C String_t* _stringLiteral4C3DD14CBB67E593972F44E6D6363A05B5B8C413;
IL2CPP_EXTERN_C String_t* _stringLiteral4CED2EAAAFC2C79CF1ACB040EEF106FE2EE85ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral55667D0C330A889B717DF3CA2C9819178140A3C3;
IL2CPP_EXTERN_C String_t* _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347;
IL2CPP_EXTERN_C String_t* _stringLiteral612C3797426144C3C776DE00617309EF6A458B06;
IL2CPP_EXTERN_C String_t* _stringLiteral646D8EF72137D595694FFB21D59EAA7D6C94F9BC;
IL2CPP_EXTERN_C String_t* _stringLiteral6DD560B73AEA30744F929408DBD07D8411B5EC0F;
IL2CPP_EXTERN_C String_t* _stringLiteral7365E0A7C502911E3EE2835C2A4F56078569F0E7;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral83D6C87D397393C7032AC43005A27FBD138DAF73;
IL2CPP_EXTERN_C String_t* _stringLiteral940B832BE00C3B5F2CEDEC974A58E0D20BFCD53D;
IL2CPP_EXTERN_C String_t* _stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211;
IL2CPP_EXTERN_C String_t* _stringLiteral9ADDF523920E577C2A776FF45A47756280833D7E;
IL2CPP_EXTERN_C String_t* _stringLiteral9C08E023F299C476DED71317B049730730F21069;
IL2CPP_EXTERN_C String_t* _stringLiteralA7739AFA71B0B123FF70FE33491ACD39139BE4FB;
IL2CPP_EXTERN_C String_t* _stringLiteralB2518B94FDE56C6FBB7C101FA53DA66826CB2CC5;
IL2CPP_EXTERN_C String_t* _stringLiteralB91E2FF1270D3160CCEECFF2792BC01E63D58DBF;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCC4837E60441F51CBB2843549AAA4AC11B35060B;
IL2CPP_EXTERN_C String_t* _stringLiteralD593D31F7249D6C0EEDCBBF3666B780EEA795922;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A5A946AFEC4CED4A3A49EE49E1C17CE078F1A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD95A731316FA426ADF4B4B6C18C2785FB2259CA2;
IL2CPP_EXTERN_C String_t* _stringLiteralEA4B3353A4BF3ABED942C969E04B79B51A4E7291;
IL2CPP_EXTERN_C String_t* _stringLiteralEB18DED07229E846E4E14B0A4F35AAB7F850BB0E;
IL2CPP_EXTERN_C String_t* _stringLiteralF4F8DF13FC4C257B9378767D71EEA6BCDA529424;
IL2CPP_EXTERN_C String_t* _stringLiteralFF300C8E27EB6E69DA2844D6721CAB28DB911A18;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameBehavior_HandlePlayerJump_mF011941462858FFF4A54F8A47DBBD33DB881E663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameBehavior_Print_m6D58DD9FED8D86AE08BD715D4B9C988B720671D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B_m143AFF9EA92E2C6ACC9BC6EC9C12320CC414CEB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2_mF66968AA9F0D5BAC023D76A38C8CDD365C08AF64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InventoryList_1_SetItem_m90A446B1A521F8C8D75748A958E89C0D69135AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InventoryList_1__ctor_m4B80817DEE77E0526BDFE77C4D57C0A08C30E942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InventoryList_1_get_item_m7B6C11A9E7DA96E0486BC9BBDBF603A9B7B55811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_mFF24B5E473E44039922E627D183415E5A6FD3ADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mFE7E2A46CC49662C0B06E3F80D39FA8986EE690D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m335E848ED0B875E3163CBDF6F077EF89DE99D59E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_RestartLevel_mEE46600A55232BF4B84F40C32B5807C4E307CA2C_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// InventoryList`1<System.Object>
struct InventoryList_1_t995EB216DE8A7372C1307AF1338E632A498AB4E5  : public RuntimeObject
{
	// T InventoryList`1::_item
	RuntimeObject* ____item_0;
};

// InventoryList`1<System.String>
struct InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742  : public RuntimeObject
{
	// T InventoryList`1::_item
	String_t* ____item_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// BaseManager
struct BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F  : public RuntimeObject
{
	// System.String BaseManager::_state
	String_t* ____state_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// CustomExtensions.StringExtensions
struct StringExtensions_tF3F66EB8AE2B90C43062E65D272E454691756A61  : public RuntimeObject
{
};

// Utilities
struct Utilities_t6F35AFE0F28F4AF967399B21FCB76780ED3D6BFB  : public RuntimeObject
{
};

struct Utilities_t6F35AFE0F28F4AF967399B21FCB76780ED3D6BFB_StaticFields
{
	// System.Int32 Utilities::playerDeaths
	int32_t ___playerDeaths_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// CombatManager
struct CombatManager_t3332B4EDCE263CC54B4CC4D7761979B4458294C0  : public BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GameBehavior/DebugDelegate
struct DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297  : public MulticastDelegate_t
{
};

// PlayerBehavior/JumpingEvent
struct JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1  : public MulticastDelegate_t
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BulletBehavior
struct BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BulletBehavior::onscreenDelay
	float ___onscreenDelay_4;
};

// CameraBehavior
struct CameraBehavior_t7F1E8CF807060E73AD4984151E22E62E59CCB71A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 CameraBehavior::camOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___camOffset_4;
	// UnityEngine.Transform CameraBehavior::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_5;
};

// EnemyBehavior
struct EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform EnemyBehavior::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// UnityEngine.Transform EnemyBehavior::partrolRoute
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___partrolRoute_5;
	// System.Int32 EnemyBehavior::locationIndex
	int32_t ___locationIndex_6;
	// System.Collections.Generic.List`1<UnityEngine.Transform> EnemyBehavior::locations
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___locations_7;
	// UnityEngine.AI.NavMeshAgent EnemyBehavior::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_8;
	// System.Int32 EnemyBehavior::_lives
	int32_t ____lives_9;
};

// GameBehavior
struct GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameBehavior::_itemsCollected
	int32_t ____itemsCollected_4;
	// System.String GameBehavior::labelText
	String_t* ___labelText_5;
	// System.Int32 GameBehavior::maxItems
	int32_t ___maxItems_6;
	// System.Boolean GameBehavior::showWinScreen
	bool ___showWinScreen_7;
	// System.Boolean GameBehavior::showLossScreen
	bool ___showLossScreen_8;
	// System.String GameBehavior::_state
	String_t* ____state_9;
	// System.Collections.Generic.Stack`1<System.String> GameBehavior::lootStack
	Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* ___lootStack_10;
	// GameBehavior/DebugDelegate GameBehavior::debug
	DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* ___debug_11;
	// System.Int32 GameBehavior::_playerHP
	int32_t ____playerHP_12;
};

// ItemBehavior
struct ItemBehavior_t07C6753350A6C6277B9DF6D5621CE744FABB9551  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameBehavior ItemBehavior::gameManager
	GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* ___gameManager_4;
};

// PlayerBehavior
struct PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerBehavior::moveSpeed
	float ___moveSpeed_4;
	// System.Single PlayerBehavior::rotateSpeed
	float ___rotateSpeed_5;
	// System.Single PlayerBehavior::jumpVelocity
	float ___jumpVelocity_6;
	// System.Single PlayerBehavior::vInput
	float ___vInput_7;
	// System.Single PlayerBehavior::hInput
	float ___hInput_8;
	// System.Single PlayerBehavior::distanceToGround
	float ___distanceToGround_9;
	// UnityEngine.LayerMask PlayerBehavior::groundLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundLayer_10;
	// UnityEngine.Rigidbody PlayerBehavior::_rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rb_11;
	// UnityEngine.CapsuleCollider PlayerBehavior::_col
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ____col_12;
	// UnityEngine.GameObject PlayerBehavior::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_13;
	// System.Single PlayerBehavior::bulletSpeed
	float ___bulletSpeed_14;
	// GameBehavior PlayerBehavior::_gameManager
	GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* ____gameManager_15;
	// PlayerBehavior/JumpingEvent PlayerBehavior::playerJump
	JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* ___playerJump_16;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void InventoryList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryList_1__ctor_mB9D7E929CC10AF7310352F97806F50357B0831B1_gshared (InventoryList_1_t995EB216DE8A7372C1307AF1338E632A498AB4E5* __this, const RuntimeMethod* method) ;
// System.Void InventoryList`1<System.Object>::SetItem(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryList_1_SetItem_mE16B44EF4BF6CC739D575A3FDFC25C8E8AD4B438_gshared (InventoryList_1_t995EB216DE8A7372C1307AF1338E632A498AB4E5* __this, RuntimeObject* ___newItem0, const RuntimeMethod* method) ;
// T InventoryList`1<System.Object>::get_item()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InventoryList_1_get_item_m6F18FBDEFFCC50ECFF59A73A588E4B5C8FC95D46_gshared_inline (InventoryList_1_t995EB216DE8A7372C1307AF1338E632A498AB4E5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void BaseManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseManager__ctor_m7B800865EA0CBF270533B761313065D37F29B996 (BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void EnemyBehavior::InitializePatrolRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_InitializePatrolRoute_m6204E2FA5277DC82E548B23FA0560720A4F7C429 (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, const RuntimeMethod* method) ;
// System.Void EnemyBehavior::MoveToNextPatrolLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_MoveToNextPatrolLocation_m8686E7ECC5E94477A54517497FCC4D7FC787131A (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::get_pathPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_pathPending_mA806A4DC1E06CA32A4E7E71B6846B516EC8C2487 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_destination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Int32 EnemyBehavior::get_EnemyLives()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyBehavior_get_EnemyLives_mFCA5D069D4DC20BB9C9BE54EA7688B9D4C5B65C9_inline (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, const RuntimeMethod* method) ;
// System.Void EnemyBehavior::set_EnemyLives(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_set_EnemyLives_m415B2D054EA00BA5AA6ADF119D4FF6D3AFB8CE7C (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameBehavior::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_Initialize_m53F3270B5E3EE57B00B4C74F54815B09DD153B95 (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) ;
// System.Void InventoryList`1<System.String>::.ctor()
inline void InventoryList_1__ctor_m4B80817DEE77E0526BDFE77C4D57C0A08C30E942 (InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742* __this, const RuntimeMethod* method)
{
	((  void (*) (InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742*, const RuntimeMethod*))InventoryList_1__ctor_mB9D7E929CC10AF7310352F97806F50357B0831B1_gshared)(__this, method);
}
// System.Void InventoryList`1<System.String>::SetItem(T)
inline void InventoryList_1_SetItem_m90A446B1A521F8C8D75748A958E89C0D69135AE0 (InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742* __this, String_t* ___newItem0, const RuntimeMethod* method)
{
	((  void (*) (InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742*, String_t*, const RuntimeMethod*))InventoryList_1_SetItem_mE16B44EF4BF6CC739D575A3FDFC25C8E8AD4B438_gshared)(__this, ___newItem0, method);
}
// T InventoryList`1<System.String>::get_item()
inline String_t* InventoryList_1_get_item_m7B6C11A9E7DA96E0486BC9BBDBF603A9B7B55811_inline (InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742*, const RuntimeMethod*))InventoryList_1_get_item_m6F18FBDEFFCC50ECFF59A73A588E4B5C8FC95D46_gshared_inline)(__this, method);
}
// System.Void CustomExtensions.StringExtensions::FancyDebug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringExtensions_FancyDebug_m892F659427D410D45D7F8F20063B16569053C7BE (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void GameBehavior/DebugDelegate::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_inline (DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, String_t* ___newText0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.String>::Push(T)
inline void Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20 (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094*, String_t*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// T UnityEngine.GameObject::GetComponent<PlayerBehavior>()
inline PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* GameObject_GetComponent_TisPlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2_mF66968AA9F0D5BAC023D76A38C8CDD365C08AF64 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void PlayerBehavior/JumpingEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpingEvent__ctor_mC842ACD322A7AAEC487A2EB70D3580440BBA23BB (JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void PlayerBehavior::add_playerJump(PlayerBehavior/JumpingEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehavior_add_playerJump_m780855403089A8980E28749F90F247F0FD3A1198 (PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* __this, JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mB47BC44807774B77DB8B2BB548D339036544ACC4 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Boolean Utilities::RestartLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utilities_RestartLevel_mEE46600A55232BF4B84F40C32B5807C4E307CA2C (int32_t ___sceneIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.String>::Pop()
inline String_t* Stack_1_Pop_mFE7E2A46CC49662C0B06E3F80D39FA8986EE690D (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1<System.String>::Peek()
inline String_t* Stack_1_Peek_mFF24B5E473E44039922E627D183415E5A6FD3ADC (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.String>::.ctor()
inline void Stack_1__ctor_m335E848ED0B875E3163CBDF6F077EF89DE99D59E (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void GameBehavior/DebugDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDelegate__ctor_mD1875E9DA1F02879AA0DDE9E22EE92660DC26DBB (DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GameBehavior>()
inline GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* GameObject_GetComponent_TisGameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B_m143AFF9EA92E2C6ACC9BC6EC9C12320CC414CEB5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 GameBehavior::get_Items()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameBehavior_get_Items_m8C401BEC18DE0B03B04C37A6B29907ABB71FDB24_inline (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) ;
// System.Void GameBehavior::set_Items(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_set_Items_m198522A29EE23C9863CFE95CC52D7C5558E4AD6C (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameBehavior::PrintLootReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_PrintLootReport_mBB14336D3EF9C2D08DE371704C401014C9D50CB0 (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean PlayerBehavior::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBehavior_IsGrounded_mCB9A17E380B73552A54A1BCE1DE09AC80B4A4DAF (PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void PlayerBehavior/JumpingEvent::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_inline (JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot0, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckCapsule_mFFAADF3C5B987AA3ACBF33377C9D292FA8680532 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, float ___radius2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) ;
// System.Int32 GameBehavior::get_HP()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameBehavior_get_HP_m55783898D3CEC34B25C367AA586E319127EEE6CD_inline (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) ;
// System.Void GameBehavior::set_HP(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_set_HP_mC6A9E7C3253393904713AF8DF33EAA0F29AECAE1 (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.String Utilities::UpdateDeathCount(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_UpdateDeathCount_mA64657378F978E622A85DEB23D1FDD412FB7CAC6 (int32_t* ___countReferences0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Void BaseManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseManager__ctor_m7B800865EA0CBF270533B761313065D37F29B996 (BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void BulletBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBehavior_Start_mB6F8CA98DA82853CDC4DCB0FC2DCC42F5CF98B1B (BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject, onscreenDelay);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_1 = __this->___onscreenDelay_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BulletBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBehavior__ctor_m083B8CB1EDC4FA714A650A61368CF64D584831E9 (BulletBehavior_tEC4D11034CA6DFDA43C051633187834DA7459E87* __this, const RuntimeMethod* method) 
{
	{
		// public float onscreenDelay = 3f;
		__this->___onscreenDelay_4 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CameraBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBehavior_Start_m473A706BFBBC64E955CCD760BE61050EDA653F2D (CameraBehavior_t7F1E8CF807060E73AD4984151E22E62E59CCB71A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = GameObject.Find("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___target_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void CameraBehavior::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBehavior_LateUpdate_m7C23A0D7A163271F2660180C3DD325254E611684 (CameraBehavior_t7F1E8CF807060E73AD4984151E22E62E59CCB71A* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.position = target.TransformPoint(camOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___target_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___camOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// this.transform.LookAt(target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___target_5;
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void CameraBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBehavior__ctor_m570193336D1B71985919B0D7E5F944D2B5F5B71A (CameraBehavior_t7F1E8CF807060E73AD4984151E22E62E59CCB71A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 camOffset = new Vector3(0f, 1.2f, -2.6f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (1.20000005f), (-2.5999999f), /*hidden argument*/NULL);
		__this->___camOffset_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String CombatManager::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CombatManager_get_state_mB26B9CA45713840CB7024CF3E6FE24BA28A1FB17 (CombatManager_t3332B4EDCE263CC54B4CC4D7761979B4458294C0* __this, const RuntimeMethod* method) 
{
	{
		// get { return _state; }
		String_t* L_0 = ((BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F*)__this)->____state_0;
		return L_0;
	}
}
// System.Void CombatManager::set_state(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombatManager_set_state_mC6E1C6D1729AAE8BEF0CB665D82F173FD55CDADB (CombatManager_t3332B4EDCE263CC54B4CC4D7761979B4458294C0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set {_state = value; }
		String_t* L_0 = ___value0;
		((BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F*)__this)->____state_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F*)__this)->____state_0), (void*)L_0);
		// set {_state = value; }
		return;
	}
}
// System.Void CombatManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombatManager_Initialize_m14723A220C95EECC46944B6F247A3BB1D319C4E0 (CombatManager_t3332B4EDCE263CC54B4CC4D7761979B4458294C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB91E2FF1270D3160CCEECFF2792BC01E63D58DBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _state = "Manager intialized...";
		((BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F*)__this)->____state_0 = _stringLiteralB91E2FF1270D3160CCEECFF2792BC01E63D58DBF;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F*)__this)->____state_0), (void*)_stringLiteralB91E2FF1270D3160CCEECFF2792BC01E63D58DBF);
		// Debug.Log(_state);
		String_t* L_0 = ((BaseManager_t30B8A81532E8E45ADA2F8CAB922F5F9D03D0D81F*)__this)->____state_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }
		return;
	}
}
// System.Void CombatManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombatManager__ctor_mE4E50734B23EFF3D3F52EC8403187041C6FBA615 (CombatManager_t3332B4EDCE263CC54B4CC4D7761979B4458294C0* __this, const RuntimeMethod* method) 
{
	{
		BaseManager__ctor_m7B800865EA0CBF270533B761313065D37F29B996(__this, NULL);
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
// System.Int32 EnemyBehavior::get_EnemyLives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemyBehavior_get_EnemyLives_mFCA5D069D4DC20BB9C9BE54EA7688B9D4C5B65C9 (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, const RuntimeMethod* method) 
{
	{
		// get { return _lives; }
		int32_t L_0 = __this->____lives_9;
		return L_0;
	}
}
// System.Void EnemyBehavior::set_EnemyLives(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_set_EnemyLives_m415B2D054EA00BA5AA6ADF119D4FF6D3AFB8CE7C (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22D1A3C77269C2465D7C2ABD73474D4AB206E1DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lives = value;
		int32_t L_0 = ___value0;
		__this->____lives_9 = L_0;
		// if(_lives <= 0)
		int32_t L_1 = __this->____lives_9;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// Debug.Log("Enemy down.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral22D1A3C77269C2465D7C2ABD73474D4AB206E1DF, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void EnemyBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_Start_mCA777433C1A5317FEA0E72DA259921F9E26B015F (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___agent_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_8), (void*)L_0);
		// player = GameObject.Find("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___player_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_2);
		// InitializePatrolRoute();
		EnemyBehavior_InitializePatrolRoute_m6204E2FA5277DC82E548B23FA0560720A4F7C429(__this, NULL);
		// MoveToNextPatrolLocation();
		EnemyBehavior_MoveToNextPatrolLocation_m8686E7ECC5E94477A54517497FCC4D7FC787131A(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyBehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_Update_m5E9ECB6F1C35DF061BEFD8EBD715A89823F564F0 (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, const RuntimeMethod* method) 
{
	{
		// if(agent.remainingDistance < 0.2f && !agent.pathPending)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___agent_8;
		float L_1;
		L_1 = NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A(L_0, NULL);
		if ((!(((float)L_1) < ((float)(0.200000003f)))))
		{
			goto IL_0025;
		}
	}
	{
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2 = __this->___agent_8;
		bool L_3;
		L_3 = NavMeshAgent_get_pathPending_mA806A4DC1E06CA32A4E7E71B6846B516EC8C2487(L_2, NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// MoveToNextPatrolLocation();
		EnemyBehavior_MoveToNextPatrolLocation_m8686E7ECC5E94477A54517497FCC4D7FC787131A(__this, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void EnemyBehavior::InitializePatrolRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_InitializePatrolRoute_m6204E2FA5277DC82E548B23FA0560720A4F7C429 (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach(Transform child in partrolRoute)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___partrolRoute_5;
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0040;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0040:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_000e_1:
			{
				// foreach(Transform child in partrolRoute)
				RuntimeObject* L_5 = V_0;
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// locations.Add(child);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_7 = __this->___locations_7;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_7, L_8, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
			}

IL_0026_1:
			{
				// foreach(Transform child in partrolRoute)
				RuntimeObject* L_9 = V_0;
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void EnemyBehavior::MoveToNextPatrolLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_MoveToNextPatrolLocation_m8686E7ECC5E94477A54517497FCC4D7FC787131A (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(locations.Count == 0)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___locations_7;
		int32_t L_1;
		L_1 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_0, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// agent.destination = locations[locationIndex].position;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2 = __this->___agent_8;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_3 = __this->___locations_7;
		int32_t L_4 = __this->___locationIndex_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_3, L_4, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95(L_2, L_6, NULL);
		// locationIndex = (locationIndex + 1) % locations.Count;
		int32_t L_7 = __this->___locationIndex_6;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_8 = __this->___locations_7;
		int32_t L_9;
		L_9 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_8, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		__this->___locationIndex_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_7, 1))%L_9));
		// }
		return;
	}
}
// System.Void EnemyBehavior::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_OnTriggerEnter_m1CA1498CFAD22BF09E4AE3B3779CF31FEE3F9953 (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF300C8E27EB6E69DA2844D6721CAB28DB911A18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.name == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// agent.destination = player.position;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3 = __this->___agent_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___player_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95(L_3, L_5, NULL);
		// Debug.Log("Player detected! Attack!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFF300C8E27EB6E69DA2844D6721CAB28DB911A18, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void EnemyBehavior::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_OnTriggerExit_m9E3819371DE5616BE2CB934748937DAFDB1D54C3 (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C08E023F299C476DED71317B049730730F21069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.name == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.Log("Player out of range!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9C08E023F299C476DED71317B049730730F21069, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void EnemyBehavior::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior_OnCollisionEnter_mD47E61D2B96502C4ECB679AB68CA234C77B54693 (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25B58FD2EB27C078911F873CDDE5677CDA486DDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48934E2895EFFAC09FCD7186A450668D15C0290A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.name == "Sphere(Clone)")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral48934E2895EFFAC09FCD7186A450668D15C0290A, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// EnemyLives -= 1;
		int32_t L_4;
		L_4 = EnemyBehavior_get_EnemyLives_mFCA5D069D4DC20BB9C9BE54EA7688B9D4C5B65C9_inline(__this, NULL);
		EnemyBehavior_set_EnemyLives_m415B2D054EA00BA5AA6ADF119D4FF6D3AFB8CE7C(__this, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		// Debug.Log("Critical hit!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral25B58FD2EB27C078911F873CDDE5677CDA486DDE, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void EnemyBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBehavior__ctor_m7011454C2863B71912F98B4E5041CE3B614507BC (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, const RuntimeMethod* method) 
{
	{
		// private int _lives = 3;
		__this->____lives_9 = 3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String GameBehavior::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameBehavior_get_State_m7E51A8E0CEB953EE5273DCFB3F77F452511F459F (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _state; }
		String_t* L_0 = __this->____state_9;
		return L_0;
	}
}
// System.Void GameBehavior::set_State(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_set_State_m8562B41DF6F5D519BD9398AE6BB2AAB3E74C91B0 (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _state = value; }
		String_t* L_0 = ___value0;
		__this->____state_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_9), (void*)L_0);
		// set { _state = value; }
		return;
	}
}
// System.Void GameBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_Start_m512E6C456B4339ADD4234FC08A9C57BCBE64C5B6 (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryList_1_SetItem_m90A446B1A521F8C8D75748A958E89C0D69135AE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryList_1__ctor_m4B80817DEE77E0526BDFE77C4D57C0A08C30E942_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryList_1_get_item_m7B6C11A9E7DA96E0486BC9BBDBF603A9B7B55811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize();
		GameBehavior_Initialize_m53F3270B5E3EE57B00B4C74F54815B09DD153B95(__this, NULL);
		// InventoryList<string> inventoryList = new InventoryList<string>();
		InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742* L_0 = (InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742*)il2cpp_codegen_object_new(InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742_il2cpp_TypeInfo_var);
		InventoryList_1__ctor_m4B80817DEE77E0526BDFE77C4D57C0A08C30E942(L_0, InventoryList_1__ctor_m4B80817DEE77E0526BDFE77C4D57C0A08C30E942_RuntimeMethod_var);
		// inventoryList.SetItem("Potion");
		InventoryList_1_t390DEE5422B9C12FD3388DFFA417F99117D40742* L_1 = L_0;
		InventoryList_1_SetItem_m90A446B1A521F8C8D75748A958E89C0D69135AE0(L_1, _stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211, InventoryList_1_SetItem_m90A446B1A521F8C8D75748A958E89C0D69135AE0_RuntimeMethod_var);
		// Debug.Log(inventoryList.item);
		String_t* L_2;
		L_2 = InventoryList_1_get_item_m7B6C11A9E7DA96E0486BC9BBDBF603A9B7B55811_inline(L_1, InventoryList_1_get_item_m7B6C11A9E7DA96E0486BC9BBDBF603A9B7B55811_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void GameBehavior::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_Initialize_m53F3270B5E3EE57B00B4C74F54815B09DD153B95 (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameBehavior_HandlePlayerJump_mF011941462858FFF4A54F8A47DBBD33DB881E663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2_mF66968AA9F0D5BAC023D76A38C8CDD365C08AF64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral343CD6451A42B2A55299F602955727A0E2D38009);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral612C3797426144C3C776DE00617309EF6A458B06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7739AFA71B0B123FF70FE33491ACD39139BE4FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC4837E60441F51CBB2843549AAA4AC11B35060B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD95A731316FA426ADF4B4B6C18C2785FB2259CA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4F8DF13FC4C257B9378767D71EEA6BCDA529424);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _state = "Manager initialized...";
		__this->____state_9 = _stringLiteralCC4837E60441F51CBB2843549AAA4AC11B35060B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_9), (void*)_stringLiteralCC4837E60441F51CBB2843549AAA4AC11B35060B);
		// _state.FancyDebug();
		String_t* L_0 = __this->____state_9;
		StringExtensions_FancyDebug_m892F659427D410D45D7F8F20063B16569053C7BE(L_0, NULL);
		// Debug.Log(_state);
		String_t* L_1 = __this->____state_9;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// debug(_state);
		DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* L_2 = __this->___debug_11;
		String_t* L_3 = __this->____state_9;
		DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_inline(L_2, L_3, NULL);
		// lootStack.Push("Sword of Doom");
		Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* L_4 = __this->___lootStack_10;
		Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20(L_4, _stringLiteralF4F8DF13FC4C257B9378767D71EEA6BCDA529424, Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20_RuntimeMethod_var);
		// lootStack.Push("HP");
		Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* L_5 = __this->___lootStack_10;
		Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20(L_5, _stringLiteral612C3797426144C3C776DE00617309EF6A458B06, Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20_RuntimeMethod_var);
		// lootStack.Push("Golden Key");
		Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* L_6 = __this->___lootStack_10;
		Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20(L_6, _stringLiteralD95A731316FA426ADF4B4B6C18C2785FB2259CA2, Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20_RuntimeMethod_var);
		// lootStack.Push("Winged Boot");
		Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* L_7 = __this->___lootStack_10;
		Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20(L_7, _stringLiteral343CD6451A42B2A55299F602955727A0E2D38009, Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20_RuntimeMethod_var);
		// lootStack.Push("Mythril Bracers");
		Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* L_8 = __this->___lootStack_10;
		Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20(L_8, _stringLiteralA7739AFA71B0B123FF70FE33491ACD39139BE4FB, Stack_1_Push_m6735A1D45311268768814737E1F1884B3615CA20_RuntimeMethod_var);
		// GameObject player = GameObject.Find("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		// PlayerBehavior playerBehavior = player.GetComponent<PlayerBehavior>();
		PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* L_10;
		L_10 = GameObject_GetComponent_TisPlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2_mF66968AA9F0D5BAC023D76A38C8CDD365C08AF64(L_9, GameObject_GetComponent_TisPlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2_mF66968AA9F0D5BAC023D76A38C8CDD365C08AF64_RuntimeMethod_var);
		// playerBehavior.playerJump += HandlePlayerJump;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_11 = (JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1*)il2cpp_codegen_object_new(JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1_il2cpp_TypeInfo_var);
		JumpingEvent__ctor_mC842ACD322A7AAEC487A2EB70D3580440BBA23BB(L_11, __this, (intptr_t)((void*)GameBehavior_HandlePlayerJump_mF011941462858FFF4A54F8A47DBBD33DB881E663_RuntimeMethod_var), NULL);
		PlayerBehavior_add_playerJump_m780855403089A8980E28749F90F247F0FD3A1198(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void GameBehavior::HandlePlayerJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_HandlePlayerJump_mF011941462858FFF4A54F8A47DBBD33DB881E663 (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ADDF523920E577C2A776FF45A47756280833D7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// debug("Player has jumped...");
		DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* L_0 = __this->___debug_11;
		DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_inline(L_0, _stringLiteral9ADDF523920E577C2A776FF45A47756280833D7E, NULL);
		// }
		return;
	}
}
// System.Void GameBehavior::Print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_Print_m6D58DD9FED8D86AE08BD715D4B9C988B720671D4 (String_t* ___newText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(newText);
		String_t* L_0 = ___newText0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }
		return;
	}
}
// System.Int32 GameBehavior::get_Items()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameBehavior_get_Items_m8C401BEC18DE0B03B04C37A6B29907ABB71FDB24 (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _itemsCollected; }
		int32_t L_0 = __this->____itemsCollected_4;
		return L_0;
	}
}
// System.Void GameBehavior::set_Items(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_set_Items_m198522A29EE23C9863CFE95CC52D7C5558E4AD6C (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral940B832BE00C3B5F2CEDEC974A58E0D20BFCD53D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD593D31F7249D6C0EEDCBBF3666B780EEA795922);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB18DED07229E846E4E14B0A4F35AAB7F850BB0E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _itemsCollected = value;
		int32_t L_0 = ___value0;
		__this->____itemsCollected_4 = L_0;
		// if(_itemsCollected >= maxItems)
		int32_t L_1 = __this->____itemsCollected_4;
		int32_t L_2 = __this->___maxItems_6;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0032;
		}
	}
	{
		// labelText = "You found all the items!";
		__this->___labelText_5 = _stringLiteralD593D31F7249D6C0EEDCBBF3666B780EEA795922;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___labelText_5), (void*)_stringLiteralD593D31F7249D6C0EEDCBBF3666B780EEA795922);
		// showWinScreen = true;
		__this->___showWinScreen_7 = (bool)1;
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		return;
	}

IL_0032:
	{
		// labelText = "Item found, only " + (maxItems - _itemsCollected) + " more to go!";
		int32_t L_3 = __this->___maxItems_6;
		int32_t L_4 = __this->____itemsCollected_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralEB18DED07229E846E4E14B0A4F35AAB7F850BB0E, L_5, _stringLiteral940B832BE00C3B5F2CEDEC974A58E0D20BFCD53D, NULL);
		__this->___labelText_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___labelText_5), (void*)L_6);
		// }
		return;
	}
}
// System.Int32 GameBehavior::get_HP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameBehavior_get_HP_m55783898D3CEC34B25C367AA586E319127EEE6CD (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _playerHP; }
		int32_t L_0 = __this->____playerHP_12;
		return L_0;
	}
}
// System.Void GameBehavior::set_HP(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_set_HP_mC6A9E7C3253393904713AF8DF33EAA0F29AECAE1 (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral646D8EF72137D595694FFB21D59EAA7D6C94F9BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D6C87D397393C7032AC43005A27FBD138DAF73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA4B3353A4BF3ABED942C969E04B79B51A4E7291);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playerHP = value;
		int32_t L_0 = ___value0;
		__this->____playerHP_12 = L_0;
		// if(_playerHP <= 0)
		int32_t L_1 = __this->____playerHP_12;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// labelText = "You want another life with that?";
		__this->___labelText_5 = _stringLiteral83D6C87D397393C7032AC43005A27FBD138DAF73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___labelText_5), (void*)_stringLiteral83D6C87D397393C7032AC43005A27FBD138DAF73);
		// showLossScreen = true;
		__this->___showLossScreen_8 = (bool)1;
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		goto IL_0039;
	}

IL_002e:
	{
		// labelText = "Ouch...that's gotta hurt!";
		__this->___labelText_5 = _stringLiteral646D8EF72137D595694FFB21D59EAA7D6C94F9BC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___labelText_5), (void*)_stringLiteral646D8EF72137D595694FFB21D59EAA7D6C94F9BC);
	}

IL_0039:
	{
		// Debug.LogFormat("Lives: {0}", _playerHP);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = __this->____playerHP_12;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralEA4B3353A4BF3ABED942C969E04B79B51A4E7291, L_3, NULL);
		// }
		return;
	}
}
// System.Void GameBehavior::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_OnGUI_mBD27CE039D30DA21B2C073CF234EE24A692DC20E (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1538AA1C49A4854FF017DBE0C5C024503F69DE5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A1A84804DC817CFB4397EE3E81794D9AD4F2BB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22BD4547A25F5FA044193662E354132CCC77846C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EFCC23B167CD29EDD1D6179E316F84D59768C6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7365E0A7C502911E3EE2835C2A4F56078569F0E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2518B94FDE56C6FBB7C101FA53DA66826CB2CC5);
		s_Il2CppMethodInitialized = true;
	}
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// GUI.Box(new Rect (20, 20, 150, 25), "Player Health:" + _playerHP);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (20.0f), (20.0f), (150.0f), (25.0f), /*hidden argument*/NULL);
		int32_t* L_1 = (&__this->____playerHP_12);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3EFCC23B167CD29EDD1D6179E316F84D59768C6F, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_mB47BC44807774B77DB8B2BB548D339036544ACC4(L_0, L_3, NULL);
		// GUI.Box(new Rect (20, 50, 150, 25), "Items Collected:" + _itemsCollected);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), (20.0f), (50.0f), (150.0f), (25.0f), /*hidden argument*/NULL);
		int32_t* L_5 = (&__this->____itemsCollected_4);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB2518B94FDE56C6FBB7C101FA53DA66826CB2CC5, L_6, NULL);
		GUI_Box_mB47BC44807774B77DB8B2BB548D339036544ACC4(L_4, L_7, NULL);
		// GUI.Label(new Rect(Screen.width / 2 - 100, Screen.height - 50, 300, 50), labelText);
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_9;
		L_9 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_10), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_8/2)), ((int32_t)100)))), ((float)((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)50)))), (300.0f), (50.0f), /*hidden argument*/NULL);
		String_t* L_11 = __this->___labelText_5;
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_10, L_11, NULL);
		// if(showWinScreen)
		bool L_12 = __this->___showWinScreen_7;
		if (!L_12)
		{
			goto IL_00d0;
		}
	}
	{
		// GUI.Label(new Rect(Screen.width / 2 - 100, Screen.height - 50, 100, 100), "YOU WON!");
		int32_t L_13;
		L_13 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_14;
		L_14 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_15), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_13/2)), ((int32_t)100)))), ((float)((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)50)))), (100.0f), (100.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_15, _stringLiteral1A1A84804DC817CFB4397EE3E81794D9AD4F2BB7, NULL);
		// Utilities.RestartLevel(0);
		bool L_16;
		L_16 = Utilities_RestartLevel_mEE46600A55232BF4B84F40C32B5807C4E307CA2C(0, NULL);
	}

IL_00d0:
	{
		// if(showLossScreen)
		bool L_17 = __this->___showLossScreen_8;
		if (!L_17)
		{
			goto IL_015b;
		}
	}
	{
		// if(GUI.Button(new Rect(Screen.width / 2 - 100, Screen.height / 2 - 50, 200, 100), "You lose!"))
		int32_t L_18;
		L_18 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_19;
		L_19 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20;
		memset((&L_20), 0, sizeof(L_20));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_20), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_18/2)), ((int32_t)100)))), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_19/2)), ((int32_t)50)))), (200.0f), (100.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B(L_20, _stringLiteral7365E0A7C502911E3EE2835C2A4F56078569F0E7, NULL);
		if (!L_21)
		{
			goto IL_015b;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014a:
			{// begin finally (depth: 1)
				// debug("Restart handled...");
				DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* L_22 = __this->___debug_11;
				DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_inline(L_22, _stringLiteral1538AA1C49A4854FF017DBE0C5C024503F69DE5B, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// Utilities.RestartLevel(-1);
				bool L_23;
				L_23 = Utilities_RestartLevel_mEE46600A55232BF4B84F40C32B5807C4E307CA2C((-1), NULL);
				// debug("Level restarted sucessfully...");
				DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* L_24 = __this->___debug_11;
				DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_inline(L_24, _stringLiteral22BD4547A25F5FA044193662E354132CCC77846C, NULL);
				// }
				goto IL_015b;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0125_1;
				}
				throw e;
			}

CATCH_0125_1:
			{// begin catch(System.ArgumentException)
				// catch(System.ArgumentException e)
				V_0 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));
				// Utilities.RestartLevel(0);
				bool L_25;
				L_25 = Utilities_RestartLevel_mEE46600A55232BF4B84F40C32B5807C4E307CA2C(0, NULL);
				// debug("Reverting to Scene 0:" + e.ToString());
				DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* L_26 = __this->___debug_11;
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_27 = V_0;
				String_t* L_28;
				L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
				String_t* L_29;
				L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3126C6C620C15DE71683F76B2A9DB2EAC56BD058)), L_28, NULL);
				DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_inline(L_26, L_29, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_015b;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_015b:
	{
		// }
		return;
	}
}
// System.Void GameBehavior::PrintLootReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior_PrintLootReport_mBB14336D3EF9C2D08DE371704C401014C9D50CB0 (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mFF24B5E473E44039922E627D183415E5A6FD3ADC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mFE7E2A46CC49662C0B06E3F80D39FA8986EE690D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55667D0C330A889B717DF3CA2C9819178140A3C3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var currentItem = lootStack.Pop();
		Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* L_0 = __this->___lootStack_10;
		String_t* L_1;
		L_1 = Stack_1_Pop_mFE7E2A46CC49662C0B06E3F80D39FA8986EE690D(L_0, Stack_1_Pop_mFE7E2A46CC49662C0B06E3F80D39FA8986EE690D_RuntimeMethod_var);
		V_0 = L_1;
		// var nextItem = lootStack.Peek();
		Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* L_2 = __this->___lootStack_10;
		String_t* L_3;
		L_3 = Stack_1_Peek_mFF24B5E473E44039922E627D183415E5A6FD3ADC(L_2, Stack_1_Peek_mFF24B5E473E44039922E627D183415E5A6FD3ADC_RuntimeMethod_var);
		V_1 = L_3;
		// Debug.LogFormat("You got a {0}! You've got a good chance of finding a {1} next!", currentItem, nextItem);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		String_t* L_6 = V_0;
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = V_1;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral55667D0C330A889B717DF3CA2C9819178140A3C3, L_7, NULL);
		// }
		return;
	}
}
// System.Void GameBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBehavior__ctor_mF61151A152A61C3120F9E8F203E4B77E5F02D82C (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameBehavior_Print_m6D58DD9FED8D86AE08BD715D4B9C988B720671D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m335E848ED0B875E3163CBDF6F077EF89DE99D59E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378E759A8B419C5129FF13EBEF802DD6BD7875FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string labelText = "Collect all 4 items and win your freedom!";
		__this->___labelText_5 = _stringLiteral378E759A8B419C5129FF13EBEF802DD6BD7875FF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___labelText_5), (void*)_stringLiteral378E759A8B419C5129FF13EBEF802DD6BD7875FF);
		// public int maxItems = 4;
		__this->___maxItems_6 = 4;
		// public Stack<string> lootStack = new Stack<string>();
		Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094* L_0 = (Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094*)il2cpp_codegen_object_new(Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094_il2cpp_TypeInfo_var);
		Stack_1__ctor_m335E848ED0B875E3163CBDF6F077EF89DE99D59E(L_0, Stack_1__ctor_m335E848ED0B875E3163CBDF6F077EF89DE99D59E_RuntimeMethod_var);
		__this->___lootStack_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lootStack_10), (void*)L_0);
		// public DebugDelegate debug = Print;
		DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* L_1 = (DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297*)il2cpp_codegen_object_new(DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297_il2cpp_TypeInfo_var);
		DebugDelegate__ctor_mD1875E9DA1F02879AA0DDE9E22EE92660DC26DBB(L_1, NULL, (intptr_t)((void*)GameBehavior_Print_m6D58DD9FED8D86AE08BD715D4B9C988B720671D4_RuntimeMethod_var), NULL);
		__this->___debug_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debug_11), (void*)L_1);
		// private int _playerHP = 10;
		__this->____playerHP_12 = ((int32_t)10);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_Multicast(DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, String_t* ___newText0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* currentDelegate = reinterpret_cast<DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___newText0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_OpenInst(DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, String_t* ___newText0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___newText0, method);
}
void DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_OpenStatic(DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, String_t* ___newText0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___newText0, method);
}
void DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_OpenStaticInvoker(DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, String_t* ___newText0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___newText0);
}
void DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_ClosedStaticInvoker(DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, String_t* ___newText0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___newText0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297 (DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, String_t* ___newText0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___newText0' to native representation
	char* ____newText0_marshaled = NULL;
	____newText0_marshaled = il2cpp_codegen_marshal_string(___newText0);

	// Native function invocation
	il2cppPInvokeFunc(____newText0_marshaled);

	// Marshaling cleanup of parameter '___newText0' native representation
	il2cpp_codegen_marshal_free(____newText0_marshaled);
	____newText0_marshaled = NULL;

}
// System.Void GameBehavior/DebugDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDelegate__ctor_mD1875E9DA1F02879AA0DDE9E22EE92660DC26DBB (DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_Multicast;
}
// System.Void GameBehavior/DebugDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B (DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, String_t* ___newText0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___newText0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameBehavior/DebugDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DebugDelegate_BeginInvoke_m4E2E0DC4C54115F04CDEEDD54D4707B9B3A2C396 (DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, String_t* ___newText0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___newText0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GameBehavior/DebugDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDelegate_EndInvoke_m9CCF45C1711DE3703E8B580D40C4DEAC15317EF6 (DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemBehavior_Start_m61AC2F659472C8F54528FB25021E29BAF441C9FD (ItemBehavior_t07C6753350A6C6277B9DF6D5621CE744FABB9551* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B_m143AFF9EA92E2C6ACC9BC6EC9C12320CC414CEB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = GameObject.Find("GameManager").GetComponent<GameBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* L_1;
		L_1 = GameObject_GetComponent_TisGameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B_m143AFF9EA92E2C6ACC9BC6EC9C12320CC414CEB5(L_0, GameObject_GetComponent_TisGameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B_m143AFF9EA92E2C6ACC9BC6EC9C12320CC414CEB5_RuntimeMethod_var);
		__this->___gameManager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void ItemBehavior::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemBehavior_OnCollisionEnter_m29745EB840679E578748D27117259D4BEE2BD75D (ItemBehavior_t07C6753350A6C6277B9DF6D5621CE744FABB9551* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C3DD14CBB67E593972F44E6D6363A05B5B8C413);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.name == "Player")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// Destroy(this.transform.parent.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// Debug.Log("Zoomies! Speed gained!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4C3DD14CBB67E593972F44E6D6363A05B5B8C413, NULL);
		// gameManager.Items += 1;
		GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* L_7 = __this->___gameManager_4;
		GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* L_8 = L_7;
		int32_t L_9;
		L_9 = GameBehavior_get_Items_m8C401BEC18DE0B03B04C37A6B29907ABB71FDB24_inline(L_8, NULL);
		GameBehavior_set_Items_m198522A29EE23C9863CFE95CC52D7C5558E4AD6C(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		// gameManager.PrintLootReport();
		GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* L_10 = __this->___gameManager_4;
		GameBehavior_PrintLootReport_mBB14336D3EF9C2D08DE371704C401014C9D50CB0(L_10, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void ItemBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemBehavior__ctor_mF9E784A189331CA9D710F601F1767FDD787CF12C (ItemBehavior_t07C6753350A6C6277B9DF6D5621CE744FABB9551* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerBehavior::add_playerJump(PlayerBehavior/JumpingEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehavior_add_playerJump_m780855403089A8980E28749F90F247F0FD3A1198 (PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* __this, JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* V_0 = NULL;
	JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* V_1 = NULL;
	JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* V_2 = NULL;
	{
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_0 = __this->___playerJump_16;
		V_0 = L_0;
	}

IL_0007:
	{
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_1 = V_0;
		V_1 = L_1;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_2 = V_1;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1*)CastclassSealed((RuntimeObject*)L_4, JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1_il2cpp_TypeInfo_var));
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1** L_5 = (&__this->___playerJump_16);
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_6 = V_2;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_7 = V_1;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_8;
		L_8 = InterlockedCompareExchangeImpl<JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1*>(L_5, L_6, L_7);
		V_0 = L_8;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_9 = V_0;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_10 = V_1;
		if ((!(((RuntimeObject*)(JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1*)L_9) == ((RuntimeObject*)(JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void PlayerBehavior::remove_playerJump(PlayerBehavior/JumpingEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehavior_remove_playerJump_m3A28A68B2602B96683233084560A8CA51C30FA72 (PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* __this, JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* V_0 = NULL;
	JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* V_1 = NULL;
	JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* V_2 = NULL;
	{
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_0 = __this->___playerJump_16;
		V_0 = L_0;
	}

IL_0007:
	{
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_1 = V_0;
		V_1 = L_1;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_2 = V_1;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1*)CastclassSealed((RuntimeObject*)L_4, JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1_il2cpp_TypeInfo_var));
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1** L_5 = (&__this->___playerJump_16);
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_6 = V_2;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_7 = V_1;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_8;
		L_8 = InterlockedCompareExchangeImpl<JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1*>(L_5, L_6, L_7);
		V_0 = L_8;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_9 = V_0;
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_10 = V_1;
		if ((!(((RuntimeObject*)(JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1*)L_9) == ((RuntimeObject*)(JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void PlayerBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehavior_Start_m631BD9A62ACF63B16C613E8DC534FD36E9C1007D (PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B_m143AFF9EA92E2C6ACC9BC6EC9C12320CC414CEB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rb_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rb_11), (void*)L_0);
		// _col = GetComponent<CapsuleCollider>();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_1;
		L_1 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->____col_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____col_12), (void*)L_1);
		// _gameManager = GameObject.Find("GameManager").GetComponent<GameBehavior>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, NULL);
		GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* L_3;
		L_3 = GameObject_GetComponent_TisGameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B_m143AFF9EA92E2C6ACC9BC6EC9C12320CC414CEB5(L_2, GameObject_GetComponent_TisGameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B_m143AFF9EA92E2C6ACC9BC6EC9C12320CC414CEB5_RuntimeMethod_var);
		__this->____gameManager_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameManager_15), (void*)L_3);
		// }
		return;
	}
}
// System.Void PlayerBehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehavior_Update_mEC117441A5BFBC1B1C0B2951903C5A0209FD10DE (PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(IsGrounded() && Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = PlayerBehavior_IsGrounded_mCB9A17E380B73552A54A1BCE1DE09AC80B4A4DAF(__this, NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// _rb.AddForce(Vector3.up * jumpVelocity, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->____rb_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_4 = __this->___jumpVelocity_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_2, L_5, 1, NULL);
		// playerJump();
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* L_6 = __this->___playerJump_16;
		JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_inline(L_6, NULL);
	}

IL_0038:
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_7;
		L_7 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_7)
		{
			goto IL_009a;
		}
	}
	{
		// GameObject newBullet = Instantiate(bullet, this.transform.position + new Vector3(1, 0, 0), this.transform.rotation) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___bullet_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_12, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Rigidbody bulletRB = newBullet.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16;
		L_16 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_15, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// bulletRB.velocity = this.transform.forward * bulletSpeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_17, NULL);
		float L_19 = __this->___bulletSpeed_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_16, L_20, NULL);
	}

IL_009a:
	{
		// vInput = Input.GetAxis("Vertical") * moveSpeed;
		float L_21;
		L_21 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		float L_22 = __this->___moveSpeed_4;
		__this->___vInput_7 = ((float)il2cpp_codegen_multiply(L_21, L_22));
		// hInput = Input.GetAxis("Horizontal") * rotateSpeed;
		float L_23;
		L_23 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_24 = __this->___rotateSpeed_5;
		__this->___hInput_8 = ((float)il2cpp_codegen_multiply(L_23, L_24));
		// this.transform.Translate(Vector3.forward * vInput * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_27 = __this->___vInput_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_27, NULL);
		float L_29;
		L_29 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_25, L_30, NULL);
		// this.transform.Rotate(Vector3.up * hInput * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_33 = __this->___hInput_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		float L_35;
		L_35 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_35, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_31, L_36, NULL);
		// }
		return;
	}
}
// System.Void PlayerBehavior::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehavior_FixedUpdate_mBBFBD1A61A15BC4A29B1A353E7AAD3A4B0BC4728 (PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotation = Vector3.up * hInput;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_1 = __this->___hInput_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		// Quaternion angleRot = Quaternion.Euler(rotation * Time.fixedDeltaTime);
		float L_3;
		L_3 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_4, NULL);
		V_0 = L_5;
		// _rb.MovePosition(this.transform.position + this.transform.forward * vInput * Time.fixedDeltaTime);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->____rb_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		float L_11 = __this->___vInput_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_14, NULL);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_6, L_15, NULL);
		// _rb.MoveRotation(_rb.rotation * angleRot);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->____rb_11;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->____rb_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_18, L_19, NULL);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_16, L_20, NULL);
		// }
		return;
	}
}
// System.Boolean PlayerBehavior::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBehavior_IsGrounded_mCB9A17E380B73552A54A1BCE1DE09AC80B4A4DAF (PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 capsuleBottom = new Vector3(_col.bounds.center.x, _col.bounds.min.y, _col.bounds.center.x);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = __this->____col_12;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_0, NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_3 = L_2.___x_2;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->____col_12;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5;
		L_5 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_1), NULL);
		float L_7 = L_6.___y_3;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_8 = __this->____col_12;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_8, NULL);
		V_1 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_11 = L_10.___x_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_3, L_7, L_11, NULL);
		// bool grounded = Physics.CheckCapsule(_col.bounds.center, capsuleBottom, distanceToGround, groundLayer, QueryTriggerInteraction.Ignore);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_12 = __this->____col_12;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_13;
		L_13 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_12, NULL);
		V_1 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = __this->___distanceToGround_9;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = __this->___groundLayer_10;
		int32_t L_18;
		L_18 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_17, NULL);
		bool L_19;
		L_19 = Physics_CheckCapsule_mFFAADF3C5B987AA3ACBF33377C9D292FA8680532(L_14, L_15, L_16, L_18, 1, NULL);
		// return grounded;
		return L_19;
	}
}
// System.Void PlayerBehavior::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehavior_OnCollisionEnter_mA8997741B9AF4AB5CF74F29A1E5D02956E9CFD88 (PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.name == "Enemy")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// _gameManager.HP -= 1;
		GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* L_4 = __this->____gameManager_15;
		GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* L_5 = L_4;
		int32_t L_6;
		L_6 = GameBehavior_get_HP_m55783898D3CEC34B25C367AA586E319127EEE6CD_inline(L_5, NULL);
		GameBehavior_set_HP_mC6A9E7C3253393904713AF8DF33EAA0F29AECAE1(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void PlayerBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBehavior__ctor_mEAABF0EDDA6A262EF88D42C09BBB13FBE2FADE4D (PlayerBehavior_t4EDF2DF37B1C7A7B49BF88A7921C5A260C2AE1D2* __this, const RuntimeMethod* method) 
{
	{
		// public float moveSpeed = 10f;
		__this->___moveSpeed_4 = (10.0f);
		// public float rotateSpeed = 75f;
		__this->___rotateSpeed_5 = (75.0f);
		// public float jumpVelocity = 5f;
		__this->___jumpVelocity_6 = (5.0f);
		// public float distanceToGround = 0.1f;
		__this->___distanceToGround_9 = (0.100000001f);
		// public float bulletSpeed = 100f;
		__this->___bulletSpeed_14 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_Multicast(JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* currentDelegate = reinterpret_cast<JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_OpenInst(JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_OpenStatic(JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_OpenStaticInvoker(JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_ClosedStaticInvoker(JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1 (JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void PlayerBehavior/JumpingEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpingEvent__ctor_mC842ACD322A7AAEC487A2EB70D3580440BBA23BB (JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_Multicast;
}
// System.Void PlayerBehavior/JumpingEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50 (JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PlayerBehavior/JumpingEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JumpingEvent_BeginInvoke_m96A4D2061D5824F15ECEAB07A6F55FEC44347240 (JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void PlayerBehavior/JumpingEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpingEvent_EndInvoke_mAC6F845D17102EF5862F8D471CF0446E428D01BD (JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Utilities::UpdateDeathCount(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_UpdateDeathCount_mA64657378F978E622A85DEB23D1FDD412FB7CAC6 (int32_t* ___countReferences0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465E631BC55CF1D5DF1B80FEED712BA54C3EB7AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countReferences += 1;
		int32_t* L_0 = ___countReferences0;
		int32_t* L_1 = ___countReferences0;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, 1));
		// return "Next time you'll be at number " + countReferences;
		int32_t* L_3 = ___countReferences0;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral465E631BC55CF1D5DF1B80FEED712BA54C3EB7AA, L_4, NULL);
		return L_5;
	}
}
// System.Void Utilities::RestartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utilities_RestartLevel_mAABA100D467B6E1F6BCAB88E27EDFBDD26C728FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utilities_t6F35AFE0F28F4AF967399B21FCB76780ED3D6BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CED2EAAAFC2C79CF1ACB040EEF106FE2EE85ED9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// Time.timeScale = 1.0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// Debug.Log("Player deaths: " + playerDeaths);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((Utilities_t6F35AFE0F28F4AF967399B21FCB76780ED3D6BFB_StaticFields*)il2cpp_codegen_static_fields_for(Utilities_t6F35AFE0F28F4AF967399B21FCB76780ED3D6BFB_il2cpp_TypeInfo_var))->___playerDeaths_0), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4CED2EAAAFC2C79CF1ACB040EEF106FE2EE85ED9, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// string message = UpdateDeathCount(ref playerDeaths);
		String_t* L_2;
		L_2 = Utilities_UpdateDeathCount_mA64657378F978E622A85DEB23D1FDD412FB7CAC6((&((Utilities_t6F35AFE0F28F4AF967399B21FCB76780ED3D6BFB_StaticFields*)il2cpp_codegen_static_fields_for(Utilities_t6F35AFE0F28F4AF967399B21FCB76780ED3D6BFB_il2cpp_TypeInfo_var))->___playerDeaths_0), NULL);
		// Debug.Log("Player deaths: " + playerDeaths);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((Utilities_t6F35AFE0F28F4AF967399B21FCB76780ED3D6BFB_StaticFields*)il2cpp_codegen_static_fields_for(Utilities_t6F35AFE0F28F4AF967399B21FCB76780ED3D6BFB_il2cpp_TypeInfo_var))->___playerDeaths_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4CED2EAAAFC2C79CF1ACB040EEF106FE2EE85ED9, L_3, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Boolean Utilities::RestartLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utilities_RestartLevel_mEE46600A55232BF4B84F40C32B5807C4E307CA2C (int32_t ___sceneIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(sceneIndex < 0)
		int32_t L_0 = ___sceneIndex0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new System.ArgumentException("Scene index cannot be negative");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DD560B73AEA30744F929408DBD07D8411B5EC0F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utilities_RestartLevel_mEE46600A55232BF4B84F40C32B5807C4E307CA2C_RuntimeMethod_var)));
	}

IL_000f:
	{
		// SceneManager.LoadScene(sceneIndex);
		int32_t L_2 = ___sceneIndex0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_2, NULL);
		// Time.timeScale = 1.0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// return true;
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
// System.Void CustomExtensions.StringExtensions::FancyDebug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringExtensions_FancyDebug_m892F659427D410D45D7F8F20063B16569053C7BE (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A5A946AFEC4CED4A3A49EE49E1C17CE078F1A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("This string contains {0} characters.", str.Length);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___str0;
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralD8A5A946AFEC4CED4A3A49EE49E1C17CE078F1A2, L_1, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyBehavior_get_EnemyLives_mFCA5D069D4DC20BB9C9BE54EA7688B9D4C5B65C9_inline (EnemyBehavior_t130C51D1CEE69D4C199037B930759276F0FFD1BE* __this, const RuntimeMethod* method) 
{
	{
		// get { return _lives; }
		int32_t L_0 = __this->____lives_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DebugDelegate_Invoke_m85803E6474D3A5A682F516028A04C94ACA59F37B_inline (DebugDelegate_tDDF1EE5FA03405189C94E1BFFFA8819064EE5297* __this, String_t* ___newText0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___newText0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameBehavior_get_Items_m8C401BEC18DE0B03B04C37A6B29907ABB71FDB24_inline (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _itemsCollected; }
		int32_t L_0 = __this->____itemsCollected_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JumpingEvent_Invoke_m68C724746B95F7F4BBD833127280F9DE07C1DF50_inline (JumpingEvent_tED64BE92B693BE86C78F11BAF8B582CD38BE0EA1* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameBehavior_get_HP_m55783898D3CEC34B25C367AA586E319127EEE6CD_inline (GameBehavior_t14237376FB42C765555D0B797340AE2D64EBC04B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _playerHP; }
		int32_t L_0 = __this->____playerHP_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InventoryList_1_get_item_m6F18FBDEFFCC50ECFF59A73A588E4B5C8FC95D46_gshared_inline (InventoryList_1_t995EB216DE8A7372C1307AF1338E632A498AB4E5* __this, const RuntimeMethod* method) 
{
	{
		// get { return _item; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____item_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
