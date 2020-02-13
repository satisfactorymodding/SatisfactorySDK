#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_GeneratorFuel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_GeneratorFuel.Anim_GeneratorFuel_C
// 0x0340 (0x0CB0 - 0x0970)
class UAnim_GeneratorFuel_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5E84AD75461F278ED3FBE2975E6424DF;      // 0x0978(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26125A344B9DED34195BDEB37E7D23E5;// 0x0998(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F97B320E45E0C9E565BA47BFFFC7484F;// 0x09C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB02B87E41305029B6C4529024011E0D;// 0x09E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4B3DD684A170E4A4EE4A089E52E7C30;// 0x0A10(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10A4F85D4EB0F8DAD2904D987D832A56;// 0x0A38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13D8E6B14D7478D0CB72599C109BBD12;// 0x0AB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB2D152B46A297F5491322A150C6D863;// 0x0AD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A5ED11AF46ED5D262EBB99A5B77DC4C4;// 0x0B48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ADDF8C414177EAB5E999C999C0891FC7;// 0x0B68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8BA49C9E4BAE6CBA5CB85E84F16970F3;// 0x0BE0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DCDA3E0546A1561350A3C39D6C32A6AB;// 0x0C00(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_GeneratorFuel.Anim_GeneratorFuel_C");
		return ptr;
	}


	void AnimNotify_FuelGenEnteredProducingState();
	void AnimNotify_FuelGenLeftProducingState();
	void ExecuteUbergraph_Anim_GeneratorFuel(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
