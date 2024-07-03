#pragma once
#include "steam/isteamfriends.h"
#include "steam/steamclientpublic.h"
//#include "INI.hpp"
class Steam_Friends : public ISteamFriends
{
public:
	Steam_Friends() {};
	~Steam_Friends() {};

	const char* GetPersonaName() override
	{
		return "Payn0h";
	}
	SteamAPICall_t SetPersonaName(const char* pchPersonaName) override
	{
		return 0;
	}

	EPersonaState GetPersonaState()
	{
		return k_EPersonaStateOffline;
	}
	int GetFriendCount(int iFriendFlags) override
	{
		return 0; //Sad... 
	}
	CSteamID GetFriendByIndex(int iFriend, int iFriendFlags) override
	{
		return CSteamID(); // Using default constructor
	}

	EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend) override
	{
		return k_EFriendRelationshipNone;
	}

	EPersonaState GetFriendPersonaState(CSteamID steamIDFriend) override
	{
		return k_EPersonaStateOffline;
	}

	const char* GetFriendPersonaName(CSteamID steamIDFriend) override
	{
		return "Payn0h1";
	}
	bool GetFriendGamePlayed(CSteamID steamIDFriend, STEAM_OUT_STRUCT() FriendGameInfo_t* pFriendGameInfo) override
	{
		return false;
	}
	const char* GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) override
	{
		return "";
	}
	int GetFriendSteamLevel(CSteamID steamIDFriend) override
	{
		return 0;
	}
	const char* GetPlayerNickname(CSteamID steamIDPlayer) override
	{
		return NULL;
	}
	int GetFriendsGroupCount() override
	{
		return 0;
	}
	FriendsGroupID_t GetFriendsGroupIDByIndex(int iFG) override
	{
		return k_FriendsGroupID_Invalid;
	}
	const char* GetFriendsGroupName(FriendsGroupID_t friendsGroupID) override
	{
		return NULL;
	}
	int GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID) override
	{
		return 0;
	}
	void GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, STEAM_OUT_ARRAY_CALL(nMembersCount, GetFriendsGroupMembersCount, friendsGroupID) CSteamID* pOutSteamIDMembers, int nMembersCount) override
	{

	}
	bool HasFriend(CSteamID steamIDFriend, int iFriendFlags) override
	{
		return false;
	}

	int GetClanCount() override
	{
		return 0;
	}

	CSteamID GetClanByIndex(int iClan) override
	{
		return CSteamID(); // Using default constructor
	}
	const char* GetClanName(CSteamID steamIDClan) override
	{
		return "FakeClan";
	}
	const char* GetClanTag(CSteamID steamIDClan) override
	{
		return "DUMB";
	}
	bool GetClanActivityCounts(CSteamID steamIDClan, int* pnOnline, int* pnInGame, int* pnChatting) override
	{
		return false;
	}
	SteamAPICall_t DownloadClanActivityCounts(STEAM_ARRAY_COUNT(cClansToRequest) CSteamID* psteamIDClans, int cClansToRequest) override
	{
		return k_uAPICallInvalid;
	}

	int GetFriendCountFromSource(CSteamID steamIDSource) override
	{
		return 0;
	}
	CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) override
	{
		return CSteamID(); // Using default constructor
	}

	bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) override
	{
		return true;
	}
	void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) override
	{

	}
	void ActivateGameOverlay(const char* pchDialog) override
	{

	}
	void ActivateGameOverlayToUser(const char* pchDialog, CSteamID steamID) override
	{

	}
	void ActivateGameOverlayToWebPage(const char* pchURL, EActivateGameOverlayToWebPageMode eMode = k_EActivateGameOverlayToWebPageMode_Default) override
	{

	}
	void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag) override
	{

	}

	void SetPlayedWith(CSteamID steamIDUserPlayedWith) override
	{

	}
	void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) override
	{

	}
	int GetSmallFriendAvatar(CSteamID steamIDFriend) override
	{
		return 0;
	}

	int GetMediumFriendAvatar(CSteamID steamIDFriend) override
	{
		return 0;
	}
	int GetLargeFriendAvatar(CSteamID steamIDFriend) override
	{
		return 0;
	}
	bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) override
	{
		return false;
	}
	SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan) override
	{
		return k_uAPICallInvalid;
	}
	CSteamID GetClanOwner(CSteamID steamIDClan) override
	{
		return CSteamID(); // Using default constructor
	}
	int GetClanOfficerCount(CSteamID steamIDClan) override
	{
		return 0;
	}
	CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) override
	{
		return CSteamID(); // Using default constructor
	}
	uint32 GetUserRestrictions() override
	{
		return 0;
	}

	bool SetRichPresence(const char* pchKey, const char* pchValue) override
	{
		return true;
	}
	void ClearRichPresence() override
	{

	}

	const char* GetFriendRichPresence(CSteamID steamIDFriend, const char* pchKey) override
	{
		return "";
	}

	int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) override
	{
		return 0;
	}

	const char* GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey) override
	{
		return "";
	}

	void RequestFriendRichPresence(CSteamID steamIDFriend)
	{

	}
	bool InviteUserToGame(CSteamID steamIDFriend, const char* pchConnectString) override
	{
		return true;
	}
	int GetCoplayFriendCount()
	{
		return 1719620798;
	}

	CSteamID GetCoplayFriend(int iCoplayFriend) override
	{
		return CSteamID(); // Using default constructor
	}

	int GetFriendCoplayTime(CSteamID steamIDFriend) override
	{
		return 1719620798;
	}

	AppId_t GetFriendCoplayGame(CSteamID steamIDFriend) override
	{
		return 0;
	}

	SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan) override
	{
		return k_uAPICallInvalid;
	}

	bool LeaveClanChatRoom(CSteamID steamIDClan) override
	{
		return false;
	}
	int GetClanChatMemberCount(CSteamID steamIDClan) override
	{
		return 0;
	}

	CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser) override
	{
		return CSteamID(); // Using default constructor
	}

	bool SendClanChatMessage(CSteamID steamIDClanChat, const char* pchText) override
	{
		return true;
	}
	int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void* prgchText, int cchTextMax, EChatEntryType* peChatEntryType, STEAM_OUT_STRUCT() CSteamID* psteamidChatter) override
	{
		return 0;
	}
	bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) override
	{
		return false;
	}

	bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) override
	{
		return false;
	}
	bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat) override
	{
		return false;
	}
	bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat) override
	{
		return false;
	}
	bool SetListenForFriendsMessages(bool bInterceptEnabled) override
	{
		return false;
	}
	bool ReplyToFriendMessage(CSteamID steamIDFriend, const char* pchMsgToSend) override
	{
		return false;
	}
	int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void* pvData, int cubData, EChatEntryType* peChatEntryType) override
	{
		return 0;
	}

	SteamAPICall_t GetFollowerCount(CSteamID steamID) override
	{
		return 0;
	}
	SteamAPICall_t IsFollowing(CSteamID steamID) override
	{
		return 0;
	}
	SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex) override
	{
		return k_uAPICallInvalid;
	}
	bool IsClanPublic(CSteamID steamIDClan) override
	{
		return false;
	}
	bool IsClanOfficialGameGroup(CSteamID steamIDClan) override
	{
		return false;
	}

	int GetNumChatsWithUnreadPriorityMessages() override
	{
		return 0;
	}

	void ActivateGameOverlayRemotePlayTogetherInviteDialog(CSteamID steamIDLobby) override
	{

	}

	bool RegisterProtocolInOverlayBrowser(const char* pchProtocol) override
	{
		return true;
	}
	void ActivateGameOverlayInviteDialogConnectString(const char* pchConnectString) override
	{

	}
	SteamAPICall_t RequestEquippedProfileItems(CSteamID steamID) override
	{
		return k_uAPICallInvalid;
	}

	bool BHasEquippedProfileItem(CSteamID steamID, ECommunityProfileItemType itemType) override
	{
		return false;
	}
	const char* GetProfileItemPropertyString(CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop) override
	{
		return "X";
	}
	uint32 GetProfileItemPropertyUint(CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop) override
	{
		return 0;
	}
};



