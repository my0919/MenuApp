// MenuApp.h : main header file for the MENUAPP application
//

#if !defined(AFX_MENUAPP_H__B13915D0_B283_418F_95AC_023641779A5D__INCLUDED_)
#define AFX_MENUAPP_H__B13915D0_B283_418F_95AC_023641779A5D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMenuAppApp:
// See MenuApp.cpp for the implementation of this class
//

class CMenuAppApp : public CWinApp
{
public:
	CMenuAppApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMenuAppApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMenuAppApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENUAPP_H__B13915D0_B283_418F_95AC_023641779A5D__INCLUDED_)
