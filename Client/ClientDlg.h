// ClientDlg.h : header file
//

#if !defined(AFX_CLIENTDLG_H__44C84D03_6FC9_4EB9_94B9_CC77310DD09E__INCLUDED_)
#define AFX_CLIENTDLG_H__44C84D03_6FC9_4EB9_94B9_CC77310DD09E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CClientDlg dialog
#include "ClientSocket.h"

class CClientDlg : public CDialog
{
// Construction
public:
	CClientDlg(CWnd* pParent = NULL);	// standard constructor

	CClientSocket m_ClientSocket; 

// Dialog Data
	//{{AFX_DATA(CClientDlg)
	enum { IDD = IDD_CLIENT_DIALOG };
	CString	m_strIPAddress;
	CString	m_strMessage;
	UINT	m_iPort;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClientDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CClientDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnConnect();
	afx_msg void OnButtonSend();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLIENTDLG_H__44C84D03_6FC9_4EB9_94B9_CC77310DD09E__INCLUDED_)
