#include <Windows.h>
#define _WIN32
#define STEAM_API_EXPORTS
#include "steam/steam_api.h"
#include "Steam_Apps.hpp"
#include "Steam_Friends.hpp"
#include "Steam_User.hpp"
#include "Steam_Client.hpp"
#include "Steam_Matchmaking.hpp"



S_API inline void __cdecl SteamInternal_Init_SteamNetworking(ISteamNetworking** p)
{
	*p = (ISteamNetworking*)(SteamInternal_FindOrCreateUserInterface(SteamAPI_GetHSteamUser(), "SteamNetworking006"));
} 
S_API inline ISteamNetworking* SteamNetworking()
{
	static void* s_CallbackCounterAndContext[3] = { (void*)&SteamInternal_Init_SteamNetworking, 0, 0 }; return *(ISteamNetworking**)SteamInternal_ContextInit(s_CallbackCounterAndContext);
}



S_API inline void __cdecl SteamInternal_Init_SteamFriends(ISteamFriends** p)
{
	*p = (ISteamFriends*)(SteamInternal_FindOrCreateUserInterface(SteamAPI_GetHSteamUser(), "SteamFriends017"));
}  
S_API inline ISteamFriends* SteamFriends()
{
	static void* s_CallbackCounterAndContext[3] = { (void*)&SteamInternal_Init_SteamFriends, 0, 0 }; return *(ISteamFriends**)SteamInternal_ContextInit(s_CallbackCounterAndContext);
}
S_API inline void __cdecl SteamInternal_Init_SteamRemoteStorage(ISteamRemoteStorage** p)
{
	*p = (ISteamRemoteStorage*)(SteamInternal_FindOrCreateUserInterface(SteamAPI_GetHSteamUser(), "STEAMREMOTESTORAGE_INTERFACE_VERSION016"));
} 
S_API inline ISteamRemoteStorage* SteamRemoteStorage()
{
	static void* s_CallbackCounterAndContext[3] = { (void*)&SteamInternal_Init_SteamRemoteStorage, 0, 0 }; return *(ISteamRemoteStorage**)SteamInternal_ContextInit(s_CallbackCounterAndContext);
}



S_API inline void __cdecl SteamInternal_Init_SteamApps(ISteamApps** p)
{
	*p = (ISteamApps*)(SteamInternal_FindOrCreateUserInterface(SteamAPI_GetHSteamUser(), "STEAMAPPS_INTERFACE_VERSION008"));
}
S_API inline ISteamApps* SteamApps()
{
	static void* s_CallbackCounterAndContext[3] = { (void*)&SteamInternal_Init_SteamApps, 0, 0 }; return *(ISteamApps**)SteamInternal_ContextInit(s_CallbackCounterAndContext);
}
S_API inline void __cdecl SteamInternal_Init_SteamUser(ISteamUser** p)
{
	*p = (ISteamUser*)(SteamInternal_FindOrCreateUserInterface(SteamAPI_GetHSteamUser(), "SteamUser023"));
} 
S_API inline ISteamUser* SteamUser()
{
	static void* s_CallbackCounterAndContext[3] = { (void*)&SteamInternal_Init_SteamUser, 0, 0 }; return *(ISteamUser**)SteamInternal_ContextInit(s_CallbackCounterAndContext);
}
S_API inline void __cdecl SteamInternal_Init_SteamUtils(ISteamUtils** p)
{
	*p = (ISteamUtils*)(SteamInternal_FindOrCreateUserInterface(0, "SteamUtils010"));
} 
S_API inline ISteamUtils* SteamUtils()
{
	static void* s_CallbackCounterAndContext[3] = { (void*)&SteamInternal_Init_SteamUtils, 0, 0 }; return *(ISteamUtils**)SteamInternal_ContextInit(s_CallbackCounterAndContext);
}




