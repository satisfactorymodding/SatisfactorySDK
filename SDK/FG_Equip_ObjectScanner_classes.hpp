#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_ObjectScanner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_ObjectScanner.Equip_ObjectScanner_C
// 0x0068 (0x0500 - 0x0498)
class AEquip_ObjectScanner_C : public AFGObjectScanner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CrystalScanner_skl;                                       // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SomeDumbShitThatFixesScaleOrSomething;                    // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget_ObjectScannerMenu_C*                 mObjectScannerMenu;                                       // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAkComponent*                                mAKLoopingSound;                                          // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               mPlayingSound;                                            // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class AActor*                                      mSoundAttachedTo;                                         // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    mScreenMaterial;                                          // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                mScreenUpdateTimer;                                       // 0x04E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              mScanlineLerpT;                                           // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mScreenUpdateTime;                                        // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mNormalizedCloesnessToObject;                             // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mObjectIsWithinRange;                                     // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	class UCanvasRenderTarget2D*                       mTextTexture;                                             // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_ObjectScanner.Equip_ObjectScanner_C");
		return ptr;
	}


	void OnUpdateTextMaterial(class UCanvas** Canvas, int* Width, int* Height);
	void SetupTextMaterial();
	float GetAngleToClosestTarget();
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_SecondaryFire_K2Node_InputActionEvent_1(struct FKey* Key);
	void PlayBeep(bool* isObjectInRange);
	void UpdateScannerVisuals(bool* wasChange);
	void WasEquipped();
	void WasUnEquipped();
	void Event_BlinkLight();
	void ReceiveBeginPlay();
	void Event_Update_Screen();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Equip_ObjectScanner(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
