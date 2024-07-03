#pragma once
#include "steam/isteamremotestorage.h"

class Steam_RemoteStorage : public ISteamRemoteStorage
{
public:
	bool FileWrite(const char* pchFile, const void* pvData, int32 cubData)
	{
		return false;
	}
};