#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	UseMediaPlayerSetting          = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaUtils.MediaPlayerTrackOptions
// 0x001C
struct FMediaPlayerTrackOptions
{
	int                                                Audio;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Caption;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MetaData;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Script;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Subtitle;                                                 // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Text;                                                     // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Video;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MediaUtils.MediaPlayerOptions
// 0x0030
struct FMediaPlayerOptions
{
	struct FMediaPlayerTrackOptions                    TRACKS;                                                   // 0x0000(0x001C) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FTimespan                                   SeekTime;                                                 // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor)
	EMediaPlayerOptionBooleanOverride                  PlayOnOpen;                                               // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMediaPlayerOptionBooleanOverride                  Loop;                                                     // 0x0029(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
