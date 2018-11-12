#pragma once

#include <fstream>
#include <iostream>
#include <windows.h>
#include <string.h>
#include <tchar.h>
#include <vector>

using namespace std;

class FileItem
{
public:
	wstring name;
	wstring path;
	bool marked = false;

	wstring fullPath();
	FileItem();
	~FileItem();
};
typedef vector<FileItem*> filesList;
