// MenuAppDoc.h : interface of the CMenuAppDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MENUAPPDOC_H__4C682079_9CF0_439E_AA7C_F81A5E26E227__INCLUDED_)
#define AFX_MENUAPPDOC_H__4C682079_9CF0_439E_AA7C_F81A5E26E227__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMenuAppDoc : public CDocument
{
protected: // create from serialization only
	CMenuAppDoc();
	DECLARE_DYNCREATE(CMenuAppDoc)

// Attributes
public:
	char str[1000000];
	unsigned long strlen;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMenuAppDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMenuAppDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMenuAppDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENUAPPDOC_H__4C682079_9CF0_439E_AA7C_F81A5E26E227__INCLUDED_)