/*
#pragma once
#include "steam/isteamfriends.h"
#include "steam/steamclientpublic.h"
class Steam_Friends : public ISteamFriends
{
public:
	Steam_Friends() {};
	~Steam_Friends() {};

	const char* GetPersonaName() override
	{
		return "Payn0h";
	}
	SteamAPICall_t SetPersonaName(const char* pchPersonaName) override
	{
		return 0;
	}

	EPersonaState GetPersonaState()
	{
		return k_EPersonaStateOffline;
	}
	int GetFriendCount(int iFriendFlags) override
	{
		return 0; //Sad... 
	}
	CSteamID GetFriendByIndex(int iFriend, int iFriendFlags) override
	{
		return CSteamID();
	}

	EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend) override
	{
		return k_EFriendRelationshipNone;
	}

	EPersonaState GetFriendPersonaState(CSteamID steamIDFriend) override
	{
		return k_EPersonaStateOffline;
	}

	const char* GetFriendPersonaName(CSteamID steamIDFriend) override
	{
		return "Payn0h1";
	}
	bool GetFriendGamePlayed(CSteamID steamIDFriend, STEAM_OUT_STRUCT() FriendGameInfo_t* pFriendGameInfo) override
	{
		return false;
	}
	const char* GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) override
	{
		return "";
	}
	int GetFriendSteamLevel(CSteamID steamIDFriend) override
	{
		return 0;
	}
	const char* GetPlayerNickname(CSteamID steamIDPlayer) override
	{
		return NULL;
	}
	int GetFriendsGroupCount() override
	{
		return 0;
	}
	FriendsGroupID_t GetFriendsGroupIDByIndex(int iFG) override
	{
		return k_FriendsGroupID_Invalid;
	}
	const char* GetFriendsGroupName(FriendsGroupID_t friendsGroupID) override
	{
		return NULL;
	}
	int GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID) override
	{
		return 0;
	}
	void GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, STEAM_OUT_ARRAY_CALL(nMembersCount, GetFriendsGroupMembersCount, friendsGroupID) CSteamID* pOutSteamIDMembers, int nMembersCount) override
	{

	}
	bool HasFriend(CSteamID steamIDFriend, int iFriendFlags) override
	{
		return false;
	}

	int GetClanCount() override
	{
		return 0;
	}

	CSteamID GetClanByIndex(int iClan) override
	{
		return CSteamID();
	}
	const char* GetClanName(CSteamID steamIDClan) override
	{
		return "FakeClan";
	}
	const char* GetClanTag(CSteamID steamIDClan) override
	{
		return "DUMB";
	}
	bool GetClanActivityCounts(CSteamID steamIDClan, int* pnOnline, int* pnInGame, int* pnChatting) override
	{
		return false;
	}
	SteamAPICall_t DownloadClanActivityCounts(STEAM_ARRAY_COUNT(cClansToRequest) CSteamID* psteamIDClans, int cClansToRequest) override
	{
		return k_uAPICallInvalid;
	}

	int GetFriendCountFromSource(CSteamID steamIDSource) override
	{
		return 0;
	}
	CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) override
	{
		return CSteamID();
	}

	bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) override
	{
		return true;
	}
	void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) override
	{

	}
	void ActivateGameOverlay(const char* pchDialog) override
	{

	}
	void ActivateGameOverlayToUser(const char* pchDialog, CSteamID steamID) override
	{

	}
	void ActivateGameOverlayToWebPage(const char* pchURL, EActivateGameOverlayToWebPageMode eMode = k_EActivateGameOverlayToWebPageMode_Default) override
	{

	}
	void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag) override
	{

	}

	void SetPlayedWith(CSteamID steamIDUserPlayedWith) override
	{

	}
	void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) override
	{

	}
	int GetSmallFriendAvatar(CSteamID steamIDFriend) override
	{
		return 0;
	}

	int GetMediumFriendAvatar(CSteamID steamIDFriend) override
	{
		return 0;
	}
	int GetLargeFriendAvatar(CSteamID steamIDFriend) override
	{
		return 0;
	}
	bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) override
	{
		return false;
	}
	SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan) override
	{
		return k_uAPICallInvalid;
	}
	CSteamID GetClanOwner(CSteamID steamIDClan) override
	{
		return (CSteamID)nullptr;
	}
	int GetClanOfficerCount(CSteamID steamIDClan) override
	{
		return 0;
	}
	CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) override
	{
		return CSteamID();
	}
	uint32 GetUserRestrictions() override
	{
		return 0;
	}

	bool SetRichPresence(const char* pchKey, const char* pchValue) override
	{
		return true;
	}
	void ClearRichPresence() override
	{

	}

	const char* GetFriendRichPresence(CSteamID steamIDFriend, const char* pchKey) override
	{
		return "";
	}

	int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) override
	{
		return 0;
	}

	const char* GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey) override
	{
		return "";
	}

	void RequestFriendRichPresence(CSteamID steamIDFriend)
	{

	}
	bool InviteUserToGame(CSteamID steamIDFriend, const char* pchConnectString) override
	{
		return true;
	}
	int GetCoplayFriendCount()
	{
		return 1719620798;
	}

	CSteamID GetCoplayFriend(int iCoplayFriend) override
	{
		return CSteamID();
	}

	int GetFriendCoplayTime(CSteamID steamIDFriend) override
	{
		return 1719620798;
	}

	AppId_t GetFriendCoplayGame(CSteamID steamIDFriend) override
	{
		return 0;
	}

	SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan) override
	{
		return k_uAPICallInvalid;
	}

	bool LeaveClanChatRoom(CSteamID steamIDClan) override
	{
		return false;
	}
	int GetClanChatMemberCount(CSteamID steamIDClan) override
	{
		return 0;
	}
	
	//HERE
	CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser) override
	{
		return CSteamID()
		{
			m_steamid.m_comp.m_unAccountID = 0;
			m_steamid.m_comp.m_EAccountType = k_EAccountTypeInvalid;
			m_steamid.m_comp.m_EUniverse = k_EUniverseInvalid;
			m_steamid.m_comp.m_unAccountInstance = 0;
		}

	}


	bool SendClanChatMessage(CSteamID steamIDClanChat, const char* pchText) override
	{
		return true;
	}
	int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void* prgchText, int cchTextMax, EChatEntryType* peChatEntryType, STEAM_OUT_STRUCT() CSteamID* psteamidChatter) override
	{
		return 0;
	}
	bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) override
	{
		return false;
	}

	bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) override
	{
		return false;
	}
	bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat) override
	{
		return false;
	}
	bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat) override
	{
		return false;
	}
	bool SetListenForFriendsMessages(bool bInterceptEnabled) override
	{
		return false;
	}
	bool ReplyToFriendMessage(CSteamID steamIDFriend, const char* pchMsgToSend) override
	{
		return false;
	}
	int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void* pvData, int cubData, EChatEntryType* peChatEntryType) override
	{
		return 0;
	}

	SteamAPICall_t GetFollowerCount(CSteamID steamID) override
	{
		return 0;
	}
	SteamAPICall_t IsFollowing(CSteamID steamID) override
	{
		return 0;
	}
	SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex) override
	{
		return k_uAPICallInvalid;
	}
	bool IsClanPublic(CSteamID steamIDClan) override
	{
		return false;
	}
	bool IsClanOfficialGameGroup(CSteamID steamIDClan) override
	{
		return false;
	}

	int GetNumChatsWithUnreadPriorityMessages() override
	{
		return 0;
	}

	void ActivateGameOverlayRemotePlayTogetherInviteDialog(CSteamID steamIDLobby) override
	{

	}

	bool RegisterProtocolInOverlayBrowser(const char* pchProtocol) override
	{
		return true;
	}
	void ActivateGameOverlayInviteDialogConnectString(const char* pchConnectString) override
	{

	}
	SteamAPICall_t RequestEquippedProfileItems(CSteamID steamID) override
	{
		return k_uAPICallInvalid;
	}

	bool BHasEquippedProfileItem(CSteamID steamID, ECommunityProfileItemType itemType) override
	{
		return false;
	}
	const char* GetProfileItemPropertyString(CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop) override
	{
		return "X"; 
	}
	uint32 GetProfileItemPropertyUint(CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop) override
	{
		return 0;
	}




	public:
		CSteamID steamID;

};

*/