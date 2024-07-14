#pragma once
#include "steam/isteammatchmaking.h"

class Steam_Matchmaking : public ISteamMatchmaking
{
public:
	int GetFavoriteGameCount()
	{
		return 0;
	}
	bool GetFavoriteGame(int iGame, AppId_t* pnAppID, uint32* pnIP, uint16* pnConnPort, uint16* pnQueryPort, uint32* punFlags, uint32* pRTime32LastPlayedOnServer)
	{
		return true;
	}
	int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
	{
		return 0;
	}
	bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
	{
		return true;
	}
	SteamAPICall_t RequestLobbyList()
	{
		return 0;
	}
	void AddRequestLobbyListStringFilter(const char* pchKeyToMatch, const char* pchValueToMatch, ELobbyComparison eComparisonType) {}
	void AddRequestLobbyListNumericalFilter(const char* pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType) {}
	void AddRequestLobbyListNearValueFilter(const char* pchKeyToMatch, int nValueToBeCloseTo) {}
	void AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable) {}
	void AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter) {}
	void AddRequestLobbyListResultCountFilter(int cMaxResults) {}
	void AddRequestLobbyListCompatibleMembersFilter(CSteamID steamIDLobby) {}
	CSteamID GetLobbyByIndex(int iLobby)
	{
		return CSteamID();
	}
	SteamAPICall_t CreateLobby(ELobbyType eLobbyType, int cMaxMembers)
	{
		return 0;
	}
	SteamAPICall_t JoinLobby(CSteamID steamIDLobby)
	{
		return 0;
	}
	void LeaveLobby(CSteamID steamIDLobby) {}
	bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
	{
		return true;
	}
	int GetNumLobbyMembers(CSteamID steamIDLobby)
	{
		return 8;
	}
	CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
	{
		return CSteamID();
	}
	const char* GetLobbyData(CSteamID steamIDLobby, const char* pchKey)
	{
		return ""; 
	}
	bool SetLobbyData(CSteamID steamIDLobby, const char* pchKey, const char* pchValue)
	{
		return true;
	}
	int GetLobbyDataCount(CSteamID steamIDLobby)
	{
		return 0;
	}
	bool GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char* pchKey, int cchKeyBufferSize, char* pchValue, int cchValueBufferSize)
	{
		return true;
	}
	bool DeleteLobbyData(CSteamID steamIDLobby, const char* pchKey)
	{
		return true;
	}
	const char* GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char* pchKey)
	{
		return "";
	}
	void SetLobbyMemberData(CSteamID steamIDLobby, const char* pchKey, const char* pchValue) {}
	bool SendLobbyChatMsg(CSteamID steamIDLobby, const void* pvMsgBody, int cubMsgBody)
	{
		return true;
	}
	int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, STEAM_OUT_STRUCT() CSteamID* pSteamIDUser, void* pvData, int cubData, EChatEntryType* peChatEntryType)
	{
		return 0x123;
	}
	bool RequestLobbyData(CSteamID steamIDLobby)
	{
		return true;
	}
	void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) {}
	bool GetLobbyGameServer(CSteamID steamIDLobby, uint32* punGameServerIP, uint16* punGameServerPort, STEAM_OUT_STRUCT() CSteamID* psteamIDGameServer)
	{
		return false;
	}
	bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
	{
		return true;
	}
	int GetLobbyMemberLimit(CSteamID steamIDLobby)
	{
		return 0;
	}
	bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
	{
		return true;
	}
	bool SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)
	{
		return true;
	}
	CSteamID GetLobbyOwner(CSteamID steamIDLobby)
	{
		return CSteamID();
	}
	bool SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)
	{
		return true;
	}
	bool SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobbyDependent)
	{
		return true;
	}

	public:
}; 
