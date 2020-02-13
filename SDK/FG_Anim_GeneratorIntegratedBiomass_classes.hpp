#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_GeneratorIntegratedBiomass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_GeneratorIntegratedBiomass.Anim_GeneratorIntegratedBiomass_C
// 0x0770 (0x10E0 - 0x0970)
class UAnim_GeneratorIntegratedBiomass_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CB5E9A424AF2E2B8241B7EA158B7101B;      // 0x0978(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A634FF249C90175F5A801AAA2FB7F5B;// 0x0998(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01B8E23E41BA28E071D573B7545540AC;// 0x09C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFA14BD14A8E05B23A2215A9FCF657E4;// 0x09E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61831FBA44A273F8E0BCAF9797CD6B83;// 0x0A10(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9C4296D14683FB0FD5054FB017F193E3;// 0x0A38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7E8C7FA343B4673A910EACB25ED8AA46;// 0x0AB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD6ECC8247B32203BB4484B15923E27D;// 0x0AD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A0C95B6E4F0DFF54B3856990B7B3466E;// 0x0B48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_719F35654FAB14809E4602B7F74A14B7;// 0x0B68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_931C1F47467EE3B44A6DB6A3F893E56C;// 0x0BE0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D9FC26C5452E195C597FB8AF9EF26EA4;// 0x0C00(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1CD6A35440A2655465CBAEAD1D82708F;// 0x0CB0(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0397B31A4CE95BBD05660C9D8BAF80F8;// 0x0D68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8CDAD8E46DF96B6F7B7839325962335;// 0x0D90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E14BDD4C4E2F9B1AE8F518AFB5A43123;// 0x0DB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EFF86C2F40F14BB47465C888CBD1B4FA;// 0x0DE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6FA0F0DF4EFC06392422EE8881610C8B;// 0x0E08(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9DBABEB84E3D5ED9F8A666B2184B581E;// 0x0E30(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_97C366F74469F7D0781428AFA269E847;// 0x0EA8(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E4EA7D00415428AEEC6077BDF698E65D;// 0x0EC8(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E57447C2497060FA79CD35B212C8EA79;// 0x0F10(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EDBF0B9D46153FF8CF1C288E90D55748;// 0x0F30(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E328BE4B482DC4ED7C48838298AADA17;// 0x0FA8(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B4DF167C43E5FC69DEC094B30E0DD5E1;// 0x0FC8(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FAEA9B7248C76CC34EF3928D27196247;// 0x1010(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4F75FCD54714E6A3095B05863A8E69E0;// 0x1030(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_GeneratorIntegratedBiomass.Anim_GeneratorIntegratedBiomass_C");
		return ptr;
	}


	void AnimNotify_SteamFxNotify();
	void AnimNotify_SteamFxNotify_02();
	void AnimNotify_SteamFxNotify_03();
	void AnimNotify_SteamFxNotify_04();
	void AnimNotify_SteamFxNotify_05();
	void AnimNotify_SteamFxNotify_06();
	void AnimNotify_BioGenEnteredProducingState();
	void AnimNotify_BioGenLeftProducingState();
	void AnimNotify_BioGenEnteredFunnelPoweredState();
	void AnimNotify_BioGenEnteredFunnelShutdownState();
	void ExecuteUbergraph_Anim_GeneratorIntegratedBiomass(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
