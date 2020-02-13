#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Decoration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Decoration.BP_Decoration_C
// 0x0018 (0x0360 - 0x0348)
class ABP_Decoration_C : public AFGDecorationActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decoration.BP_Decoration_C");
		return ptr;
	}


	void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
	bool NeedTransform();
	bool ShouldSave();
	struct FText GetLookAtDecription(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	bool IsUseable();
	void UpdateUseState(class AFGCharacterPlayer** byCharacter, struct FVector* atLocation, class UPrimitiveComponent** componentHit, struct FUseState* out_useState);
	void PickUp(class AFGCharacterPlayer** inUser);
	void ReceiveBeginPlay();
	void OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	void ExecuteUbergraph_BP_Decoration(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
