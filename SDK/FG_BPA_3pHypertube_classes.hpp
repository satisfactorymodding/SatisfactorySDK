#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_3pHypertube_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPA_3pHypertube.BPA_3pHypertube_C
// 0x04BC (0x085C - 0x03A0)
class UBPA_3pHypertube_C : public UFGAnimPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_1FD29D504F868571A2FFA6988F06A943;// 0x03A8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_166BA3F744D332F419FFE3AC150C9734;// 0x0448(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5C4B5C974B6B90A40A0F5A92E53694BF;// 0x0528(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_645B52D84533B43AA4034899DF08C875;// 0x0630(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F9B57C11455632F375178EB70A9C0FAB;// 0x0650(0x0020)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_AFAE58634AF49C42DB2DC6B8EFAEE0FC;// 0x0670(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_Root_BEB385214CE50D69304A95BA3D993C2C;      // 0x07F8(0x0020)
	float                                              mHypertubeSpeed;                                          // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mHypertubeLastDirection;                                  // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRotationLagYaw;                                          // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mDeltaTime;                                               // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mHypertubeRotation;                                       // 0x0828(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mHypertubeRotationLast;                                   // 0x0834(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mHypertubeRotationDelta;                                  // 0x0840(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mHypertubeLastDirectionZ;                                 // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRotationLagPitch;                                        // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mCurrentTime;                                             // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRandAngle;                                               // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_3pHypertube.BPA_3pHypertube_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BPA_3pHypertube(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
