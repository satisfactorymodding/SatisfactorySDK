#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_Manufacturer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_Manufacturer.Anim_Manufacturer_C
// 0x0320 (0x0C90 - 0x0970)
class UAnim_Manufacturer_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_34BEE1004BAB1E02759880BA8DDF0132;      // 0x0978(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A2A40E2F4A25E541316E3683CDF11397;// 0x0998(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C13F04A4C8234018745B4AD800F5AC3;// 0x09C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FC4F30EF46D9FA75430332A792E26385;// 0x09E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7E788AB14930EC6EF65557B0409A6B16;// 0x0A10(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7B788DF1496E2F8075919298C928DD65;// 0x0A88(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF80BE9B45C60B62EA4491BEE831847C;// 0x0AA8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3EE6A65B4CCC46EE1AF952B01A290620;// 0x0B20(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD02ED894D4C057F7FED68AD09DEF416;// 0x0B40(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FD35FE444C3CCC27026D5A85DA28BB54;// 0x0BB8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_038444934A9C32A8198AE2907F4B471E;// 0x0BD8(0x00B0)
	class UStaticMesh*                                 Mesh;                                                     // 0x0C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_Manufacturer.Anim_Manufacturer_C");
		return ptr;
	}


	void AnimNotify_ManuEnteredProducing();
	void AnimNotify_ManuLeftProducing();
	void ExecuteUbergraph_Anim_Manufacturer(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
