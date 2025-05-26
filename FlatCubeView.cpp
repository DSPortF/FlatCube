// FlatCubeView.cpp : implementation of the CFlatCubeView class
//

#include "stdafx.h"
#include "FlatCube.h"

#include "FlatCubeDoc.h"
#include "FlatCubeView.h"

CButton *ShuffleButton, *ResetButton;
CBitmapButton *UpButtons[12], *DownButtons[12], *LeftButtons[12], *RightButtons[12];
int CubeGrid[12][12];
int DigitGrid[12][12];
int KeyX=0, KeyY=0;

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFlatCubeView

IMPLEMENT_DYNCREATE(CFlatCubeView, CView)

BEGIN_MESSAGE_MAP(CFlatCubeView, CView)
	//{{AFX_MSG_MAP(CFlatCubeView)
	ON_WM_CREATE()
	ON_WM_CHAR()
	ON_WM_KEYDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFlatCubeView construction/destruction

CFlatCubeView::CFlatCubeView()
{
	// TODO: add construction code here
	ShuffleButton = new CButton();
	ResetButton = new CButton();

	for (int i=0; i<12; i++)
	{
		UpButtons[i] = new CBitmapButton();
		DownButtons[i] = new CBitmapButton();
		LeftButtons[i] = new CBitmapButton();
		RightButtons[i] = new CBitmapButton();
	}
}

CFlatCubeView::~CFlatCubeView()
{
	delete ShuffleButton;
	delete ResetButton;

	for (int i=0; i<12; i++)
	{
		delete UpButtons[i];
		delete DownButtons[i];
		delete LeftButtons[i];
		delete RightButtons[i];
	}
}

BOOL CFlatCubeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CFlatCubeView drawing

void CFlatCubeView::OnDraw(CDC* pDC)
{
	CFlatCubeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	for (int i=0; i<12; i++)
	{
		for (int j=0; j<12; j++)
		{
			COLORREF BoxCol;

			switch (CubeGrid[i][j])
			{
			case  0: BoxCol = RGB(255,   0,   0); break; //    red
			case  1: BoxCol = RGB(  0,   0, 255); break; //    blue
			case  2: BoxCol = RGB(  0, 255,   0); break; //    green
			case  3: BoxCol = RGB(255, 255,   0); break; //    yellow
			case  4: BoxCol = RGB(255,   0, 255); break; //    pink
			case  5: BoxCol = RGB(192,   0,   0); break; // dk red
			case  6: BoxCol = RGB(  0,   0, 192); break; // dk blue
			case  7: BoxCol = RGB(  0, 192,   0); break; // dk green
			case  8: BoxCol = RGB(192, 192,   0); break; // dk yellow
			case  9: BoxCol = RGB(  0, 255, 255); break; //    cyan
			case 10: BoxCol = RGB(  0, 192, 192); break; // dk cyan
			case 11: BoxCol = RGB(128, 128, 128); break; // dk grey
			case 12: BoxCol = RGB(  0,   0,   0); break; //    black
			case 13: BoxCol = RGB(128,   0, 128); break; // dk pink (purple?)
			case 14: BoxCol = RGB(192, 192, 192); break; // lt grey
			case 15: BoxCol = RGB(255, 255, 192); break; // lt yellow
			}

			switch (CubeGrid[i][j])
			{
				// White text is a little difficult to read on
				// green(2), yellow(3), ...?
			case 2:
			case 3:  pDC->SetTextColor(RGB(  0,  0,  0)); break;
			default: pDC->SetTextColor(RGB(255,255,255)); break;
			}
						   
			CRect BoxRect(33+24*i+1, 33+24*j+1, 57+24*i-1, 57+24*j-1);
			CBrush BoxBrush(BoxCol);
			pDC->FillRect(BoxRect, &BoxBrush);

			if (DigitGrid[i][j] >= 0 && DigitGrid[i][j] <= 15)
			{
				char Text[2];
				Text[0] = "0123456789ABCDEF"[DigitGrid[i][j]];
				Text[1] = 0;
				pDC->SetBkColor(BoxCol);
				pDC->DrawText(Text, -1, BoxRect,
					DT_SINGLELINE | DT_CENTER | DT_VCENTER);
			}
			if (i==KeyX && j==KeyY)
			{
				BoxRect.left--;
				BoxRect.right++;
				BoxRect.top--;
				BoxRect.bottom++;
				CBrush KeyCurBrush(RGB(0,0,0));
				pDC->FrameRect(BoxRect,&KeyCurBrush);
			}
		}
	}
}

