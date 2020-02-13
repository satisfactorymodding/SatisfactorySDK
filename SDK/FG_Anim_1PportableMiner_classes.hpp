#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_1PportableMiner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_1PportableMiner.Anim_1PportableMiner_C
// 0x0631 (0x08A1 - 0x0270)
class UAnim_1PportableMiner_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_94BF3D69485F1BDA691945AEDE6F098E;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B392C0124773DC7F9E6D158EE884C586;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9303EDE44A5AAF546D17639FD5DB9340;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2D899F194CC5AB60994BBBB3656A69C1;// 0x02E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DE80A22C462AAD6D4AF0FAA2C35116D6;// 0x0310(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FEB68251477AF8323B3C37B67C6B8035;// 0x0338(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88075AD545F4ED1673A522BFA69A3FCF;// 0x0360(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18B9D1964A9FB7AF5749B89C511DA245;// 0x0388(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_BA6F90A8470AD1E89AB12BBEF20ABF61;// 0x03B0(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DAF4981E4B54D8E6892513BC2C3282A0;// 0x03F8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D3F4C8F0451A784478AD31AAFAD33DCB;// 0x0418(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8E5CD7EA4D49B23638C22F85A7B06133;// 0x0490(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_784E3D5E4E2850538D163BA309393C4F;// 0x04B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1009A665402C5052A95F3981BFF70542;// 0x04D8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F7BE25E84ED19F677421E4B3CD075D3D;// 0x0500(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EC0E4B614015CECAAB55C2AC0AD2E642;// 0x0578(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6FC2C88241B960648E5260973462C8DB;// 0x0598(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4645A75B4B717EC218EC9FAE4D66F29B;// 0x0610(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_112F9D3348C25F98EE5707AD5BD5A697;// 0x0630(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6A94D1994C9BDBD826899797C4EAC97D;// 0x06E0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3CCB3324488125C702F657A6B349FD99;// 0x0700(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6BDD87A648D8B88DD24CB0B043C389A9;// 0x0778(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_98D1CA854E6B842D7A8F9982F6FEB5E1;// 0x0798(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6A35F4A94CA6F79C41FE53826D808744;      // 0x0848(0x0048)
	float                                              mSpeed;                                                   // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSpeedZ;                                                  // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCharacterMovementComponent*                 mCharacterMovementComponent;                              // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         mMovementMode;                                            // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_1PportableMiner.Anim_1PportableMiner_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_DE80A22C462AAD6D4AF0FAA2C35116D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_2D899F194CC5AB60994BBBB3656A69C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_FEB68251477AF8323B3C37B67C6B8035();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_88075AD545F4ED1673A522BFA69A3FCF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_18B9D1964A9FB7AF5749B89C511DA245();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_9303EDE44A5AAF546D17639FD5DB9340();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_784E3D5E4E2850538D163BA309393C4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_1009A665402C5052A95F3981BFF70542();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1PportableMiner_AnimGraphNode_TransitionResult_B392C0124773DC7F9E6D158EE884C586();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Anim_1PportableMiner(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