S_API inline void __cdecl SteamInternal_Init_SteamMatchmaking(ISteamMatchmaking** p)
{
	*p = (ISteamMatchmaking*)(SteamInternal_FindOrCreateUserInterface(SteamAPI_GetHSteamUser(), "SteamMatchMaking009"));
}
S_API inline ISteamMatchmaking* SteamMatchmaking()
{
	static void* s_CallbackCounterAndContext[3] = { (void*)&SteamInternal_Init_SteamMatchmaking, 0, 0 }; return *(ISteamMatchmaking**)SteamInternal_ContextInit(s_CallbackCounterAndContext);
}
S_API inline void __cdecl SteamInternal_Init_SteamUserStats(Steam_UserStats** p)
{
	*p = (Steam_UserStats*)(SteamInternal_FindOrCreateUserInterface(SteamAPI_GetHSteamUser(), "STEAMUSERSTATS_INTERFACE_VERSION012"));
} 
S_API inline Steam_UserStats* SteamUserStats()
{
	static void* s_CallbackCounterAndContext[3] = { (void*)&SteamInternal_Init_SteamUserStats, 0, 0 };

	return *(Steam_UserStats**)SteamInternal_ContextInit(s_CallbackCounterAndContext);
}
//ISteamUserStats
// 
// 
//SteamMatchMaking009
//#define STEAMAPPS_INTERFACE_VERSION "STEAMAPPS_INTERFACE_VERSION008"
//#define STEAMFRIENDS_INTERFACE_VERSION "SteamFriends017"
//#define STEAMCLIENT_INTERFACE_VERSION		"SteamClient021"
//#define STEAMUSER_INTERFACE_VERSION "SteamUser023"
//#define STEAMUSERSTATS_INTERFACE_VERSION "STEAMUSERSTATS_INTERFACE_VERSION012"

S_API void S_CALLTYPE SteamAPI_RegisterCallResult(class CCallbackBase* pCallback, SteamAPICall_t hAPICall) {}

S_API void S_CALLTYPE SteamAPI_UnregisterCallResult(class CCallbackBase* pCallback, SteamAPICall_t hAPICall) {}


void* Createinterface(const char* Version)
{
	if (strcmp(Version, "SteamFriends017") == 0)
	{
		return new Steam_Friends;
	}
	else if (strcmp(Version, "STEAMAPPS_INTERFACE_VERSION008") == 0)
	{
		return new Steam_Apps;
	}
	else if (strcmp(Version, "SteamUser023") == 0)
	{
		return new Steam_User;
	}
	else if (strcmp(Version, "SteamClient021") == 0 || strcmp(Version, "SteamController008") == 0)
	{
		return new Steam_Client; 
	}
	else if (strcmp(Version, "SteamUtils010") == 0)
	{
		return new Steam_Client;
	}
	else if (strcmp(Version, "SteamMatchMaking009") == 0)
	{
		return new Steam_Matchmaking;
	}
	else if (strcmp(Version, "STEAMUSERSTATS_INTERFACE_VERSION012") == 0)
	{
		return new Steam_UserStats;
	}
	return nullptr;
}




S_API const char* SteamAPI_GetSteamInstallPath()
{
	return "C:\\Program\ Files\ (x86)\\Steam";
}

//SteamAPI_Getgsteamuser

S_API HSteamUser S_CALLTYPE SteamAPI_GetHSteamUser()
{
	return 1;
}

S_API bool S_CALLTYPE SteamAPI_Init()
{
	return true;
}

S_API void S_CALLTYPE SteamAPI_Shutdown()
{
	//clean up...
}

S_API HSteamPipe S_CALLTYPE SteamAPI_GetHSteamPipe()
{
	return 1337;
}

S_API void S_CALLTYPE SteamAPI_RunCallbacks()
{

}

S_API void S_CALLTYPE SteamAPI_UnregisterCallback(class CCallbackBase* pCallback)
{

}


S_API void S_CALLTYPE SteamAPI_RegisterCallback(class CCallbackBase* pCallback, int iCallback)
{

}

S_API void S_CALLTYPE SteamAPI_SetMiniDumpComment(const char* pchMsg)
{

}

S_API void S_CALLTYPE SteamAPI_WriteMiniDump(uint32 uStructuredExceptionCode, void* pvExceptionInfo, uint32 uBuildID)
{

}


uintptr_t Unk1 = -1;
struct ContextInitData
{
	void(*pFn)(void* pCtx);
	uintptr_t Counter;
	CSteamAPIContext Ctx;
};



S_API void* S_CALLTYPE SteamInternal_ContextInit(void* pContextInitData)
{
	ContextInitData* Context = (ContextInitData*)pContextInitData;
	if (Context->Counter != Unk1)
	{
		Context->pFn(&Context->Ctx);
		Context->Counter = Unk1;
	}

	return &Context->Ctx;
}




S_API bool S_CALLTYPE SteamAPI_RestartAppIfNecessary(uint32 unOwnAppID)
{
	return false;
}


S_API bool S_CALLTYPE SteamAPI_IsSteamRunning()
{
	return true;
}







S_API void* S_CALLTYPE SteamInternal_FindOrCreateUserInterface(HSteamUser hSteamUser, const char* pszVersion)
{
	if (!pszVersion)
		return 0;

	//Steam_Client* Client = new Steam_Client;
	return Createinterface(pszVersion);
	//return Client->GetISteamGenericInterface(hSteamUser, SteamAPI_GetHSteamPipe() , pszVersion);
}




BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}