/////////////////////////////////////////////////////////////////////////////
// CFlatCubeView diagnostics

#ifdef _DEBUG
void CFlatCubeView::AssertValid() const
{
	CView::AssertValid();
}

void CFlatCubeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFlatCubeDoc* CFlatCubeView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFlatCubeDoc)));
	return (CFlatCubeDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFlatCubeView message handlers

BOOL CFlatCubeView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext) 
{
	return CWnd::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}

int CFlatCubeView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	ResetGrid();
	
	CRect ShuffleButtonRect(360, 33, 420, 57);
	ShuffleButton->Create("Shuffle", BS_PUSHBUTTON,
		ShuffleButtonRect, this, 50);
	ShuffleButton->ShowWindow(SW_SHOW);

	CRect ResetButtonRect(360, 81, 420, 105);
	ResetButton->Create("Reset", BS_PUSHBUTTON,
		ResetButtonRect, this, 51);
	ResetButton->ShowWindow(SW_SHOW);

	CRect UpButtonRect   ( 33,  6, 57, 30);
	CRect DownButtonRect ( 33,324, 57,348);
	CRect LeftButtonRect (  6, 33, 30, 57);
	CRect RightButtonRect(324, 33,348, 57);
	for (int i=0; i<12; i++)
	{
		UpButtons[i]   ->Create("", BS_OWNERDRAW, UpButtonRect,    this, 100+i);
		DownButtons[i] ->Create("", BS_OWNERDRAW, DownButtonRect,  this, 200+i);
		LeftButtons[i] ->Create("", BS_OWNERDRAW, LeftButtonRect,  this, 300+i);
		RightButtons[i]->Create("", BS_OWNERDRAW, RightButtonRect, this, 400+i);

		UpButtonRect.left      += 24;
		UpButtonRect.right     += 24;
		DownButtonRect.left    += 24;
		DownButtonRect.right   += 24;
		LeftButtonRect.top     += 24;
		LeftButtonRect.bottom  += 24;
		RightButtonRect.top    += 24;
		RightButtonRect.bottom += 24;

		UpButtons[i]   ->LoadBitmaps(IDB_CUP_UP, IDB_CUP_DOWN, IDB_CUP_FOCUS);
		DownButtons[i] ->LoadBitmaps(IDB_CDOWN_UP, IDB_CDOWN_DOWN, IDB_CDOWN_FOCUS);
		LeftButtons[i] ->LoadBitmaps(IDB_CLEFT_UP, IDB_CLEFT_DOWN, IDB_CLEFT_FOCUS);
		RightButtons[i]->LoadBitmaps(IDB_CRIGHT_UP, IDB_CRIGHT_DOWN, IDB_CRIGHT_FOCUS);

		UpButtons[i]->ShowWindow(SW_SHOW);
		DownButtons[i]->ShowWindow(SW_SHOW);
		LeftButtons[i]->ShowWindow(SW_SHOW);
		RightButtons[i]->ShowWindow(SW_SHOW);
	}
	
	return 0;
}

BOOL CFlatCubeView::OnCommand(WPARAM wParam, LPARAM lParam) 
{
	if (HIWORD(wParam) == BN_CLICKED ||
	    HIWORD(wParam) == BN_DOUBLECLICKED)
	{
		int wID = LOWORD(wParam) ;
		if (wID >= 400)
		{
			// right buttons

			if (wID <= 411)
			{
				RowRight(wID - 400);
			}
			return 0;
		}
		else if (wID >= 300)
		{
			// left buttons

			if (wID <= 311)
			{
				RowLeft(wID - 300);
			}
			return 0;
		}
		else if (wID >= 200)
		{
			// down buttons
			
			if (wID <= 211)
			{
				ColumnDown(wID - 200);
			}
			return 0;
		}
		else if (wID >=	100)
		{
			// up buttons	
			
			if (wID <= 111)
			{
				ColumnUp(wID - 100);
			}
			return 0;
		}
		else if (wID == 50)
		{
			OutputDebugString("User pressed Shuffle!\n");
			ShuffleGrid();
		}
		else if (wID == 51)
		{
			ResetGrid();
		}
	}

	return CView::OnCommand(wParam, lParam);
}

void CFlatCubeView::ColumnUp(int ColumnId)
{
	int temp1 = CubeGrid[ColumnId][0], temp2 = DigitGrid[ColumnId][0];
	for (int x=1; x<=11; x++)
	{
		CubeGrid[ColumnId][x-1] = CubeGrid[ColumnId][x];
		DigitGrid[ColumnId][x-1] = DigitGrid[ColumnId][x];
	}
	CubeGrid[ColumnId][11] = temp1;
	DigitGrid[ColumnId][11] = temp2;
	
	SetFocus();
	InvalidateRect(0,0);
}

