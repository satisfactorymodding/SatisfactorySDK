#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_3pChainsaw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_3pChainsaw.Anim_3pChainsaw_C
// 0x038C (0x05FC - 0x0270)
class UAnim_3pChainsaw_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C0B6EFA4455EB71334FA669C04623ABF;      // 0x0278(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20C85B554421CEEBABB57BA91BD5DE2C;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_120678AF44707B76E294ABA1A2D963B9;// 0x02E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3DAFC12A474129464341108FB3141E39;// 0x0310(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FA05044B4261E0DE8B66D6BD2D3EC944;// 0x0388(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7644957446EBBF866C88C08EC109F69C;// 0x03A8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A47CB03A4872455F90E03F8B7700894C;// 0x03F0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2CF818B14EE2BFED73E9BAA2FF6DEBF8;// 0x0490(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_ADC654C6411CD6C6F407CBAA655DBEA1;// 0x0508(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_62EDA5E14D70E445AB52D8B5CC1253C8;// 0x0528(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_CB7274804EBE83EA405623B0D4B77274;      // 0x05D8(0x0020)
	bool                                               mIsEquipped;                                              // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsSawing;                                                // 0x05F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsAttached;                                              // 0x05FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsSawingAttached;                                        // 0x05FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_3pChainsaw.Anim_3pChainsaw_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Anim_3pChainsaw(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
