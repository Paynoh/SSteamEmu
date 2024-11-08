#pragma once
#include "steam/isteamremotestorage.h"
#include "FileUtils.hpp"





class Steam_RemoteStorage : public ISteamRemoteStorage
{
public:
	bool FileWrite(const char* pchFile, const void* pvData, int32 cubData)
	{
		std::string FullPath = BASE_DIRECTORY + pchFile;
		if (!CreateDirectoriesForFile(FullPath))
			return false;

		// Open the file for writing
		if (HANDLE File = CreateFileA(FullPath.c_str(), GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr); File != INVALID_HANDLE_VALUE)
		{
			DWORD BytesWritten = 0;
			if (WriteFile(File, pvData, cubData, &BytesWritten, nullptr))
			{
				CloseHandle(File);
				return true;
			}
			else
			{
				CloseHandle(File);
				return false;
			}
		}
		else
		{
			return false;
		}
	}

	int32 FileRead(const char* pchFile, void* pvData, int32 cubDataToRead) override
	{
		std::string FileName = GetFileName(pchFile);
		std::string FullPath = BASE_DIRECTORY + FileName;
		HANDLE File = CreateFileA(FullPath.c_str(), GENERIC_READ, 0, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
		if (File == INVALID_HANDLE_VALUE)
		{
			return 0;
		}

		DWORD BytesRead = 0;
		if (ReadFile(File, pvData, cubDataToRead, &BytesRead, nullptr))
		{
			CloseHandle(File); 
			return static_cast<int32>(BytesRead);
		}
		else
		{
			
			CloseHandle(File);
			return 0;
		}
	}



	//Don't need them
	SteamAPICall_t FileWriteAsync(const char* pchFile, const void* pvData, uint32 cubData) override { return 0; }
	SteamAPICall_t FileReadAsync(const char* pchFile, uint32 nOffset, uint32 cubToRead) override { return 0; }
	bool FileReadAsyncComplete(SteamAPICall_t hReadCall, void* pvBuffer, uint32 cubToRead) override { return false; }
	bool FileForget(const char* pchFile) override { return false; }
	bool FileDelete(const char* pchFile) override { return false; }
	SteamAPICall_t FileShare(const char* pchFile) override { return 0; }
	bool SetSyncPlatforms(const char* pchFile, ERemoteStoragePlatform eRemoteStoragePlatform) override { return false; }

	// File operations that cause network IO
	UGCFileWriteStreamHandle_t FileWriteStreamOpen(const char* pchFile) override { return 0; }
	bool FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, const void* pvData, int32 cubData) override { return false; }
	bool FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle) override { return false; }
	bool FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle) override { return false; }

	// File information
	bool FileExists(const char* pchFile) override { return true; }
	bool FilePersisted(const char* pchFile) override { return false; }
	int32 GetFileSize(const char* pchFile) override { return 0; }
	int64 GetFileTimestamp(const char* pchFile) override { return 0; }
	ERemoteStoragePlatform GetSyncPlatforms(const char* pchFile) override { return k_ERemoteStoragePlatformNone; }

	// Iteration
	int32 GetFileCount() override { return 0; }
	const char* GetFileNameAndSize(int iFile, int32* pnFileSizeInBytes) override { return ""; }

	// Configuration management
	bool GetQuota(uint64* pnTotalBytes, uint64* puAvailableBytes) override { return false; }
	bool IsCloudEnabledForAccount() override { return false; }
	bool IsCloudEnabledForApp() override { return false; }
	void SetCloudEnabledForApp(bool bEnabled) override {}

	// User-generated content
	SteamAPICall_t UGCDownload(UGCHandle_t hContent, uint32 unPriority) override { return 0; }
	bool GetUGCDownloadProgress(UGCHandle_t hContent, int32* pnBytesDownloaded, int32* pnBytesExpected) override { return false; }
	bool GetUGCDetails(UGCHandle_t hContent, AppId_t* pnAppID, char** ppchName, int32* pnFileSizeInBytes, CSteamID* pSteamIDOwner) override { return false; }
	int32 UGCRead(UGCHandle_t hContent, void* pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction) override { return 0; }
	int32 GetCachedUGCCount() override { return 0; }
	UGCHandle_t GetCachedUGCHandle(int32 iCachedContent) override { return 0; }

	// Publishing UGC
	SteamAPICall_t PublishWorkshopFile(const char* pchFile, const char* pchPreviewFile, AppId_t nConsumerAppId, const char* pchTitle, const char* pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t* pTags, EWorkshopFileType eWorkshopFileType) override { return 0; }
	PublishedFileUpdateHandle_t CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) override { return 0; }
	bool UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, const char* pchFile) override { return false; }
	bool UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, const char* pchPreviewFile) override { return false; }
	bool UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, const char* pchTitle) override { return false; }
	bool UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, const char* pchDescription) override { return false; }
	bool UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility) override { return false; }
	bool UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t* pTags) override { return false; }
	SteamAPICall_t CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle) override { return 0; }
	SteamAPICall_t GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld) override { return 0; }
	SteamAPICall_t DeletePublishedFile(PublishedFileId_t unPublishedFileId) override { return 0; }
	SteamAPICall_t EnumerateUserPublishedFiles(uint32 unStartIndex) override { return 0; }
	SteamAPICall_t SubscribePublishedFile(PublishedFileId_t unPublishedFileId) override { return 0; }
	SteamAPICall_t EnumerateUserSubscribedFiles(uint32 unStartIndex) override { return 0; }
	SteamAPICall_t UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) override { return 0; }
	bool UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, const char* pchChangeDescription) override { return false; }
	SteamAPICall_t GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) override { return 0; }
	SteamAPICall_t UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) override { return 0; }
	SteamAPICall_t GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) override { return 0; }
	SteamAPICall_t EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t* pRequiredTags, SteamParamStringArray_t* pExcludedTags) override { return 0; }
	SteamAPICall_t PublishVideo(EWorkshopVideoProvider eVideoProvider, const char* pchVideoAccount, const char* pchVideoIdentifier, const char* pchPreviewFile, AppId_t nConsumerAppId, const char* pchTitle, const char* pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t* pTags) override { return 0; }
	SteamAPICall_t SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction) override { return 0; }
	SteamAPICall_t EnumeratePublishedFilesByUserAction(EWorkshopFileAction eAction, uint32 unStartIndex) override { return 0; }
	SteamAPICall_t EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t* pTags, SteamParamStringArray_t* pUserTags) override { return 0; }
	SteamAPICall_t UGCDownloadToLocation(UGCHandle_t hContent, const char* pchLocation, uint32 unPriority) override { return 0; }

	// Cloud dynamic state change notification
	int32 GetLocalFileChangeCount() override { return 0; }
	const char* GetLocalFileChange(int iFile, ERemoteStorageLocalFileChange* pEChangeType, ERemoteStorageFilePathType* pEFilePathType) override { return ""; }

	// Indicate to Steam the beginning / end of a set of local file operations
	bool BeginFileWriteBatch() override { return false; }
	bool EndFileWriteBatch() override { return false; }
};