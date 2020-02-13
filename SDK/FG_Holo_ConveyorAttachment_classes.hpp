#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Holo_ConveyorAttachment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Holo_ConveyorAttachment.Holo_ConveyorAttachment_C
// 0x0008 (0x04B8 - 0x04B0)
class AHolo_ConveyorAttachment_C : public AFGConveyorAttachmentHologram
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Holo_ConveyorAttachment.Holo_ConveyorAttachment_C");
		return ptr;
	}


	void ReceiveConfigureComponents(class AFGBuildable** inBuildable);
	void ExecuteUbergraph_Holo_ConveyorAttachment(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
