// eGFR Worker.h : main header file for the EGFR WORKER application
//

#if !defined(AFX_EGFRWORKER_H__FE245E1C_69B3_4BDB_9F48_78E4742AFDB6__INCLUDED_)
#define AFX_EGFRWORKER_H__FE245E1C_69B3_4BDB_9F48_78E4742AFDB6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CEGFRWorkerApp:
// See eGFR Worker.cpp for the implementation of this class
//

class CEGFRWorkerApp : public CWinApp
{
public:
	CEGFRWorkerApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEGFRWorkerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CEGFRWorkerApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EGFRWORKER_H__FE245E1C_69B3_4BDB_9F48_78E4742AFDB6__INCLUDED_)
