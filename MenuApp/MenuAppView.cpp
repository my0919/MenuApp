// MenuAppView.cpp : implementation of the CMenuAppView class
//

#include "stdafx.h"
#include "MenuApp.h"

#include "MenuAppDoc.h"
#include "MenuAppView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMenuAppView

IMPLEMENT_DYNCREATE(CMenuAppView, CScrollView)

BEGIN_MESSAGE_MAP(CMenuAppView, CScrollView)
	//{{AFX_MSG_MAP(CMenuAppView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMenuAppView construction/destruction

CMenuAppView::CMenuAppView()
{
	// TODO: add construction code here

}

CMenuAppView::~CMenuAppView()
{
}

BOOL CMenuAppView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMenuAppView drawing

void CMenuAppView::OnDraw(CDC* pDC)
{
	CMenuAppDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	//if(pDoc->str[0] != "0")
	{
		int i = 0;
		int j = 0;
		int k = 0;
		while(i < 4000)
		{
			if(pDoc->str[i] == '\n')
			{
				j++;
				k = 0;
			}
			pDC->TextOut(10*k,20*j,pDoc->str[i]);
			i++;
			k++;
		}
		
	}


}

/////////////////////////////////////////////////////////////////////////////
// CMenuAppView printing

BOOL CMenuAppView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMenuAppView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMenuAppView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMenuAppView diagnostics

#ifdef _DEBUG
void CMenuAppView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CMenuAppView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CMenuAppDoc* CMenuAppView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMenuAppDoc)));
	return (CMenuAppDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMenuAppView message handlers
void CMenuAppView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();
	CSize sizeTotal(1000,1600);
	SetScrollSizes(MM_TEXT,sizeTotal);
}
