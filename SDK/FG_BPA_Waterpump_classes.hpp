#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_Waterpump_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPA_Waterpump.BPA_Waterpump_C
// 0x0170 (0x0AE0 - 0x0970)
class UBPA_Waterpump_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F432510D48B685A5B41B258EE4DB8E4E;      // 0x0978(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECB35B3943A6BC9EBAF7E2BC1467E162;// 0x0998(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C47A8C0B43DB35ABC9AAF6AE11116F39;// 0x0A10(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11C3BBDC4B18A44BF1B7D7B1EACF99C2;// 0x0A30(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Waterpump.BPA_Waterpump_C");
		return ptr;
	}


	void ExecuteUbergraph_BPA_Waterpump(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
