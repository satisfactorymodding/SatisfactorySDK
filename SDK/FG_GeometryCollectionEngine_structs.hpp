#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_CoreUObject_classes.hpp"
#include "FG_Engine_classes.hpp"
#include "FG_GeometryCollectionCore_classes.hpp"
#include "FG_GeometryCollectionSimulationCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// 0x0038
struct FGeomComponentCacheParameters
{
	EGeometryCollectionCacheType                       CacheMode;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UGeometryCollectionCache*                    TargetCache;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReverseCacheBeginTime;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SaveCollisionData;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                CollisionDataMaxSize;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoCollisionDataSpatialHash;                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              SpatialHashRadius;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionPerCell;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SaveTrailingData;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                TrailingDataSizeMax;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrailingMinSpeedThreshold;                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrailingMinVolumeThreshold;                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
