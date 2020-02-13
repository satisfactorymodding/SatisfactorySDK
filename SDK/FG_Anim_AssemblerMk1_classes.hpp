#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_AssemblerMk1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_AssemblerMk1.Anim_AssemblerMk1_C
// 0x03F8 (0x0D68 - 0x0970)
class UAnim_AssemblerMk1_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E99EF37543BC9BEE7259B7A04276781C;// 0x0978(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8FA2DFAB4BE52C1147B22ABACB8EDBAB;// 0x09A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75337FF64C7BF9E85FCD219C4EE5BE12;// 0x09C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA27F5364EEE23A8397146AC807D7382;// 0x09F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6CF0064D49FFA3F68E2157B24CA90C53;// 0x0A18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_365546E5468F7D51DA09588D93F38BF3;// 0x0A40(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5027BAA6431E22FD1996349AC52F508E;// 0x0A68(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B6E125C743DA4FA490A80794B6FE8395;// 0x0AB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F5CBA174512BE052C68FDBFE9E8F1EE;// 0x0AD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_38E74F01422233D67B4BF484A0377E4A;// 0x0B48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F3566A874DF4FDFBF2575783CBC26D17;// 0x0B68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DAD4D0694A618324BDAB408B12DC387F;// 0x0BE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40C151D74ADB3B29325C05934D92531B;// 0x0C00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_75F60A1F44B9911CACF32A9FAFD663BF;// 0x0C78(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2462B34F48945A7F41BC2DB0A89E963A;// 0x0C98(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_7FCA738941F3AD84718289AD86A264A9;      // 0x0D48(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_AssemblerMk1.Anim_AssemblerMk1_C");
		return ptr;
	}


	void ExecuteUbergraph_Anim_AssemblerMk1(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
