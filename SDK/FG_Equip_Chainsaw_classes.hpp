#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Chainsaw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_Chainsaw.Equip_Chainsaw_C
// 0x0038 (0x0450 - 0x0418)
class AEquip_Chainsaw_C : public AFGChainsaw
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Chainsaw_skl;                                             // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     mUIWidget;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    mSawingVfx;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              mMontageLength;                                           // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mInterpSawProgress;                                       // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mWasSawing;                                               // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EChainsawUseState>                     mCurrentState;                                            // 0x0441(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mPlayingSound;                                            // 0x0442(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0443(0x0005) MISSED OFFSET
	class UAnimInstance*                               mAnim1pInstance;                                          // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Chainsaw.Equip_Chainsaw_C");
		return ptr;
	}


	bool CanStartSawing();
	void UpdateAttachmentState(TEnumAsByte<EChainsawUseState>* ChainsawState, bool* ForceUpdate);
	void InterpSawProgress(float* DeltaTime);
	void ReceiveTick(float* DeltaSeconds);
	void WasEquipped();
	void WasUnEquipped();
	void ExecuteUbergraph_Equip_Chainsaw(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
