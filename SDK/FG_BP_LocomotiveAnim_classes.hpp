#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_LocomotiveAnim_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_LocomotiveAnim.BP_LocomotiveAnim_C
// 0x1E21 (0x2181 - 0x0360)
class UBP_LocomotiveAnim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D3B97E3D470690B3FF0A57911A814EC1;      // 0x0368(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9936BE3745AB8A0705A60CA21F550B76;// 0x03A8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F360F4ED4612734E294966A2EE2C8BA5;// 0x04E0(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4AB8E98B4A84A03C49F1CCA32A94564D;// 0x0618(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6F7748C54923DEA6C625ECB7F5D22409;// 0x0658(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DF35E53444E83252B97ED4A89DDF4EE9;// 0x0790(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5795EE174196D9C2962BB999DF489E08;// 0x08C8(0x0040)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6459E6494A2B7C5DD85AA5AD90C183FF;// 0x0908(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63D4F62F4A17E11F0A7A569E03F5020C;// 0x09F8(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0458FCD941C259D155CF07A81D31CCFA;// 0x0A98(0x0138)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB4CC1BE4C618CD6146BE080CC7C5387;// 0x0BD0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_690F4FBF4BB0B2081030DB809CFCF8DF;// 0x0C18(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_529397FC4A88F612A00A378E05AEABE0;// 0x0C60(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6110D25D4D15AEE3B203789951C41D41;// 0x0CA8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C9F6E28A4C8EB25CE38412A08D32BBD3;// 0x0CF0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6B8D48A4D7D52237453198643EFAE5D;// 0x0D38(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DB4B4CC4013628B6AD1419F67D35596;// 0x0D80(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6366E78742771D5FBAC647B7F85D7292;// 0x0DC8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C694F07F45EC38B3E8C5BB973D04A73D;// 0x0E10(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B5A292B74A31BCDDEB23199DE6D80C29;// 0x0E58(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47645BFC44484F516BF3E69010DBA019;// 0x0EC8(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CF173ED0457B80A2937017971F366E85;// 0x0F68(0x00D8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EA299B4A469DB11641267EA6A1C68388;// 0x1040(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8003E9F044530A4C33CFA7BDAA68528C;// 0x1080(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_74C7A87A4813C9091E5554ABA27D9C49;// 0x1120(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF9A4157410E84CE95C1B1A477EAD778;// 0x1160(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AD6AA3C5453C0988E655E4B7B3CF5355;// 0x1200(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B0DD334546A8BF48DAAB83B90CCEC3E7;// 0x12A0(0x00D0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0869A48D4C1FF14870BED8A430E9C0D0;// 0x1370(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0E8320DA4947D0B8999AE988BFBEB431;// 0x13B0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B93225404FBE3B0CE5F8849FA69ED5CA;// 0x1450(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EC2990694D22CB69615548B099FA708B;// 0x14F0(0x00D0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5D28C93041742487964419AC80A1FF1F;// 0x15C0(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3BA6DBDC4450760A2F38C5B41B4DFDAE;// 0x1600(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_56CA3475458629C570C7168C19D69CD5;// 0x1670(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63F8D574438A51C0172CCE8F965909CB;// 0x1760(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DB2D43764CEA639C505DA7BB781CFDD9;// 0x1800(0x00D8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0C943B944E6DEBDE4C24909D3A66F5D8;// 0x18D8(0x0070)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2A127D054E35F9952D3657881E13ADDF;// 0x1948(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B5B28CBE40DA9DFC953C8388C4225965;// 0x1988(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EEFD7CEC447C305D1D3A428738351D86;// 0x19D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3507BAB74535EAE4A4B81EA2BB5ACBD4;// 0x1A18(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C862F8F84B8DF9675A2148AB7350EE69;// 0x1A60(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A96A39F4862B9AAC01414B9CE5B1380;// 0x1AA8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7230A1A849532CA3804332B2F26D5A84;// 0x1AF0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B569AF9400782FCBC07C6BDD5F5A656;// 0x1B38(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_730E72B74EAA090C1EF4DA944C9F3376;// 0x1B80(0x0038)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2B1FBD304C0F4F99BF9B5C826E340E65;// 0x1BB8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A13A22F491546644F3E4CA6C2D90F81;// 0x1BF8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A535BFC64C9615BCC4845C8BC0489F54;// 0x1C98(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_62B9C5394082B1BE434744882451A60A;// 0x1CD8(0x0070)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3AB9CBE74A9565EBACDD1E88998955D9;// 0x1D48(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D8936274E6358BC1EB6049C819C5CD0;// 0x1D88(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E820481344213137B4CA21A592FB8518;// 0x1E28(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_738A46C14C9EAE8BD01590BBD76A84D6;// 0x1E68(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AA9A8BDE49F4EE24A1714CB5522199DC;// 0x1F48(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F8FFA57540C56A3068ADB4886772D950;// 0x1F88(0x00E0)
	struct FRotator                                    mFrontBogieRotation;                                      // 0x2068(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mBackBogieRotation;                                       // 0x2074(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mFrontConnectorRotation;                                  // 0x2080(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mBackConnectorRotation;                                   // 0x208C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mFrontConnectorTranslation;                               // 0x2098(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mBackConnectorTranslation;                                // 0x20A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mBrakeForce;                                              // 0x20B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mDeltaTime;                                               // 0x20B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 mBrakeCurve;                                              // 0x20B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mForwardSpeed;                                            // 0x20C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mAirBrakeForce;                                           // 0x20C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mHandBreak;                                               // 0x20C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mTrackCurvature;                                          // 0x20CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mThrottle;                                                // 0x20D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsMoving;                                                // 0x20DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x20DD(0x0003) MISSED OFFSET
	float                                              mTractiveForce;                                           // 0x20E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x20E4(0x0004) MISSED OFFSET
	class UFGLocomotiveMovementComponent*              mLocomotiveMovement;                                      // 0x20E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mHandBrake_01_VFX;                                        // 0x20F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mFrontBrake_01_VFX;                                       // 0x20F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mFrontBrake_02_VFX;                                       // 0x2100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBackBrake_01_VFX;                                        // 0x2108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBackBrake_02_VFX;                                        // 0x2110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            mBrakeVfxArray;                                           // 0x2118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               mBrakeSocketNameArray;                                    // 0x2128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFGRailroadVehicleMovementComponent*         mRailroadMovement;                                        // 0x2138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            mSteamVfxArray;                                           // 0x2140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               mSteamSocketNameArray;                                    // 0x2150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    mFrontSteam_01_VFX;                                       // 0x2160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mFrontSteam_02_VFX;                                       // 0x2168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBackSteam_01_VFX;                                        // 0x2170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBackSteam_02_VFX;                                        // 0x2178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               mAG_ThrottleZero;                                         // 0x2180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_LocomotiveAnim.BP_LocomotiveAnim_C");
		return ptr;
	}


	void CalculateAnimGraphValues();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_TransitionResult_529397FC4A88F612A00A378E05AEABE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_TransitionResult_6110D25D4D15AEE3B203789951C41D41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_TransitionResult_F6B8D48A4D7D52237453198643EFAE5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_TransitionResult_690F4FBF4BB0B2081030DB809CFCF8DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_TransitionResult_9DB4B4CC4013628B6AD1419F67D35596();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_TransitionResult_6366E78742771D5FBAC647B7F85D7292();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_TransitionResult_C694F07F45EC38B3E8C5BB973D04A73D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_TransitionResult_CB4CC1BE4C618CD6146BE080CC7C5387();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_SequencePlayer_63F8D574438A51C0172CCE8F965909CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_TransitionResult_3507BAB74535EAE4A4B81EA2BB5ACBD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_TransitionResult_C862F8F84B8DF9675A2148AB7350EE69();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_EnterHandBrake_01();
	void AnimNotify_KillHandBrake_01();
	void AnimNotify_EnterHandBrake_02();
	void AnimNotify_KillHandBrake_02();
	void AnimNotify_TriggerhandbrakeVFX();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BP_LocomotiveAnim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
