#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_TrainDockingStation_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_TrainDockingStation.Anim_TrainDockingStation_C
// 0x0D2B (0x108B - 0x0360)
class UAnim_TrainDockingStation_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8EAF874A442BF6966DA940AFA8A36562;// 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74ECF724409FAC11D74545B086B7B846;// 0x03B0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_13336352489EA524C7C3A0B8F4A8F65F;// 0x03F8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B9C097444B0FFB109FBAFE9905E6B918;// 0x0468(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C34F6B9949B6382D19921EA5D9780765;// 0x0538(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_609A23C64A8B891FB23ACFBC0C57B1F9;// 0x0608(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_98943DB244602EDDC01811A3BA3C9410;// 0x06E8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3909E494C99ACC905FB9CB576FB3F93;// 0x0788(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C45FD1E84132FECDBCEE029B69518FCF;// 0x0828(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21902A3A4CF5FEE38F1446A591F9BEFD;// 0x08C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7B5B6FE14B701C1854097684FF64CE46;// 0x0968(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7BFD640A484322C9F3E277B9F5FB67EC;// 0x09A8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D0B659A041B3D51C01DF608DF397C9B8;// 0x0A18(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_90A8CE2E4BB8E0DEE0E445AAF1BD1D3D;// 0x0AE8(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_040583FA40B242ADF87B8B8F76DBF9D5;// 0x0BB8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_217465314DEDE72EDAFE71BED43689B3;// 0x0C98(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_448ACD4F4C13463C27DE65B7E9BA4AAE;// 0x0D38(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A75FCC744AFE798711B8C1BE62311FA1;// 0x0DD8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0906509342A8D34B5FAC3998C080B798;// 0x0E78(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C6E394F84AAE843BE3C4009CDC395DB4;// 0x0F18(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E9B62A62473FA92BB5F91C93635560DA;// 0x0F58(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_3D57FFBF494021190E489E8BA90B9A5B;      // 0x1038(0x0040)
	bool                                               mHasPower;                                                // 0x1078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1079(0x0003) MISSED OFFSET
	struct FVector                                     mCartTransform;                                           // 0x107C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ETrainPlatformDockingStatus                        mDockingStatus;                                           // 0x1088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsFullLoad;                                              // 0x1089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsFullUnload;                                            // 0x108A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_TrainDockingStation.Anim_TrainDockingStation_C");
		return ptr;
	}


	void CalculateAnimGraphValues();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_TrainDockingStation_AnimGraphNode_TransitionResult_74ECF724409FAC11D74545B086B7B846();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_TrainDockingStation_AnimGraphNode_TransitionResult_8EAF874A442BF6966DA940AFA8A36562();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Anim_TrainDockingStation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
