#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CS_WeapGun_Pistol_Nagant_ADS_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_WeapGun_Pistol_Nagant_ADS.CS_WeapGun_Pistol_Nagant_ADS_C
// 0x0000 (0x0160 - 0x0160)
class UCS_WeapGun_Pistol_Nagant_ADS_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd1a379cf);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
