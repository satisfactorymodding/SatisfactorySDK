#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_ConstructorMk1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_ConstructorMk1.Anim_ConstructorMk1_C
// 0x0991 (0x1301 - 0x0970)
class UAnim_ConstructorMk1_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EE25C9DE4FCC24B6648207984D8104F5;// 0x0978(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CEFF83543FDFC2AA7280490EC14ED04;// 0x09A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56A39FA24B70F097CAE83FB5EF656952;// 0x09C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F5FD74CF4665DC291CF9D7B1F5DE98AA;// 0x09F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B4F6D3BF43B2690B477B0E907548A929;// 0x0A18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E6ABA23E42EA726002BC46939CEDDF17;// 0x0A40(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E36F19304B3E29B2391B7BB7F3DA8B19;// 0x0A68(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BEB334904D31D35791B45EB6B32A1E99;// 0x0AB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3FAE7C4247011BD0A3130C8B850E7B46;// 0x0AD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E948DF4B42FC43EBB614A98201F5601D;// 0x0B48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_278E0C114ADE9B04C6D7C091A85F7CD5;// 0x0B68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_608000764B46C8C221199FAD05152414;// 0x0BE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B6B3E67C4FC0B9537DF900A071C952B5;// 0x0C00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E03E3DCF4006B2D497BA45AAA31F28FD;// 0x0C78(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E8E8FAF342304B8867452F922EFE4483;// 0x0C98(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_F30834C444728AA30EBBF5AA5E0F976C;      // 0x0D48(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0D68(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_172D51874A133A909731388D7A105107; // 0x0D70(0x0550)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_170139A24C063FA857B9F688373D3AA8;// 0x12C0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B6DE2BAE4D493B84DE5920828DDF505E;// 0x12E0(0x0020)
	bool                                               mIsIndustrial;                                            // 0x1300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_ConstructorMk1.Anim_ConstructorMk1_C");
		return ptr;
	}


	void ExecuteUbergraph_Anim_ConstructorMk1(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
