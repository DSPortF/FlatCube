// FlatCubeDoc.cpp : implementation of the CFlatCubeDoc class
//

#include "stdafx.h"
#include "FlatCube.h"

#include "FlatCubeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFlatCubeDoc

IMPLEMENT_DYNCREATE(CFlatCubeDoc, CDocument)

BEGIN_MESSAGE_MAP(CFlatCubeDoc, CDocument)
	//{{AFX_MSG_MAP(CFlatCubeDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFlatCubeDoc construction/destruction

CFlatCubeDoc::CFlatCubeDoc()
{
	// TODO: add one-time construction code here

}

CFlatCubeDoc::~CFlatCubeDoc()
{
}

BOOL CFlatCubeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CFlatCubeDoc serialization

void CFlatCubeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CFlatCubeDoc diagnostics

#ifdef _DEBUG
void CFlatCubeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFlatCubeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFlatCubeDoc commands
