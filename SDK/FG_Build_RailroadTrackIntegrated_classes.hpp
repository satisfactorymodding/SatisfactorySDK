#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_RailroadTrackIntegrated_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C
// 0x0008 (0x05C8 - 0x05C0)
class ABuild_RailroadTrackIntegrated_C : public AFGBuildableRailroadTrack
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C");
		return ptr;
	}


	bool CanDismantle();
	void UserConstructionScript();
	void PlayConstructSound();
	void ExecuteUbergraph_Build_RailroadTrackIntegrated(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