void CFlatCubeView::ColumnDown(int ColumnId)
{
	int temp1 = CubeGrid[ColumnId][11], temp2 = DigitGrid[ColumnId][11];
	for (int x=10; x>=0; x--)
	{
		CubeGrid[ColumnId][x+1] = CubeGrid[ColumnId][x];
		DigitGrid[ColumnId][x+1] = DigitGrid[ColumnId][x];
	}
	CubeGrid[ColumnId][0] = temp1;
	DigitGrid[ColumnId][0] = temp2;

	SetFocus();
	InvalidateRect(0,0);
}

void CFlatCubeView::RowLeft(int ColumnId)
{
	int temp1 = CubeGrid[0][ColumnId], temp2 = DigitGrid[0][ColumnId];
	for (int x=1; x<=11; x++)
	{
		CubeGrid[x-1][ColumnId] = CubeGrid[x][ColumnId];
		DigitGrid[x-1][ColumnId] = DigitGrid[x][ColumnId];
	}
	CubeGrid[11][ColumnId] = temp1;
	DigitGrid[11][ColumnId] = temp2;

	SetFocus();
	InvalidateRect(0,0);
}

void CFlatCubeView::RowRight(int ColumnId)
{
	int temp1 = CubeGrid[11][ColumnId], temp2 = DigitGrid[11][ColumnId];
	for (int x=10; x>=0; x--)
	{
		CubeGrid[x+1][ColumnId] = CubeGrid[x][ColumnId];
		DigitGrid[x+1][ColumnId] = DigitGrid[x][ColumnId];
	}
	CubeGrid[0][ColumnId] = temp1;
	DigitGrid[0][ColumnId] = temp2;

	SetFocus();
	InvalidateRect(0,0);
}

void CFlatCubeView::ShuffleGrid()
{
	srand((unsigned)time(0));

	for (int i=0; i<250; i++)
	{
		int RowOrColId = rand() % 12;
		int Direction = rand() & 3;

		switch (Direction)
		{
		case 0:  ColumnUp   (RowOrColId);  break;
		case 1:  ColumnDown (RowOrColId);  break;
		case 2:  RowLeft    (RowOrColId);  break;
		case 3:  RowRight   (RowOrColId);  break;
		}
//		UpdateWindow();
	}
	SetFocus();
}

void CFlatCubeView::ResetGrid()
{
	for (int i=0; i<12; i++)
	{
		for (int j=0; j<12; j++)
		{
			CubeGrid[i][j]  = ((i>7) ? 2 : (i>3) ? 1 : 0) * 3 
			                + ((j>7) ? 2 : (j>3) ? 1 : 0);
			
			DigitGrid[i][j]	= (j * 4) % 16 + (i % 4);
		}
	}
	SetFocus();
	InvalidateRect(0,0);
}

void CFlatCubeView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	//InvalidateRect(0,1);
	//UpdateWindow();
	CView::OnChar(nChar, nRepCnt, nFlags);
}

void CFlatCubeView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	if (GetKeyState(VK_CONTROL)<0)
/*
		case 0:  ColumnUp   (RowOrColId);  break;
		case 1:  ColumnDown (RowOrColId);  break;
		case 2:  RowLeft    (RowOrColId);  break;
		case 3:  RowRight   (RowOrColId);  break;
*/
	{
		switch (nChar)
		{
		case 37: RowLeft    (KeyY); break;
		case 38: ColumnUp   (KeyX); break;
		case 39: RowRight   (KeyY); break;
		case 40: ColumnDown (KeyX); break;
		}
	}
	else
	{
		CRect BoxRect(33+24*KeyX, 33+24*KeyY, 57+24*KeyX, 57+24*KeyY);
		InvalidateRect(BoxRect,1);
		switch (nChar)
		{
		case 37: KeyX--; break;
		case 38: KeyY--; break;
		case 39: KeyX++; break;
		case 40: KeyY++; break;
		}
		if (KeyX<1) KeyX=0;
		if (KeyX>10) KeyX=11;
		if (KeyY<1) KeyY=0;
		if (KeyY>10) KeyY=11;
		BoxRect=CRect(33+24*KeyX, 33+24*KeyY, 57+24*KeyX, 57+24*KeyY);
		InvalidateRect(BoxRect,1);
	}
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
