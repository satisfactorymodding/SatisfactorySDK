#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_Engine_classes.hpp"
#include "FG_CoreUObject_classes.hpp"
#include "FG_ImageWriteQueue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MediaIOCore.EFileMediaOutputPixelFormat
enum class EFileMediaOutputPixelFormat : uint8_t
{
	B8G8R8A8                       = 0,
	FloatRGBA                      = 1,
	EFileMediaOutputPixelFormat_MAX = 2
};


// Enum MediaIOCore.EMediaCaptureCroppingType
enum class EMediaCaptureCroppingType : uint8_t
{
	None                           = 0,
	Center                         = 1,
	TopLeft                        = 2,
	Custom                         = 3,
	EMediaCaptureCroppingType_MAX  = 4
};


// Enum MediaIOCore.EMediaCaptureState
enum class EMediaCaptureState : uint8_t
{
	Error                          = 0,
	Capturing                      = 1,
	Preparing                      = 2,
	StopRequested                  = 3,
	Stopped                        = 4,
	EMediaCaptureState_MAX         = 5
};


// Enum MediaIOCore.EMediaIOReferenceType
enum class EMediaIOReferenceType : uint8_t
{
	FreeRun                        = 0,
	External                       = 1,
	Input                          = 2,
	EMediaIOReferenceType_MAX      = 3
};


// Enum MediaIOCore.EMediaIOOutputType
enum class EMediaIOOutputType : uint8_t
{
	Fill                           = 0,
	FillAndKey                     = 1,
	EMediaIOOutputType_MAX         = 2
};


// Enum MediaIOCore.EMediaIOInputType
enum class EMediaIOInputType : uint8_t
{
	Fill                           = 0,
	FillAndKey                     = 1,
	EMediaIOInputType_MAX          = 2
};


// Enum MediaIOCore.EMediaIOTimecodeFormat
enum class EMediaIOTimecodeFormat : uint8_t
{
	None                           = 0,
	LTC                            = 1,
	VITC                           = 2,
	EMediaIOTimecodeFormat_MAX     = 3
};


// Enum MediaIOCore.EMediaIOStandardType
enum class EMediaIOStandardType : uint8_t
{
	Progressive                    = 0,
	Interlaced                     = 1,
	ProgressiveSegmentedFrame      = 2,
	EMediaIOStandardType_MAX       = 3
};


// Enum MediaIOCore.EMediaIOQuadLinkTransportType
enum class EMediaIOQuadLinkTransportType : uint8_t
{
	SquareDivision                 = 0,
	TwoSampleInterleave            = 1,
	EMediaIOQuadLinkTransportType_MAX = 2
};


// Enum MediaIOCore.EMediaIOTransportType
enum class EMediaIOTransportType : uint8_t
{
	SingleLink                     = 0,
	DualLink                       = 1,
	QuadLink                       = 2,
	HDMI                           = 3,
	EMediaIOTransportType_MAX      = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaIOCore.MediaCaptureOptions
// 0x0010
struct FMediaCaptureOptions
{
	EMediaCaptureCroppingType                          Crop;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FIntPoint                                   CustomCapturePoint;                                       // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResizeSourceBuffer;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct MediaIOCore.MediaIODevice
// 0x000C
struct FMediaIODevice
{
	struct FName                                       DeviceName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DeviceIdentifier;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MediaIOCore.MediaIOConnection
// 0x0020
struct FMediaIOConnection
{
	struct FMediaIODevice                              Device;                                                   // 0x0000(0x000C) (Edit)
	struct FName                                       protocol;                                                 // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EMediaIOTransportType                              TransportType;                                            // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0014(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EMediaIOQuadLinkTransportType                      QuadTransportType;                                        // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0018(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                PortIdentifier;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MediaIOCore.MediaIOMode
// 0x0018
struct FMediaIOMode
{
	struct FFrameRate                                  FrameRate;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FIntPoint                                   Resolution;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EMediaIOStandardType                               Standard;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0010(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                DeviceModeIdentifier;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct MediaIOCore.MediaIOConfiguration
// 0x003C
struct FMediaIOConfiguration
{
	bool                                               bIsInput;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FMediaIOConnection                          MediaConnection;                                          // 0x0004(0x0020) (Edit, EditConst)
	struct FMediaIOMode                                MediaMode;                                                // 0x0024(0x0018) (Edit, EditConst)
};

// ScriptStruct MediaIOCore.MediaIOOutputConfiguration
// 0x004C
struct FMediaIOOutputConfiguration
{
	struct FMediaIOConfiguration                       MediaConfiguration;                                       // 0x0000(0x003C) (Edit, EditConst)
	EMediaIOOutputType                                 OutputType;                                               // 0x003C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                KeyPortIdentifier;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EMediaIOReferenceType                              OutputReference;                                          // 0x0044(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0044(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                ReferencePortIdentifier;                                  // 0x0048(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct MediaIOCore.MediaIOInputConfiguration
// 0x0044
struct FMediaIOInputConfiguration
{
	struct FMediaIOConfiguration                       MediaConfiguration;                                       // 0x0000(0x003C) (Edit, EditConst)
	EMediaIOInputType                                  InputType;                                                // 0x003C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                KeyPortIdentifier;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
