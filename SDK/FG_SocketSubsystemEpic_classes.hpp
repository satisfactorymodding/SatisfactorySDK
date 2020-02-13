#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_SocketSubsystemEpic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SocketSubsystemEpic.EpicNetConnection
// 0x0008 (0x18F0 - 0x18E8)
class UEpicNetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x18E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocketSubsystemEpic.EpicNetConnection");
		return ptr;
	}

};


// Class SocketSubsystemEpic.EpicNetDriver
// 0x0008 (0x0770 - 0x0768)
class UEpicNetDriver : public UIpNetDriver
{
public:
	bool                                               bIsPassthrough;                                           // 0x0768(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0769(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocketSubsystemEpic.EpicNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
