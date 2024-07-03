#pragma once
#include "steam/isteamuser.h"

class Steam_User : public ISteamUser
{
public:
	HSteamUser GetHSteamUser()
	{
		return 1;
	}
	bool BLoggedOn()
	{
		return false;
	}
	CSteamID GetSteamID()
	{
		return CSteamID();
	}
	int InitiateGameConnection_DEPRECATED(void* pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
	{
		return 0;
	}
	void TerminateGameConnection_DEPRECATED(uint32 unIPServer, uint16 usPortServer)
	{

	}
	void TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent, const char* pchExtraInfo = "")
	{

	}
	bool GetUserDataFolder(char* pchBuffer, int cubBuffer)
	{
		return true;
	}
	void StartVoiceRecording()
	{

	}

	void StopVoiceRecording()
	{

	}

	EVoiceResult GetAvailableVoice(uint32* pcbCompressed, uint32* pcbUncompressed_Deprecated = 0, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated = 0)
	{
		return k_EVoiceResultOK;
	}

	EVoiceResult GetVoice(bool bWantCompressed, void* pDestBuffer, uint32 cbDestBufferSize, uint32* nBytesWritten, bool bWantUncompressed_Deprecated = false, void* pUncompressedDestBuffer_Deprecated = 0, uint32 cbUncompressedDestBufferSize_Deprecated = 0, uint32* nUncompressBytesWritten_Deprecated = 0, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated = 0)
	{
		return k_EVoiceResultOK;
	}
	EVoiceResult DecompressVoice(const void* pCompressed, uint32 cbCompressed, void* pDestBuffer, uint32 cbDestBufferSize, uint32* nBytesWritten, uint32 nDesiredSampleRate)
	{
		return k_EVoiceResultOK;
	}
	uint32 GetVoiceOptimalSampleRate()
	{
		return 48000;
	}
	HAuthTicket GetAuthSessionTicket(void* pTicket, int cbMaxTicket, uint32* pcbTicket, const SteamNetworkingIdentity* pSteamNetworkingIdentity)
	{
		return k_HAuthTicketInvalid;
	}
	HAuthTicket GetAuthTicketForWebApi(const char* pchIdentity)
	{
		return k_HAuthTicketInvalid;
	}
	EBeginAuthSessionResult BeginAuthSession(const void* pAuthTicket, int cbAuthTicket, CSteamID steamID)
	{
		return k_EBeginAuthSessionResultInvalidTicket;
	}
	void EndAuthSession(CSteamID steamID)
	{

	}

	void CancelAuthTicket(HAuthTicket hAuthTicket)
	{

	}
	EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID)
	{
		return k_EUserHasLicenseResultHasLicense;
	}
	bool BIsBehindNAT()
	{
		return false;
	}
	void AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
	{

	}

	SteamAPICall_t RequestEncryptedAppTicket(void* pDataToInclude, int cbDataToInclude)
	{
		return k_uAPICallInvalid;
	}
	bool GetEncryptedAppTicket(void* pTicket, int cbMaxTicket, uint32* pcbTicket)
	{
		return false;
	}
	int GetGameBadgeLevel(int nSeries, bool bFoil)
	{
		return 2;
	}

	int GetPlayerSteamLevel()
	{
		return 3;
	}
	SteamAPICall_t RequestStoreAuthURL(const char* pchRedirectURL)
	{
		return k_uAPICallInvalid;
	}
	bool BIsPhoneVerified()
	{
		return true;
	}
	bool BIsTwoFactorEnabled()
	{
		return true;
	}
	bool BIsPhoneIdentifying()
	{
		return false;
	}
	bool BIsPhoneRequiringVerification()
	{
		return false;
	}
	SteamAPICall_t GetMarketEligibility()
	{
		return k_uAPICallInvalid;
	}
	SteamAPICall_t GetDurationControl()
	{
		return k_uAPICallInvalid;
	}
	bool BSetDurationControlOnlineState(EDurationControlOnlineState eNewState)
	{
		return false;
	}
};