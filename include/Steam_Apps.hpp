#pragma once
#include "steam/isteamapps.h"
#include "Steam_User.hpp"
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
	bool BIsVACBanned()
	{
		return false;
	}
	const char* GetCurrentGameLanguage()
	{
		return "italian";
	}
	const char* GetAvailableGameLanguages()
	{
		return "italian";
	}
	bool BIsSubscribedApp(AppId_t appID)
	{
		return true;
	}
	bool BIsDlcInstalled(AppId_t appID)
	{
		return true;
	}
	uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID)
	{
		return 1719906184;
	}
	bool BIsSubscribedFromFreeWeekend()
	{
		return false;
	}
	int GetDLCCount()
	{
		return 0;
	}
	bool BGetDLCDataByIndex(int iDLC, AppId_t* pAppID, bool* pbAvailable, char* pchName, int cchNameBufferSize)
	{
		return false;
	}
	void InstallDLC(AppId_t nAppID) {}
	void UninstallDLC(AppId_t nAppID) {}
	void RequestAppProofOfPurchaseKey(AppId_t nAppID) {}
	bool GetCurrentBetaName(char* pchName, int cchNameBufferSize)
	{
		return false;
	}
	bool MarkContentCorrupt(bool bMissingFilesOnly)
	{
		return false;
	}
	uint32 GetInstalledDepots(AppId_t appID, DepotId_t* pvecDepots, uint32 cMaxDepots)
	{
		return 0;
	}
	uint32 GetAppInstallDir(AppId_t appID, char* pchFolder, uint32 cchFolderBufferSize)
	{
		return 0x12;
	}
	bool BIsAppInstalled(AppId_t appID)
	{
		return true;
	}
	CSteamID GetAppOwner()
	{
		Steam_User* a = new Steam_User;
		return a->GetSteamID();
	}
	const char* GetLaunchQueryParam(const char* pchKey)
	{
		return "";
	}


	bool GetDlcDownloadProgress(AppId_t nAppID, uint64* punBytesDownloaded, uint64* punBytesTotal)
	{
		return false;
	}
	int GetAppBuildId()
	{
		return 0x1234;
	}
	void RequestAllProofOfPurchaseKeys()
	{

	}
	SteamAPICall_t GetFileDetails(const char* pszFileName)
	{
		return 0;
	}
	int GetLaunchCommandLine(char* pszCommandLine, int cubCommandLine)
	{
		return 0;
	}
	bool BIsSubscribedFromFamilySharing()
	{
		return false;
	}
	bool BIsTimedTrial(uint32* punSecondsAllowed, uint32* punSecondsPlayed)
	{
		return false;
	}
	bool SetDlcContext(AppId_t nAppID)
	{
		return true;
	}
public:

};