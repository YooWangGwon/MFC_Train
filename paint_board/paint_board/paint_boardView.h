
// paint_boardView.h : interface of the Cpaint_boardView class
//

#pragma once


class Cpaint_boardView : public CView
{
protected: // create from serialization only
	Cpaint_boardView();
	DECLARE_DYNCREATE(Cpaint_boardView)

// Attributes
public:
	Cpaint_boardDoc* GetDocument() const;

	COLORREF m_colLine, m_colFill;	// 색
	COLORREF m_colLineXor;
	int m_nType;				// 그리기 타입
	CPoint m_pntOld, m_pntCur;	// 그리기 좌표

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~Cpaint_boardView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnChangeTool(UINT wParam);
	afx_msg void OnUpdateChangeTool(CCmdUI* pCmdUI);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLinecolor();
	afx_msg void OnFilllcolor();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in paint_boardView.cpp
inline Cpaint_boardDoc* Cpaint_boardView::GetDocument() const
   { return reinterpret_cast<Cpaint_boardDoc*>(m_pDocument); }
#endif

