#include <Windows.h>
#define _WIN32
#define STEAM_API_EXPORTS
#include "steam/steam_api.h"
#include "Steam_Apps.hpp"
#include "Steam_Friends.hpp"
#include "Steam_User.hpp"
#include "Steam_Client.hpp"




//#define STEAMAPPS_INTERFACE_VERSION "STEAMAPPS_INTERFACE_VERSION008"
//#define STEAMFRIENDS_INTERFACE_VERSION "SteamFriends017"
//#define STEAMCLIENT_INTERFACE_VERSION		"SteamClient021"
//#define STEAMUSER_INTERFACE_VERSION "SteamUser023"
//#define STEAMUSERSTATS_INTERFACE_VERSION "STEAMUSERSTATS_INTERFACE_VERSION012"
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
	return nullptr;
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