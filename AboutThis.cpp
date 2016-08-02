// AboutThis.cpp : implementation file
//

#include "stdafx.h"
#include "eGFR Worker.h"
#include "AboutThis.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutThis dialog


CAboutThis::CAboutThis(CWnd* pParent /*=NULL*/)
	: CDialog(CAboutThis::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAboutThis)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CAboutThis::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutThis)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAboutThis, CDialog)
	//{{AFX_MSG_MAP(CAboutThis)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAboutThis message handlers
