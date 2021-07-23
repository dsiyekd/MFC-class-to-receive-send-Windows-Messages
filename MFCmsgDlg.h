
// MFCmsgDlg.h : header file
//

#pragma once
#include "CMyMessageOnlyWindowClass.h"


// CMFCmsgDlg dialog
class CMFCmsgDlg : public CDialogEx
{
// Construction
public:
	CMFCmsgDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCMSG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CMyMessageOnlyWindowClass* myMessageOnlyClass;
};
