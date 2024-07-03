#pragma once
#include "steam/isteamuserstats.h"

class Steam_UserStats : public ISteamUserStats
{
public:
	bool RequestCurrentStats()
	{
		return true;
	}
	bool GetStat(const char* pchName, int32* pData)
	{
		return true; 
	}

	bool GetStat(const char* pchName, float* pData)
	{
		return true;
	}
	bool SetStat(const char* pchName, int32 nData)
	{
		return true;
	}
	bool SetStat(const char* pchName, float fData)
	{
		return true;
	}
	bool UpdateAvgRateStat(const char* pchName, float flCountThisSession, double dSessionLength)
	{
		return true;
	}
	bool GetAchievement(const char* pchName, bool* pbAchieved)
	{
		return true;
	}

	bool SetAchievement(const char* pchName)
	{
		return true; 
	}
	bool ClearAchievement(const char* pchName)
	{
		return true;
	}
	bool GetAchievementAndUnlockTime(const char* pchName, bool* pbAchieved, uint32* punUnlockTime)
	{
		return true;
	}
	bool StoreStats()
	{
		return true;
	}
	int GetAchievementIcon(const char* pchName)
	{
		return 0;
	}
	const char* GetAchievementDisplayAttribute(const char* pchName, const char* pchKey)
	{
		return "0"; 
	}
	bool IndicateAchievementProgress(const char* pchName, uint32 nCurProgress, uint32 nMaxProgress)
	{
		return true;
	}
	uint32 GetNumAchievements()
	{
		return 5;
	}
	const char* GetAchievementName(uint32 iAchievement)
	{
		return "FakeAchievement";
	}
	SteamAPICall_t RequestUserStats(CSteamID steamIDUser)
	{
		return 0;
	}
	bool GetUserStat(CSteamID steamIDUser, const char* pchName, int32* pData)
	{
		return true;
	}
	bool GetUserStat(CSteamID steamIDUser, const char* pchName, float* pData)
	{
		return true;
	}
	bool GetUserAchievement(CSteamID steamIDUser, const char* pchName, bool* pbAchieved)
	{
		return true;
	}
	bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char* pchName, bool* pbAchieved, uint32* punUnlockTime)
	{
		return true;
	}
	bool ResetAllStats(bool bAchievementsToo)
	{
		return true;
	}
	SteamAPICall_t FindOrCreateLeaderboard(const char* pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
	{
		return 0;
	}
	SteamAPICall_t FindLeaderboard(const char* pchLeaderboardName)
	{
		return 0;
	}
	const char* GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)
	{
		return "LeaderBoard"; 
	}
	int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)
	{
		return 0;
	}
	ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)
	{
		return k_ELeaderboardSortMethodNone;
	}
	ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)
	{
		return k_ELeaderboardDisplayTypeNone;
	}
	SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
	{
		return 0;
	}
	SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard,
		STEAM_ARRAY_COUNT_D(cUsers, Array of users to retrieve) CSteamID* prgUsers, int cUsers)
	{
		return 0;
	}
	bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t* pLeaderboardEntry, int32* pDetails, int cDetailsMax)
	{
		return true;
	}
	SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32* pScoreDetails, int cScoreDetailsCount)
	{
		return 0;
	}
	SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
	{
		return 0;
	}
	SteamAPICall_t GetNumberOfCurrentPlayers()
	{
		return 2;
	}
	SteamAPICall_t RequestGlobalAchievementPercentages()
	{
		return 0;
	}
	int GetMostAchievedAchievementInfo(char* pchName, uint32 unNameBufLen, float* pflPercent, bool* pbAchieved)
	{
		return 0;
	}
	int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char* pchName, uint32 unNameBufLen, float* pflPercent, bool* pbAchieved)
	{
		return 1;
	}
	bool GetAchievementAchievedPercent(const char* pchName, float* pflPercent)
	{
		return true;
	}
	SteamAPICall_t RequestGlobalStats(int nHistoryDays)
	{
		return 0;
	}
	bool GetGlobalStat(const char* pchStatName, int64* pData)
	{
		return true;
	}
	bool GetGlobalStat(const char* pchStatName, double* pData)
	{
		return true;
	}
	int32 GetGlobalStatHistory(const char* pchStatName, STEAM_ARRAY_COUNT(cubData) int64* pData, uint32 cubData)
	{
		return 0;
	}
	int32 GetGlobalStatHistory(const char* pchStatName, STEAM_ARRAY_COUNT(cubData) double* pData, uint32 cubData)
	{
		return 0;
	}
	bool GetAchievementProgressLimits(const char* pchName, int32* pnMinProgress, int32* pnMaxProgress)
	{
		return true;
	}
	bool GetAchievementProgressLimits(const char* pchName, float* pfMinProgress, float* pfMaxProgress)
	{
		return true;
	}
}; 