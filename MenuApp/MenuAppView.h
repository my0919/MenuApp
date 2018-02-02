// MenuAppView.h : interface of the CMenuAppView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MENUAPPVIEW_H__99C81CC9_D866_4ECD_92F5_EEF9DE257F5F__INCLUDED_)
#define AFX_MENUAPPVIEW_H__99C81CC9_D866_4ECD_92F5_EEF9DE257F5F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMenuAppView : public CScrollView
{
protected: // create from serialization only
	CMenuAppView();
	DECLARE_DYNCREATE(CMenuAppView)

// Attributes
public:
	CMenuAppDoc* GetDocument();

// Operations
public:
	void OnInitialUpdate();
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMenuAppView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMenuAppView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMenuAppView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MenuAppView.cpp
inline CMenuAppDoc* CMenuAppView::GetDocument()
   { return (CMenuAppDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENUAPPVIEW_H__99C81CC9_D866_4ECD_92F5_EEF9DE257F5F__INCLUDED_)
