#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPD_ResearchTreeNode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPD_ResearchTreeNode.BPD_ResearchTreeNode_C
// 0x0090 (0x00B8 - 0x0028)
class UBPD_ResearchTreeNode_C : public UFGResearchTreeNode
{
public:
	struct FMAMTree_NodeData_Struct                    mNodeDataStruct;                                          // 0x0028(0x0090) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPD_ResearchTreeNode.BPD_ResearchTreeNode_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
