#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_GeneratorNuclear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_GeneratorNuclear.Anim_GeneratorNuclear_C
// 0x0984 (0x12F4 - 0x0970)
class UAnim_GeneratorNuclear_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_64A2C3FC465386BD9890F1A9BEC44056;      // 0x0978(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_04E9E8AC4C6377825260009FA06C1E38;// 0x0998(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_381AFD3D445B357094D00C9D7ACD5416;// 0x0A50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B3E256D456E0F9B3BD55396E2A50838;// 0x0A78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D19D97FD46AD70B301193AB7482BE1F9;// 0x0AA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_00A12D0F4457A14F9A12B1832BD38333;// 0x0AC8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FA87CC664C70B705B7E978A57881B861;// 0x0AF0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_00B5EE2F4E2CCB6232DF0AB383034859;// 0x0B68(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EAA5888F4D776EA6688A7793FDCBCC6A;// 0x0B88(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_239F46314BC98DD1BE5C79B99CD44DC4;// 0x0C00(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9EE4B2A946A493558DAFD99F496AA358;// 0x0C20(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_422E21404DADDFC7FB3C13A78CCC81C5;// 0x0C98(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A613AC8F469820CA71650BB994ED638B;// 0x0CB8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC03511646190EC9CDB62DAA7599B5D2;// 0x0D68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E6E9EF074C3766C54A6BE3B4074A6CD8;// 0x0D90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A335C5B54ADCDB7A81F481B7677DAEA6;// 0x0DB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86BC0D5F41D8A25060B1EBA2EAB1C6D4;// 0x0DE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7FC9B7EB4A4BF5CF36A9C6BD4BDBE8CD;// 0x0E08(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB0C3885437818A8A58491B81F6050DE;// 0x0E30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F48793CB44DFE9E86F633385C18DBCE4;// 0x0E58(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0878080745480D8F0463F8825D34F949;// 0x0E80(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_60C7FE8842FCF1E778FB72A42AF25B62;// 0x0EF8(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0B6122934F53AD7261CA929C5EF736D3;// 0x0F18(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_07560C9042619EBD26BE818A968C1891;// 0x0F60(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0112AFF94A27A72315BB95BC5C3F1030;// 0x0F80(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_06FA4FE64528F1E120C46AA8797E0E97;// 0x0FF8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_074BBC2E40A56669543285B3F2547B33;// 0x1018(0x0078)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_E75392D54520E5A723B8919A8EC992B8;// 0x1090(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_763A3468416DEB7C89B533993FD381C7;// 0x1130(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4361B0784B2B5CF26016B9B5DB96DD84;// 0x11A8(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_BA7EA3A24FAA4A92E0EBDC96A644F624;// 0x11C8(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_60FAF1A8430B77BBA13EB590A522B6C3;// 0x1210(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D22CAA7C405388FB3919259B0CB58EA8;// 0x1230(0x00B0)
	bool                                               mReadyForReload;                                          // 0x12E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x12E1(0x0003) MISSED OFFSET
	float                                              mReloadTimer;                                             // 0x12E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                mTimer;                                                   // 0x12E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                mRandomReloadAnim;                                        // 0x12F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_GeneratorNuclear.Anim_GeneratorNuclear_C");
		return ptr;
	}


	void SetupReloadTimer();
	void ReloadTimer();
	void AnimNotify_GenNuclearEnteredReloadState();
	void AnimNotify_GenNuclearStartupVfx();
	void AnimNotify_GenNuclearShutdownVfx();
	void AnimNotify_GenNuclearEnteredProducing();
	void AnimNotify_GenNuclearLeftProducing();
	void ExecuteUbergraph_Anim_GeneratorNuclear(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
