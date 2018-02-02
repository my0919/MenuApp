// MenuAppDoc.cpp : implementation of the CMenuAppDoc class
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
// CMenuAppDoc

IMPLEMENT_DYNCREATE(CMenuAppDoc, CDocument)

BEGIN_MESSAGE_MAP(CMenuAppDoc, CDocument)
	//{{AFX_MSG_MAP(CMenuAppDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMenuAppDoc construction/destruction

CMenuAppDoc::CMenuAppDoc()
{
	// TODO: add one-time construction code here
	for(int i = 0; i < 4096; i++)str[i] = ' ';
}

CMenuAppDoc::~CMenuAppDoc()
{
}

BOOL CMenuAppDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMenuAppDoc serialization

void CMenuAppDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
		//for(int i = 0; i < strlen; i++)
		//	ar<<str[i];
	}
	else
	{
		CString cs;
		cs.Format("±äÁ¿%d",ar.GetFile()->GetLength());
		AfxMessageBox(cs);
		for(int i = 0; i < ar.GetFile()->GetLength(); i++)
			ar>>str[i];
		strlen = ar.GetFile()->GetLength();
	/*	char a[100];
		int k = 0;
		int i = 0;
		for(int j = 0; j < 4096; j++)
		{
			
			ar>>a[k];
			if(a[k] != '\n' && j!=4095)
			{	
				k++;
			}
			else
			{
				a[k] = '\0';
				str[i] = a;
				memset(a,0,sizeof(a));
				k = 0;
				i++;
			}
		}
	*/	
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMenuAppDoc diagnostics

#ifdef _DEBUG
void CMenuAppDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMenuAppDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMenuAppDoc commands
