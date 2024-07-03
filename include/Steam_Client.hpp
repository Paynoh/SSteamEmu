#pragma once
#include "steam/isteamclient.h"
#include "Steam_User.hpp"
#include "Steam_Friends.hpp"
#include "Steam_UserStats.hpp"
#include "Steam_GameServerStats.hpp"
#include "Steam_Networking.hpp"
#include "Steam_RemoteStorage.hpp"
void* Createinterface(const char* Version);


class Steam_Client : public ISteamClient
{
public: 
	Steam_Friends* ISteamFriendsPTR;
	Steam_UserStats* ISteamUserStatsPTR; 
	Steam_GameServerStats* ISteamGameServerStatsPTR;
	Steam_Apps* ISteamAppsPTR;
	Steam_Networking* ISteamNetworkingPTR; 
	//Steam_RemoteStorage* ISteamRemoteStoragePTR;
public:
	Steam_Client()
	{
		ISteamFriendsPTR = new Steam_Friends;
		ISteamUserStatsPTR = new Steam_UserStats;
		ISteamGameServerStatsPTR = new Steam_GameServerStats;
		ISteamAppsPTR = new Steam_Apps;
		ISteamNetworkingPTR = new Steam_Networking;
		//ISteamRemoteStoragePTR = new Steam_RemoteStorage;
	}
	HSteamPipe CreateSteamPipe() override
	{
		return 1;
	}
	bool BReleaseSteamPipe(HSteamPipe hSteamPipe) override
	{
		return false;
	}

	HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe) override
	{
		return 0;
	}
	HSteamUser CreateLocalUser(HSteamPipe* phSteamPipe, EAccountType eAccountType) override
	{
		return 0;
	}
	void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser) override
	{
	
	}
	ISteamUser* GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion) override
	{
		Steam_User* Ret = new Steam_User;
		if (Ret)
			return Ret;
		else
			return nullptr;
	}

	ISteamGameServer* GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion) override
	{
		return 0;
	}
	void SetLocalIPBinding(const SteamIPAddress_t& unIP, uint16 usPort)
	{

	}

	ISteamFriends* GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion) override
	{
		Steam_Friends* Ret = new Steam_Friends;
		if (Ret)
			return Ret;
		else
			return nullptr;
	}
	ISteamUtils* GetISteamUtils(HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return 0;
	}
	ISteamMatchmaking* GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return 0;
	}
	ISteamMatchmakingServers* GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return 0;
	}
	void* GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return Createinterface(pchVersion);
		/*
		if (!pchVersion)
			return nullptr;
		Steam_Client* Client = new Steam_Client;
		if (Client)
			return Client;
		else
			nullptr;
			*/
	}

	ISteamUserStats* GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return this->ISteamUserStatsPTR;
	}
	ISteamGameServerStats* GetISteamGameServerStats(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return this->ISteamGameServerStatsPTR;
	}
	ISteamApps* GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return this->ISteamAppsPTR;
	}
	ISteamNetworking* GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return this->ISteamNetworkingPTR;
	}
	ISteamRemoteStorage* GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamScreenshots* GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamGameSearch* GetISteamGameSearch(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	void RunFrame()
	{

	}

	uint32 GetIPCCallCount()
	{
		return 12;
	}
	void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
	{

	}
	bool BShutdownIfAllPipesClosed()
	{
		return true;
	}
	ISteamHTTP* GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamController* GetISteamController(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamUGC* GetISteamUGC(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamMusic* GetISteamMusic(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamMusicRemote* GetISteamMusicRemote(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamHTMLSurface* GetISteamHTMLSurface(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	void DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(void (*)())
	{

	}
	void DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(void (*)())
	{
		
	}
	void Set_SteamAPI_CCheckCallbackRegisteredInProcess(SteamAPI_CheckCallbackRegistered_t func)
	{
	
	}

	ISteamInventory* GetISteamInventory(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamVideo* GetISteamVideo(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamParentalSettings* GetISteamParentalSettings(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamInput* GetISteamInput(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamParties* GetISteamParties(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	ISteamRemotePlay* GetISteamRemotePlay(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
	{
		return nullptr;
	}
	void DestroyAllInterfaces()
	{

	}
};