#pragma once
#include "FileItem.h"

bool recordPath(wstring* result);
bool dirExists(const wstring& dirName_in);
void listContent(wstring firstPath, filesList *foundFiles);
void findDuplicates(filesList *files, vector<filesList*> *duplicates);
void printDuplicatesLists(vector<filesList*> *duplicates);
void clearSearchResult(filesList *foundFiles);
void clearDuplicateLists(vector<filesList*> *duplicates);
