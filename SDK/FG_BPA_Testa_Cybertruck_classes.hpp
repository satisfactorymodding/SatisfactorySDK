#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_Testa_Cybertruck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPA_Testa_Cybertruck.BPA_Testa_Cybertruck_C
// 0x04F8 (0x0E28 - 0x0930)
class UBPA_Testa_Cybertruck_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CF745F0C4C28ED85C2D3A5AD0A8C7942;      // 0x0938(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_A70232B748F4A847B69DA5ADFDFE32C0;// 0x0958(0x0010)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_85602CD144ABB455258B9DAF2A5B9F40;// 0x0968(0x00E0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_8D941E694701E64980472FBE006D50F0;  // 0x0A48(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_04B7074C47DD33AC93398C8694F46325;  // 0x0B38(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_D6F8D0C2466BF02B261A108616AB588F;  // 0x0C28(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_AA32B94748835B435ADFF5AC80E0C10A;  // 0x0D18(0x00F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A7E3016E491722CF715705AEDB6A79D5;// 0x0E08(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Testa_Cybertruck.BPA_Testa_Cybertruck_C");
		return ptr;
	}


	void ExecuteUbergraph_BPA_Testa_Cybertruck(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
