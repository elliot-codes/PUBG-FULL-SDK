#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BaseOptionWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BaseOptionWidget.BaseOptionWidget_C
// 0x0024 (0x04B4 - 0x0490)
class UBaseOptionWidget_C : public UTslBaseOptionWidget
{
public:
	TArray<struct FKey>                                PrevOptionKeyList;                                        // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                NextOptionKeyList;                                        // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              KeyUpTime;                                                // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BaseOptionWidget.BaseOptionWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
