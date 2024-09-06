
// MFC_Train2View.cpp : CMFC_Train2View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "MFC_Train2.h"
#endif

#include "MFC_Train2Doc.h"
#include "MFC_Train2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_Train2View

IMPLEMENT_DYNCREATE(CMFC_Train2View, CView)

BEGIN_MESSAGE_MAP(CMFC_Train2View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
//	ON_WM_PAINT()
END_MESSAGE_MAP()

// CMFC_Train2View 생성/소멸

CMFC_Train2View::CMFC_Train2View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CMFC_Train2View::~CMFC_Train2View()
{
}

BOOL CMFC_Train2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CMFC_Train2View 그리기

void CMFC_Train2View::OnDraw(CDC* /*pDC*/)
{
	CMFC_Train2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CMFC_Train2View 인쇄

BOOL CMFC_Train2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CMFC_Train2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CMFC_Train2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CMFC_Train2View 진단

#ifdef _DEBUG
void CMFC_Train2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_Train2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_Train2Doc* CMFC_Train2View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_Train2Doc)));
	return (CMFC_Train2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_Train2View 메시지 처리기


int CMFC_Train2View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here
	m_Wnd01.Create(
		AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW),
		_T("차일드 윈도우"),
		WS_OVERLAPPEDWINDOW | WS_VISIBLE | WS_CHILD,
		CRect(50, 50, 300, 200),
		this,
		1010
	);

	m_Wnd02.Create(
		AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW),
		_T("차일드 윈도우2"),
		WS_OVERLAPPEDWINDOW | WS_VISIBLE | WS_CHILD,
		CRect(350, 50, 600, 250),
		this,
		1020
	);


	return 0;
}


//void CMFC_Train2View::OnPaint()
//{
//	CPaintDC dc(this); // device context for painting
//					   // TODO: Add your message handler code here
//					   // Do not call CView::OnPaint() for painting messages
//	dc.TextOutW(20, 20, _T("문자열 테스트"));
//}
