#pragma once
class CGlobalFunction
{
public:
	CGlobalFunction();
	~CGlobalFunction();

public:
	CStringA fnWideCharToMultiByte(const WCHAR* pWideChar);
	CStringW fnMultiByteToWideChar(const TCHAR* pMultiChar);
};

