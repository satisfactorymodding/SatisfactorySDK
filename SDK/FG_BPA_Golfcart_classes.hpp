#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_Golfcart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPA_Golfcart.BPA_Golfcart_C
// 0x1359 (0x1C89 - 0x0930)
class UBPA_Golfcart_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7BADADB64DC206717865A7AB1E7A81B3;      // 0x0938(0x0020)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_682D302F42D0AE4CD7E4E1BAE395C1B5;  // 0x0958(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_7317CB4346F507621D2F24BA188D74A6;  // 0x0A48(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_65004ACB4E3F6861938BF4891B81C6B8;  // 0x0B38(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C63DFA7E401851355618F6AD661F9EEB;  // 0x0C28(0x00F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4B9105EB402769DF4212B9A6503E445C;// 0x0D18(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0D38(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1F205CD94123DC122EE140AC07C4916C;    // 0x0D40(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1B51DD554D1ECD760C66528ADAFBE1FD;    // 0x0EF0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_94C3B4E74DC8DA23B5E4E596FF600135;    // 0x10A0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_880A047D459B2D60C3484BB5DED1D370;    // 0x1250(0x01B0)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_01CB10D141BDAC7BCDEC129323B37CC1;// 0x1400(0x00E0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_DA52AAA744B90C54B0BD43980E756AAA;  // 0x14E0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C55A7332448E06DB90052083C3700D90;  // 0x15D0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_D343B10E4DF119E964D906B89264D17E;  // 0x16C0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B8824787490F3984FE10F6A4581DC7D0;  // 0x17B0(0x00F0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EE0213374DB31C8FE27B01AB3428717D;      // 0x18A0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_91BFF3FC4A61E789C32C7C9463460A76;// 0x18E8(0x0108)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_6823E77A479E1A19F52F6EBBABEAA4F6;// 0x19F0(0x0010)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_510C6B2C4DCA6E0FDC370E813A47AA95;// 0x1A00(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_33C598AE49E524F7DC20A284FE9A8C06;// 0x1AA0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_DE9412574A23CDD3855F26B476A1DF9D;// 0x1AE8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_438EEB6445BBB7CD254714B45B729C25;// 0x1B30(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3154B63E46E612ED7243869285190959;      // 0x1BE8(0x0048)
	struct FRotator                                    mSteerAngle;                                              // 0x1C30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsHonking;                                               // 0x1C3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1C3D(0x0003) MISSED OFFSET
	struct FPoseSnapshot                               NewVar_1;                                                 // 0x1C40(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USkeletalMeshComponent*                      mGolfCartMesh;                                            // 0x1C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               mIsDrifting;                                              // 0x1C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1C81(0x0003) MISSED OFFSET
	float                                              mCheckValueForBurnOut;                                    // 0x1C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsBurningOut;                                            // 0x1C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Golfcart.BPA_Golfcart_C");
		return ptr;
	}


	void SetBurnOutSoundParameters();
	void SetDriftingSoundParameters(float* SteeringInput);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_Deactive();
	void AnimNotify_Activate();
	void AnimNotify_PlaySirenSound();
	void AnimNotify_StopGolfCartSirenSound();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_BPA_Golfcart(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
