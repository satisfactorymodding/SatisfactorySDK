#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_ResourceSink_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPA_ResourceSink.BPA_ResourceSink_C
// 0x0509 (0x0E79 - 0x0970)
class UBPA_ResourceSink_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_86643695449C7820998776BD503A924C;      // 0x0978(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F60FD6040718093E3DF77946EBC0460;// 0x0998(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67ECCE7A444B03234D17B4A3763E2DF9;// 0x09C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C5A94AE40C3D7020742998831888331;// 0x09E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD410CC4425D42E6F940B38BA2545162;// 0x0A10(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43B6D48E47A94A344127D89731E7DFA1;// 0x0A38(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E922E0C7468ABDC36319DDA787DB2F8F;// 0x0A60(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_141BD1504064025099C2079A903E9C4A;// 0x0A80(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_06548DE040A364CB09C9079E053D1181;// 0x0AA8(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8C0B155E4B802E0EFDF9439740029A9B;// 0x0AC8(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EEFB1FCB4001CD35EADB2FAD133FF1C2;// 0x0B10(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DBC45E72451832770D043F83FE54C571;// 0x0B30(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_831F21644CC3A610730BC5A1E5542219;// 0x0BA8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B081EC744BD156258CEF738318CAC6CE;// 0x0BC8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3FA14854485D982BC8104BA7FEA4CED;// 0x0C78(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_90364935404BDF925B5FE487BCB376E9;// 0x0CF0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DABC15434FF10BDBD41A028BC322EF02;// 0x0D10(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4F06D64D489F0ECC441A4DB3A8E56F88;// 0x0DC0(0x00B8)
	bool                                               NewVar_1;                                                 // 0x0E78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_ResourceSink.BPA_ResourceSink_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_ResourceSink_AnimGraphNode_TransitionResult_1C5A94AE40C3D7020742998831888331();
	void AnimNotify_SinkEnteredProducingState();
	void AnimNotify_SinkLeftProducingState();
	void ExecuteUbergraph_BPA_ResourceSink(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
