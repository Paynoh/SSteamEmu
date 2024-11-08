#pragma once
#include <Windows.h>
#include <string>
//Hard coding this is really bad lol
const std::string BASE_DIRECTORY = "D:\\SteamEmus\\";

bool EnsureDirectoryExists(const std::string& DirectoryPath)
{
    DWORD FileAttributes = GetFileAttributesA(DirectoryPath.c_str());


    if (FileAttributes != INVALID_FILE_ATTRIBUTES && (FileAttributes & FILE_ATTRIBUTE_DIRECTORY))
        return true;

    return CreateDirectoryA(DirectoryPath.c_str(), nullptr) || GetLastError() == ERROR_ALREADY_EXISTS;
}

bool CreateDirectoriesForFile(const std::string& FullPath)
{
    size_t Pos = BASE_DIRECTORY.length();

    // Iterate through each directory level in the path
    while ((Pos = FullPath.find_first_of("/\\", Pos)) != std::string::npos)
    {
        std::string Subdir = FullPath.substr(0, Pos++);
        if (!EnsureDirectoryExists(Subdir))
            return false;
    }
    return true;
}

std::string GetFileName(const std::string& FilePath)
{
    size_t LastSlash = FilePath.find_last_of("/\\");
    if (LastSlash == std::string::npos)
    {
        return FilePath; // No directory, return as is
    }
    return FilePath.substr(LastSlash + 1); // Return only the file name
}