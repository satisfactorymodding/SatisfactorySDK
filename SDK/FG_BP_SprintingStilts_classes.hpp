#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_SprintingStilts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SprintingStilts.BP_SprintingStilts_C
// 0x003C (0x041C - 0x03E0)
class ABP_SprintingStilts_C : public AFGEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              mWalkFactor;                                              // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSprintFactor;                                            // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEquipped;                                              // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowDebug;                                               // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03FA(0x0006) MISSED OFFSET
	TArray<class ABP_Stilts_C*>                        mSpawnedStilts;                                           // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              mHeightOffset;                                            // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mJumpZFactor;                                             // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mYOffset;                                                 // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SprintingStilts.BP_SprintingStilts_C");
		return ptr;
	}


	void AdjustFallDamage(class AChar_Player_C** Player, bool* Equip);
	void AdjustJumpHeight(class AChar_Player_C** Player, bool* Equip);
	void GetMaxSprintSpeed(class AChar_Player_C** Character, float* MaxSprintSpeed);
	void GetMaxWalkSpeed(class AChar_Player_C** Character, float* MaxWalkSpeed);
	void Undo1pOffset(class AChar_Player_C** Player_Reference);
	void DestroyStilts();
	void Spawn1pStilts(class AChar_Player_C** PlayerCharacter);
	void AdjustMovementSpeed(class AChar_Player_C** PlayerCharacter, bool* Equip);
	void WasEquipped();
	void WasUnEquipped();
	void ReceiveBeginPlay();
	void TempDebug();
	void ExecuteUbergraph_BP_SprintingStilts(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
