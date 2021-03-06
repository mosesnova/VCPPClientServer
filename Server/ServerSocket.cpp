// ServerSocket.cpp : implementation file
//

#include "stdafx.h"
#include "Server.h"
#include "ServerSocket.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CServerSocket

CServerSocket::CServerSocket()
{
}

CServerSocket::~CServerSocket()
{
}


// Do not edit the following lines, which are needed by ClassWizard.
#if 0
BEGIN_MESSAGE_MAP(CServerSocket, CSocket)
	//{{AFX_MSG_MAP(CServerSocket)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()
#endif	// 0

/////////////////////////////////////////////////////////////////////////////
// CServerSocket member functions

void CServerSocket::OnAccept(int nErrorCode) 
{
	((CServerApp*)AfxGetApp())->m_pServerView->AddMsg("Connection Successfull");
	Accept(m_RecevingSocket);
	CSocket::OnAccept(nErrorCode);
}

void CServerSocket::OnReceive(int nErrorCode) 
{
	AfxMessageBox("Data Received");	
	CSocket::OnReceive(nErrorCode);
}
