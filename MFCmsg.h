
// MFCmsg.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
//#include "CMyMessageOnlyWindowClass.h"


// CMFCmsgApp:
// See MFCmsg.cpp for the implementation of this class
//

class CMFCmsgApp : public CWinApp
{
public:
	CMFCmsgApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()

//	CMyMessageOnlyWindowClass* myClass;
};

extern CMFCmsgApp theApp;
