#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_SproutAnim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_SproutAnim.BP_SproutAnim_C
// 0x058C (0x07FC - 0x0270)
class UBP_SproutAnim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_03EB627F4C31D0339B5B888DF0CB3513;// 0x0278(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_218218A546BB90266FEFC8ADE06E967A;// 0x02A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_80C2EEF1489AA6A9F6B3BF8EC59A0D6F;// 0x02C8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BEDE9B5B4A32AEFD9C4943B1E8F5E4C7;// 0x02F0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7AAD6B3945CDF183EA121FB02C3D6D86;// 0x0368(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2FD93EA43CCF859040213A3D13F6E05;// 0x0388(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_92D1DD214BA1145F5111E5BE6E5D5DBB;// 0x0400(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_6DDD733B422063ADD11757AD4735B8B8;// 0x0420(0x0068)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_619F085A4A2D2A73D3D23F95D4C6E716;// 0x0488(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_791D6171414E77B05E71FEA5206F5FB2;// 0x04A8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_6979F738456F1B1029D419A5C69C1F2E;      // 0x0558(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_79860B6A4014053CA98D26889CDB7607;// 0x0578(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3CDFEACF4CE1A2ACDADC58A050AC2E8B;// 0x0598(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_101513C6454F1E16B1E9508BCBEADDB8;// 0x05B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9118B9334A32307C5806778687F0E621;// 0x06C0(0x0108)
	struct FVector                                     mScaleMesh_01;                                            // 0x07C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mSubmerge;                                                // 0x07D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	struct FRotator                                    mSproutRotator_01;                                        // 0x07D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mSproutRotator_02;                                        // 0x07E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mScaleMesh_02;                                            // 0x07F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_SproutAnim.BP_SproutAnim_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BP_SproutAnim(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
