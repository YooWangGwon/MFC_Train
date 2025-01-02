
// paint_boardView.cpp : implementation of the Cpaint_boardView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "paint_board.h"
#endif

#include "paint_boardDoc.h"
#include "paint_boardView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cpaint_boardView

IMPLEMENT_DYNCREATE(Cpaint_boardView, CView)

BEGIN_MESSAGE_MAP(Cpaint_boardView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)

	ON_COMMAND_RANGE(ID_FREELINE, ID_ELLIPSE, OnChangeTool)
	ON_UPDATE_COMMAND_UI_RANGE(ID_FREELINE, ID_ELLIPSE, OnUpdateChangeTool)
	ON_COMMAND(ID_LINECOLOR, &Cpaint_boardView::OnLinecolor)
	ON_COMMAND(ID_FILLLCOLOR, &Cpaint_boardView::OnFilllcolor)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cpaint_boardView construction/destruction

Cpaint_boardView::Cpaint_boardView()
{
	// TODO: add construction code here

}

Cpaint_boardView::~Cpaint_boardView()
{
}

BOOL Cpaint_boardView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Cpaint_boardView drawing

void Cpaint_boardView::OnDraw(CDC* /*pDC*/)
{
	Cpaint_boardDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// Cpaint_boardView printing

BOOL Cpaint_boardView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void Cpaint_boardView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void Cpaint_boardView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// Cpaint_boardView diagnostics

#ifdef _DEBUG
void Cpaint_boardView::AssertValid() const
{
	CView::AssertValid();
}

void Cpaint_boardView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cpaint_boardDoc* Cpaint_boardView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cpaint_boardDoc)));
	return (Cpaint_boardDoc*)m_pDocument;
}
#endif //_DEBUG


// Cpaint_boardView message handlers

// 툴바 항목이 선택될 때 호출
// GetCurrentMessage() -> wParam 구문은 클릭한 툴바항목의 아이디를 리턴
void Cpaint_boardView::OnChangeTool(UINT wParam) {
	m_nType = GetCurrentMessage()->wParam;
}

void Cpaint_boardView::OnUpdateChangeTool(CCmdUI* pCmdUI)
{
	pCmdUI->SetCheck(m_nType == (int)pCmdUI->m_nID);
}

void Cpaint_boardView::OnLinecolor()
{
	// TODO: Add your command handler code here
	CColorDialog dlg;
	if (dlg.DoModal() == IDOK) {
		m_colLine = dlg.GetColor();

		m_colLineXor = (RGB(GetRValue(m_colLine) ^ 255, GetGValue(m_colLine) ^ 255, GetBValue(m_colLine) ^ 255));
	}
}


void Cpaint_boardView::OnFilllcolor()
{
	// TODO: Add your command handler code here
	CColorDialog dlg;
	if (dlg.DoModal() == IDOK) {
		m_colFill = dlg.GetColor();
	}
}


void Cpaint_boardView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	// 그리기 좌표를 마우스 클릭한 좌표로 초기화
	m_pntOld = point;
	m_pntCur = point;

	SetCapture();

	CView::OnLButtonDown(nFlags, point);
}


void Cpaint_boardView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	ReleaseCapture();

	CClientDC dc(this);

	CBrush brush, *pOldBrush;

	if (m_nType == ID_RECTANGLE) {
		brush.CreateSolidBrush(m_colFill);

		pOldBrush = (CBrush*)dc.SelectObject(brush);

		dc.Rectangle(m_pntOld.x, m_pntOld.y, point.x, point.y);
	}

	CView::OnLButtonUp(nFlags, point);
}
