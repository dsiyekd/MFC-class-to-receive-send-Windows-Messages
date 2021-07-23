// CMyMessageOnlyWindowClass.cpp : implementation file
//

#include "pch.h"
#include "MFCmsg.h"
#include "CMyMessageOnlyWindowClass.h"

// CMyMessageOnlyWindowClass

IMPLEMENT_DYNAMIC(CMyMessageOnlyWindowClass, CWnd)

CMyMessageOnlyWindowClass::CMyMessageOnlyWindowClass()
{
	CString wcn = ::AfxRegisterWndClass(NULL);
	BOOL created = this->Create(wcn, _T("YourExcellentWindowClass"), 0, { 0, 0, 0, 0 }, this, /*HWND_MESSAGE,*/ 0, 0);
}

CMyMessageOnlyWindowClass::~CMyMessageOnlyWindowClass()
{
}

BEGIN_MESSAGE_MAP(CMyMessageOnlyWindowClass, CWnd)
	ON_MESSAGE(WM_USER + 1, DoNOOP)
END_MESSAGE_MAP()

// CMyMessageOnlyWindowClass message handlers
afx_msg LRESULT CMyMessageOnlyWindowClass::DoNOOP(WPARAM wParam, LPARAM lParam)
{
	AfxMessageBox(_T("Get Reaaady for a Ruuummmmmmmbllllle!"));
	return LRESULT(true);
}
