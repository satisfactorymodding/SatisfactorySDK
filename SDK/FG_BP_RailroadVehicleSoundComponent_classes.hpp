#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_RailroadVehicleSoundComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RailroadVehicleSoundComponent.BP_RailroadVehicleSoundComponent_C
// 0x0008 (0x0298 - 0x0290)
class UBP_RailroadVehicleSoundComponent_C : public UFGRailroadVehicleSoundComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RailroadVehicleSoundComponent.BP_RailroadVehicleSoundComponent_C");
		return ptr;
	}


	void mSpeedKmH(float* Speed);
	void OnStartedMoving();
	void OnStoppedMoving();
	void UpdateRTPCs();
	void OnDynamicBrakesApplied();
	void OnAirBrakesApplied();
	void OnAirBrakesReleased();
	void OnDynamicBrakesReleased();
	void OnThrottleReleased();
	void OnThrottleApplied();
	void OnStoppedMovingRelay();
	void StartIdleSounds();
	void StopAllSounds();
	void ExecuteUbergraph_BP_RailroadVehicleSoundComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
