
// MFC_Train03View.cpp : CMFC_Train03View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFC_Train03View ����/�Ҹ�

CMFC_Train03View::CMFC_Train03View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CMFC_Train03View::~CMFC_Train03View()
{
}

BOOL CMFC_Train03View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CMFC_Train03View �׸���

void CMFC_Train03View::OnDraw(CDC* /*pDC*/)
{
	CMFC_Train03Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CMFC_Train03View �μ�

BOOL CMFC_Train03View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CMFC_Train03View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CMFC_Train03View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CMFC_Train03View ����

#ifdef _DEBUG
void CMFC_Train03View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_Train03View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_Train03Doc* CMFC_Train03View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_Train03Doc)));
	return (CMFC_Train03Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_Train03View �޽��� ó����
