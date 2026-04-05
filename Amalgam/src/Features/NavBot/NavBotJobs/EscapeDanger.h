#pragma once
#include "../NavBotCore.h"

class CNavBotDanger
{
private:
	CNavArea* m_pSpawnExitArea = nullptr;
public:
	// Run away from dangerous areas
	bool EscapeDanger(CTFPlayer* pLocal);
	bool EscapeProjectiles(CTFPlayer* pLocal);
	bool EscapeSpawn(CTFPlayer* pLocal);

	void ResetSpawn();
};

ADD_FEATURE(CNavBotDanger, NavBotDanger);