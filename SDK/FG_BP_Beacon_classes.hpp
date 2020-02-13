#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Beacon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Beacon.BP_Beacon_C
// 0x0051 (0x0381 - 0x0330)
class ABP_Beacon_C : public AFGBeacon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  mCompassTexture;                                          // 0x0348(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       mCompassText;                                             // 0x0350(0x0028) (Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)
	class UWidget_Beacon_C*                            mWidget;                                                  // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FLinearColor                                mCompassColor;                                            // 0x0370(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	ECompassViewDistance                               compassViewDistance;                                      // 0x0380(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Beacon.BP_Beacon_C");
		return ptr;
	}


	bool ShouldSave();
	void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
	bool NeedTransform();
	struct FText GetLookAtDecription(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	bool IsUseable();
	void UpdateUseState(class AFGCharacterPlayer** byCharacter, struct FVector* atLocation, class UPrimitiveComponent** componentHit, struct FUseState* out_useState);
	ECompassViewDistance GetActorCompassViewDistance();
	ECompassViewDistance SetActorCompassViewDistance(ECompassViewDistance* compassViewDistance);
	struct FText SetActorRepresentationText(struct FText* newText);
	bool UpdateRepresentation();
	float GetActorFogOfWarRevealRadius();
	EFogOfWarRevealType GetActorFogOfWarRevealType();
	struct FLinearColor GetActorRepresentationColor();
	struct FText GetActorRepresentationText();
	class UTexture2D* GetActorRepresentationTexture();
	ERepresentationType GetActorRepresentationType();
	bool GetActorShouldShowInCompass();
	bool RemoveAsRepresentation();
	struct FRotator GetRealActorRotation();
	struct FVector GetRealActorLocation();
	bool GetActorShouldShowOnMap();
	bool IsActorStatic();
	bool AddAsRepresentation();
	void SetColor(struct FLinearColor* NewColor);
	void CloseWidget(class AController** Controller);
	void PostLoadGame(int* SaveVersion, int* GameVersion);
	void PostSaveGame(int* SaveVersion, int* GameVersion);
	void PreLoadGame(int* SaveVersion, int* GameVersion);
	void PreSaveGame(int* SaveVersion, int* GameVersion);
	void OnUseStop(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	void RegisterInteractingPlayer(class AFGCharacterPlayer** Player);
	void StartIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	void StopIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	void UnregisterInteractingPlayer(class AFGCharacterPlayer** Player);
	void ReceiveBeginPlay();
	void OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	void SetActorRepresentationColor(struct FLinearColor* NewColor);
	void PickUpBeacon(class AFGCharacterPlayer** Player);
	void ExecuteUbergraph_BP_Beacon(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
