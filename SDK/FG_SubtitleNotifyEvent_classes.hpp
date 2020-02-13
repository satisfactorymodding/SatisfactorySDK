#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_SubtitleNotifyEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SubtitleNotifyEvent.SubtitleNotifyEvent_C
// 0x0018 (0x0048 - 0x0030)
class USubtitleNotifyEvent_C : public UAnimNotifyState
{
public:
	struct FText                                       mSubtitle;                                                // 0x0030(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SubtitleNotifyEvent.SubtitleNotifyEvent_C");
		return ptr;
	}


	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
