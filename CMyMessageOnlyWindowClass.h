#pragma once

class CMyMessageOnlyWindowClass : public CWnd
{
	DECLARE_DYNAMIC(CMyMessageOnlyWindowClass)

public:
	CMyMessageOnlyWindowClass();
	virtual ~CMyMessageOnlyWindowClass();

protected:
	DECLARE_MESSAGE_MAP()
	afx_msg LRESULT DoNOOP(WPARAM wParam, LPARAM lParam);
};


