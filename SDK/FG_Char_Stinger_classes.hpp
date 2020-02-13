#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Char_Stinger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Char_Stinger.Char_Stinger_C
// 0x0038 (0x09D8 - 0x09A0)
class AChar_Stinger_C : public AFGEnemy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    NoseGoo_011;                                              // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NoseGoo_012;                                              // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NoseGoo_013;                                              // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NoseGoo_01;                                               // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    JumpAttackDone;                                           // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Char_Stinger.Char_Stinger_C");
		return ptr;
	}


	void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void ReceiveDied();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void GainedSignificance();
	void LostSignificance();
	void ExecuteUbergraph_Char_Stinger(int* EntryPoint);
	void JumpAttackDone__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
