#if !defined(AFX_ABOUTTHIS_H__FA207FFD_779F_44F3_B5D3_AEFEB5B404ED__INCLUDED_)
#define AFX_ABOUTTHIS_H__FA207FFD_779F_44F3_B5D3_AEFEB5B404ED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AboutThis.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAboutThis dialog

class CAboutThis : public CDialog
{
// Construction
public:
	CAboutThis(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAboutThis)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutThis)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAboutThis)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ABOUTTHIS_H__FA207FFD_779F_44F3_B5D3_AEFEB5B404ED__INCLUDED_)
