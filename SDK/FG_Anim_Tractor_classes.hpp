#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_Tractor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_Tractor.Anim_Tractor_C
// 0x3484 (0x3DB4 - 0x0930)
class UAnim_Tractor_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E72309A94A71903ED9418FB4ED44324F;      // 0x0938(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_0B30197544399A027A39A6AF8DB72192;// 0x0958(0x0010)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_D26B8A9E44B68C565CAEC4827A6FDDEA;// 0x0968(0x00E0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2C058E3040CC45EB1DA91C94636B2340;  // 0x0A48(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_DDA826254C479563D33383AF36EA7F75;  // 0x0B38(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_258B24B54AD6DCABAFB142BD913447B4;  // 0x0C28(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_AC0FD4B847678D530162F68C903F2512;  // 0x0D18(0x00F0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0E08(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_D2E355D9496AEFA27F7C02842490BA1B;    // 0x0E10(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_8F632AC64DC13E8A1ACE669A2E1FCD33;    // 0x0FC0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_DF1399F845A88C8BA996039E6C342B77;    // 0x1170(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_44CA725B43D2D66AD7A6F3B3D3F9D9A9;    // 0x1320(0x01B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_526CDD7946EBEDE5084C1CBE9BC4DE57;// 0x14D0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EC1CAF97464D6DE81FC0748046B0E972;// 0x14F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CADC6C414E31A4306180BFAF558AD876;// 0x15F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_099B4C1F49B2CD259B77A6ACDF48E461;// 0x1700(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_ACF79F3C49B236CDD0ADDEBA76A035CB;  // 0x1808(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_91F247B34DFC414F87DFF7BDE87E4917;  // 0x18F8(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_F67D72C6445015D692D064960122D692;  // 0x19E8(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E706763A48F5544FB3EEBCA7F03C609B;  // 0x1AD8(0x00F0)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1BC8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F55B2D9C4B19240522D2F89893D91AFD;    // 0x1BD0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_316F6AD24490E0FAE1348EBA9245A5CD;    // 0x1D80(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_5832A47B46D909E7E69F45A40350AA06;    // 0x1F30(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1BF772054CF4BCACEC67EF88AB23E33D;    // 0x20E0(0x01B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_12B7511B43BA7335C97AED8268933CC5;  // 0x2290(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_02C67E47446C46AD15BF9383E207CA0E;  // 0x2380(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5C560A7B49D33517A67B56858C6B1BA7;  // 0x2470(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C2D4A9E143F6CAD985D868B7490B93C6;  // 0x2560(0x00F0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C4803E3A4BE2E23450D62BB59C37A9CF;    // 0x2650(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1B2B76BC4D99D2F94BC9E7BABBABFA07;    // 0x2800(0x01B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_7B63A77942B82146A55C32B043FE456B;  // 0x29B0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E2B28CF640E76D8FDE66F58F6CF4A00F;  // 0x2AA0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_D0A42B354954013C8D648C964A57A2EC;  // 0x2B90(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_43DED6E34A08D652EA9F87AEA8BA5D20;  // 0x2C80(0x00F0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_BF1858854289A25C5D57E5A5C58AFBA6;    // 0x2D70(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_21711EA9400F59164772E88CF531AF61;    // 0x2F20(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_965608194FB395861B54FA841D0665CD;    // 0x30D0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_FBF16CCF4EA0D5D9456A33A61AA05744;    // 0x3280(0x01B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_A287FEA44F4ACAC68EA14EA86F7CD8FF;  // 0x3430(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C10A7E27431AE5492391E582FC7642ED;  // 0x3520(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_36BC3B5A494E043171A684AE86C1F05C;  // 0x3610(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_4855AB50483286FB600096BB6D95B087;  // 0x3700(0x00F0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_7501C9324DE4FCA660D95A812570C808;    // 0x37F0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_6559B066470B8F22F4D5FF84308FD748;    // 0x39A0(0x01B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A85BB8C74E4043057D8B81BC46B1335E;      // 0x3B50(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F234443F487279F5A1472D8132607B8B;// 0x3B98(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_795CCAC241EA813D8222A9B1D16FE1AE;// 0x3C50(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8A385FB94A31CC2E93F6ADB21747CF0C;// 0x3D08(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3D07D3574C39D5CAB2C2BC9079F88CFA;// 0x3D30(0x0028)
	struct FRotator                                    mPassengerRotation;                                       // 0x3D58(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mSteeringWheelLocation;                                   // 0x3D64(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mSteeringWheelRotation;                                   // 0x3D70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSteerAngle;                                              // 0x3D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mThrottleLocation;                                        // 0x3D80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mVelocity;                                                // 0x3D8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSpeed;                                                   // 0x3D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mVelocityXY;                                              // 0x3D9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mVelocityZ;                                               // 0x3DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mVelocityXYLastTick;                                      // 0x3DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mVelocityZLastTick;                                       // 0x3DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mVelocityZDiff;                                           // 0x3DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mVelocityXYDiff;                                          // 0x3DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_Tractor.Anim_Tractor_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Tractor_AnimGraphNode_ModifyBone_CADC6C414E31A4306180BFAF558AD876();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Tractor_AnimGraphNode_ModifyBone_099B4C1F49B2CD259B77A6ACDF48E461();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Anim_Tractor(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
