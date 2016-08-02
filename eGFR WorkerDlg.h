// eGFR WorkerDlg.h : header file
//

#if !defined(AFX_EGFRWORKERDLG_H__5855BA17_703E_4281_94DE_D9FB04C52144__INCLUDED_)
#define AFX_EGFRWORKERDLG_H__5855BA17_703E_4281_94DE_D9FB04C52144__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CEGFRWorkerDlg dialog

class CEGFRWorkerDlg : public CDialog
{
// Construction
public:
	CEGFRWorkerDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CEGFRWorkerDlg)
	enum { IDD = IDD_EGFRWORKER_DIALOG };
	CComboBox	m_gender;
	int		m_age;
	float	m_weight;
	float	m_scr;
	float	m_egfr;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEGFRWorkerDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CEGFRWorkerDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCalculate();
	afx_msg void OnExit();
	afx_msg void OnAboutThis();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EGFRWORKERDLG_H__5855BA17_703E_4281_94DE_D9FB04C52144__INCLUDED_)
