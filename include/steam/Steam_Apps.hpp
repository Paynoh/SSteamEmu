#pragma once
#include "steam/isteamapps.h"
class Steam_Apps : public ISteamApps
{
public:
	bool BIsSubscribed()
	{
		return true;
	}

	bool BIsLowViolence()
	{
		return false;
	}

	bool BIsCybercafe()
	{
		return false;
	}


public:

};