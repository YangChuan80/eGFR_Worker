// eGFR WorkerDlg.cpp : implementation file
//

#include "stdafx.h"
#include "eGFR Worker.h"
#include "eGFR WorkerDlg.h"
#include "AboutThis.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEGFRWorkerDlg dialog

CEGFRWorkerDlg::CEGFRWorkerDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEGFRWorkerDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CEGFRWorkerDlg)
	m_age = 0;
	m_weight = 0.0f;
	m_scr = 0.0f;
	m_egfr = 0.0f;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEGFRWorkerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEGFRWorkerDlg)
	DDX_Control(pDX, IDC_COMBO1, m_gender);
	DDX_Text(pDX, IDC_EDIT1, m_age);
	DDX_Text(pDX, IDC_EDIT2, m_weight);
	DDX_Text(pDX, IDC_EDIT3, m_scr);
	DDX_Text(pDX, IDC_EDIT4, m_egfr);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CEGFRWorkerDlg, CDialog)
	//{{AFX_MSG_MAP(CEGFRWorkerDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnCalculate)
	ON_BN_CLICKED(IDC_BUTTON2, OnExit)
	ON_BN_CLICKED(IDC_BUTTON3, OnAboutThis)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEGFRWorkerDlg message handlers

BOOL CEGFRWorkerDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	this->m_gender.AddString((LPCTSTR)"Male");
	this->m_gender.AddString((LPCTSTR)"Female");
	this->m_gender.SetCurSel(1);

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CEGFRWorkerDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CEGFRWorkerDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CEGFRWorkerDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CEGFRWorkerDlg::OnCalculate() 
{

	
	UpdateData(TRUE);
	
	if(this->m_age==0||this->m_scr==0||this->m_age==0)
		MessageBox("Sorry, please check your data input!","Error",MB_OK|MB_ICONINFORMATION);
	else
	{
		
		if(this->m_gender.GetCurSel()==1)
			this->m_egfr=((140-this->m_age)*this->m_weight*88.4)/(72*this->m_scr);
		if(this->m_gender.GetCurSel()==0)
			this->m_egfr=((140-this->m_age)*this->m_weight*88.4*0.85)/(72*this->m_scr);
		
		UpdateData(FALSE);
	}

}

void CEGFRWorkerDlg::OnExit() 
{

	OnOK();
}

void CEGFRWorkerDlg::OnAboutThis() 
{
	CAboutThis dlg;
	dlg.DoModal();
	
}
