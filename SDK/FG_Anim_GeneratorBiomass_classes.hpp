#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_GeneratorBiomass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_GeneratorBiomass.Anim_GeneratorBiomass_C
// 0x0788 (0x10F8 - 0x0970)
class UAnim_GeneratorBiomass_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B0A1A9734B6AD698F1CC96B84E80E2D1;      // 0x0978(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1617BEC2426F4BC70FB70A8BE7A712F7;// 0x0998(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_279239284AD911AD6AC2B1BED4851122;// 0x09C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24E56DBB4C9CB310B87E15AC34FA2026;// 0x09E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37B6A3A14ECFCC343640839E675CE96C;// 0x0A10(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0C8C552E4E287DB760E798963A4A3A89;// 0x0A38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E9E569944FD4DF6C62CD01976EB8A380;// 0x0AB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C99B07D2448770B3F327DEA5D0DE1957;// 0x0AD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6E6347B34B9B3EABCEA699BFCE61D1F7;// 0x0B48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2ED3BC44427082C2C1A5579744016E05;// 0x0B68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6A00FA4D413AD6497191BCB354C5E32C;// 0x0BE0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E17CE83246E58487C6EFD0BC6A5D5D98;// 0x0C00(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D63A06BE496AC1D69D0BA39B076DAF1E;// 0x0CB0(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DB3A1354E05078F32C43EA5689ABFD6;// 0x0D68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_200821834ED7CC79F3EAFA9DCC5FD9C9;// 0x0D90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B189C36454C9859982E0C952C56A826;// 0x0DB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D206BAAD410EBD238A49AEAAE2F59069;// 0x0DE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3A05BC8479337B7F6A46E8AAF268913;// 0x0E08(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45AF666A457473E9C0557F9298AF579A;// 0x0E30(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FCD13EA94F2AE3A2B73CA7AFB025E906;// 0x0EA8(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6A1ABC33463538814DBA7D9D13568111;// 0x0EC8(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DDC49F93479E0FC5608AD6AE04C23D13;// 0x0F10(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7ED2EA3F474D1913E396CAAB641887E5;// 0x0F30(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D0DE9B8C4E14466939648EB638905C6C;// 0x0FA8(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7D86F5524F00865406F646AB27C1E7B6;// 0x0FC8(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D8ED64654CDCA01187903BAFD5426123;// 0x1010(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_421DAD204A348D134DBACFAD4FFF045D;// 0x1030(0x00B0)
	class UParticleSystemComponent*                    mBiogenVfx_01;                                            // 0x10E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBiogenVfx_02;                                            // 0x10E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mFunnelVfx;                                               // 0x10F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_GeneratorBiomass.Anim_GeneratorBiomass_C");
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
	void ExecuteUbergraph_Anim_GeneratorBiomass(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
