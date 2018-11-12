#include "FileItem.h"

	wstring FileItem::fullPath()
	{
		return path + name;
	}

	FileItem::FileItem()
	{	}

	FileItem::~FileItem()
	{	}
