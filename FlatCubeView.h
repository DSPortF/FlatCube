// FlatCubeView.h : interface of the CFlatCubeView class
//
/////////////////////////////////////////////////////////////////////////////

class CFlatCubeView : public CView
{
protected: // create from serialization only
	CFlatCubeView();
	DECLARE_DYNCREATE(CFlatCubeView)

// Attributes
public:
	CFlatCubeDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFlatCubeView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CFlatCubeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

private:
	void ColumnUp(int ColumnId);
	void ColumnDown(int ColumnId);
	void RowLeft(int ColumnId);
	void RowRight(int ColumnId);

	void ShuffleGrid();
	void ResetGrid();


protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFlatCubeView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in FlatCubeView.cpp
inline CFlatCubeDoc* CFlatCubeView::GetDocument()
   { return (CFlatCubeDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////
