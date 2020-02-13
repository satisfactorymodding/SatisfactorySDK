#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_BuildGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_BuildGun.Anim_BuildGun_C
// 0x0841 (0x0AB1 - 0x0270)
class UAnim_BuildGun_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B856B4AD456364A42CEC4E88B8294915;      // 0x0278(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_2FE03BF0416E8F015861829FD3928934;      // 0x02C0(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A3C27E6475A9A732CFF6B9FCCC3465E;// 0x02E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2D8C67E14104C016A6B4978083119097;// 0x0308(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E6CBA6484572B696717E77BB62CC23CE;// 0x0330(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1ADC795A44EE7AE21FC3A5AB8591C014;// 0x0358(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A8FBAA5478660891E702DB1E46D70C6;// 0x0380(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_710D4DDF45E7674C33B9E9A7F64583D4;// 0x03A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D480CDF42EFADCDA8E138B901070936;// 0x03D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D02C86DC4EADAFD535326680C1CD92A5;// 0x03F8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9B24A68F4F49EC05C912E682A6C30806;// 0x0420(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_377D5673431F94564916448AA4B6EBBD;// 0x0498(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4F1953624BBA23E3681A30987278C2B8;// 0x04B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_076323A44360DE0318EB6B80860DBD48;// 0x04E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AA4F3F64391B86EB0D464AB7AE3FADF;// 0x0508(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D5F5A97144A5BC19F2E6B6B680367366;// 0x0530(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DC82D45142A95978DE7E578C9C9DB357;// 0x05A8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_282F29D3428DB5C26A1B2899123DAAA0;// 0x05C8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CDB005B347C4925ADA6C41AA8D293BDD;// 0x0640(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_D30248C54F4F17F245268B8638C6F86B;// 0x0660(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DF1260AA4F42AB3C1055F49ECD9702AB;// 0x0678(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1550663E41481771763EE489FEBE36F3;// 0x0698(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CEF4602449B7ABC6247769A9956CE802;// 0x0748(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_635119E3427A6642C282D19403150CCA;// 0x0768(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E10AEDC4275071A5897C2B8BFEEA6BC;// 0x0790(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF840D0C4A7D83DF8F4DC680B3B69C78;// 0x07B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6A96A2474886673BDE4289836B4CC8CD;// 0x0830(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A22471D8470C7F12A153E2AC3DEAA2B4;// 0x0850(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4A985BEC4050CF1156A5B68E4C94497C;// 0x08C8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_689314274FBB0F5B00FFE8AD0538A58D;// 0x08E8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8F16C3784446CEAE70271FA7FC52E397;// 0x0998(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_38964BF948E989D02009ABAC8C934A78;// 0x09B8(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6673275344AB3F17125AFABA7EAB2991;// 0x09D0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A22B802F4DC8C4961C1691B316C38693;// 0x09F0(0x00B0)
	float                                              mSpeed;                                                   // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSpeedZ;                                                  // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCharacterMovementComponent*                 mCharacterMovementComponent;                              // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         mMovementMode;                                            // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_BuildGun.Anim_BuildGun_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_1A8FBAA5478660891E702DB1E46D70C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_710D4DDF45E7674C33B9E9A7F64583D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_8D480CDF42EFADCDA8E138B901070936();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_D02C86DC4EADAFD535326680C1CD92A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_1ADC795A44EE7AE21FC3A5AB8591C014();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_076323A44360DE0318EB6B80860DBD48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_8AA4F3F64391B86EB0D464AB7AE3FADF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_E6CBA6484572B696717E77BB62CC23CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_2D8C67E14104C016A6B4978083119097();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_635119E3427A6642C282D19403150CCA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_6E10AEDC4275071A5897C2B8BFEEA6BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_BuildGun_AnimGraphNode_TransitionResult_9A3C27E6475A9A732CFF6B9FCCC3465E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Anim_BuildGun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
