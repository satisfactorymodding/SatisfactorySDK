#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_GeneratorGeoThermal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_GeneratorGeoThermal.Anim_GeneratorGeoThermal_C
// 0x0230 (0x04A0 - 0x0270)
class UAnim_GeneratorGeoThermal_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C1ABFB86499F00687712BF9FCA9AB494;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8EEE8F6B439AC5D7ECE36EB60B3511EE;// 0x0298(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB431E53464B360DDE4437836923CFCB;// 0x02C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0948BF3148C7AE9C890C5D9551833FB9;// 0x0338(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3096A41B4F67A59C0DB3C6A07204B54E;// 0x0358(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B6D2B3A446F08F832B371A8F8EA0F46C;// 0x03D0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_85F1BD4D46ACDED06A44EBB5528E3CD8;// 0x03F0(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_GeneratorGeoThermal.Anim_GeneratorGeoThermal_C");
		return ptr;
	}


	void ExecuteUbergraph_Anim_GeneratorGeoThermal(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
