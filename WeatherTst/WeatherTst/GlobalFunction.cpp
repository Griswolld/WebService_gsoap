#include "stdafx.h"
#include "GlobalFunction.h"


CGlobalFunction::CGlobalFunction()
{
}


CGlobalFunction::~CGlobalFunction()
{
}

CStringA CGlobalFunction::fnWideCharToMultiByte(const WCHAR* pWideChar)
{
	CStringA strValue;
	if (NULL == pWideChar)
		return strValue;
	CHAR* pAnsi = NULL;	
	int needBytes = WideCharToMultiByte(CP_ACP, 0, pWideChar, -1, NULL, 0, NULL, NULL); //获取缓冲区的大小，并申请空间，缓冲区大小是按字节计算的
	if (needBytes > 0)
	{
		pAnsi = new CHAR[needBytes + 1];
		ZeroMemory(pAnsi, needBytes + 1);
		WideCharToMultiByte(CP_ACP, 0, pWideChar, -1, pAnsi, needBytes, NULL, NULL);
		strValue.Format(_T("%s"), pAnsi);
		delete[] pAnsi;
	}
	return strValue;
}
CStringW CGlobalFunction::fnMultiByteToWideChar(const TCHAR* pMultiChar)
{
	CStringW strValue;
	if (!pMultiChar)
		return strValue;
	WCHAR* pWideBuf = NULL;
	int needWideBytes = MultiByteToWideChar(CP_ACP, 0, pMultiChar, -1, NULL, NULL);//获取缓冲区的大小，并申请空间，缓冲区大小是按字节计算的
	if (needWideBytes > 0)
	{
		pWideBuf = new WCHAR[needWideBytes + 1];
		ZeroMemory(pWideBuf, (needWideBytes + 1) * sizeof(WCHAR));
		MultiByteToWideChar(CP_ACP, 0, pMultiChar, -1, pWideBuf, needWideBytes);
		strValue.Format(L"%s",pWideBuf);
		delete[] pWideBuf;
	}
	return strValue;
}
