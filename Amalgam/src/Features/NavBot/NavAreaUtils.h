#pragma once

#include <utility>

class CNavArea;
class Vector;

namespace NavAreaUtils
{
	auto FindClosestHidingSpot(
		CNavArea* pArea,
		Vector vVischeckPoint,
		int iRecursionCount,
		std::pair<CNavArea*, int>& tOut,
		bool bVischeck = true,
		int iRecursionIndex = 0) -> bool;
}
