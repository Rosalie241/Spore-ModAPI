#pragma once

#include <Spore\Simulator\cGonzagoSimulator.h>
#include <Spore\App\PropertyList.h>
#include <Spore\LocalizedString.h>

//TODO #define BadgeManager ?

#define cBadgeManagerPtr eastl::intrusive_ptr<Simulator::cBadgeManager>

namespace Simulator
{
	class cBadgeManager
		: public cGonzagoSimulator
	{
	public:
		/// Maps the file ID to the PropertyList, for each badge in space_badges~ (0x2CB089D)
		/* 10h */	map<uint32_t, PropertyListPtr> mBadges;
		/* 2Ch */	map<int, int> mBadgeMap;
		/* 48h */	map<int, int> mStageMap;
		/* 64h */	map<int, int> mEventCounts;
		/* 80h */	hash_map<int, int> field_80;
		/* A0h */	bool field_A0;
		/* A4h */	uint32_t mCurrentBadgeCard;
		/* A8h */	int field_A8;
		/* ACh */	LocalizedString field_AC;
	};
	ASSERT_SIZE(cBadgeManager, 0xC0);
}