#pragma once
#include "steam/isteamnetworking.h"
//#define STEAMNETWORKING_INTERFACE_VERSION "SteamNetworking006"
class Steam_Networking : public ISteamNetworking
{
public:
	bool SendP2PPacket(CSteamID steamIDRemote, const void* pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel = 0)
	{
		return true;
	}
	bool IsP2PPacketAvailable(uint32* pcubMsgSize, int nChannel = 0)
	{
		return true;
	}
	bool ReadP2PPacket(void* pubDest, uint32 cubDest, uint32* pcubMsgSize, CSteamID* psteamIDRemote, int nChannel = 0)
	{
		return true;
	}
	bool AcceptP2PSessionWithUser(CSteamID steamIDRemote)
	{
		return true;
	}
	bool CloseP2PSessionWithUser(CSteamID steamIDRemote)
	{
		return true;
	}
	bool CloseP2PChannelWithUser(CSteamID steamIDRemote, int nChannel)
	{
		return true;
	}
	bool GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t* pConnectionState)
	{
		return false;
	}
	bool AllowP2PPacketRelay(bool bAllow)
	{
		return false;
	}
	SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, SteamIPAddress_t nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
	{
		return 0;
	}
	SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
	{
		return 0;
	}
	SNetSocket_t CreateConnectionSocket(SteamIPAddress_t nIP, uint16 nPort, int nTimeoutSec)
	{
		return 0;
	}
	bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)
	{
		return true;
	}
	bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
	{
		return true;
	}
	bool SendDataOnSocket(SNetSocket_t hSocket, void* pubData, uint32 cubData, bool bReliable)
	{
		return true;
	}
	bool IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32* pcubMsgSize)
	{
		return true;
	}
	bool RetrieveDataFromSocket(SNetSocket_t hSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize)
	{
		return false;
	}
	bool IsDataAvailable(SNetListenSocket_t hListenSocket, uint32* pcubMsgSize, SNetSocket_t* phSocket)
	{
		return false;
	}
	bool RetrieveData(SNetListenSocket_t hListenSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize, SNetSocket_t* phSocket)
	{
		return false;
	}
	bool GetSocketInfo(SNetSocket_t hSocket, CSteamID* pSteamIDRemote, int* peSocketStatus, SteamIPAddress_t* punIPRemote, uint16* punPortRemote)
	{
		return false;
	}
	bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, SteamIPAddress_t* pnIP, uint16* pnPort)
	{
		return false;
	}
	ESNetSocketConnectionType GetSocketConnectionType(SNetSocket_t hSocket)
	{
		return k_ESNetSocketConnectionTypeNotConnected;
	}
	int GetMaxPacketSize(SNetSocket_t hSocket)
	{
		return 0;
	}
};