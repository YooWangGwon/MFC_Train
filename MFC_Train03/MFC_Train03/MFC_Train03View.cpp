
// MFC_Train03View.cpp : CMFC_Train03View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "MFC_Train03.h"
#endif

#include "MFC_Train03Doc.h"
#include "MFC_Train03View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_Train03View

IMPLEMENT_DYNCREATE(CMFC_Train03View, CView)

BEGIN_MESSAGE_MAP(CMFC_Train03View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFC_Train03View 생성/소멸

CMFC_Train03View::CMFC_Train03View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CMFC_Train03View::~CMFC_Train03View()
{
}

BOOL CMFC_Train03View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CMFC_Train03View 그리기

void CMFC_Train03View::OnDraw(CDC* /*pDC*/)
{
	CMFC_Train03Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CMFC_Train03View 인쇄

BOOL CMFC_Train03View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CMFC_Train03View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CMFC_Train03View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CMFC_Train03View 진단

#ifdef _DEBUG
void CMFC_Train03View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_Train03View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_Train03Doc* CMFC_Train03View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_Train03Doc)));
	return (CMFC_Train03Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_Train03View 메시지 처리기
