
// MFC_Train2View.cpp : CMFC_Train2View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
//	ON_WM_PAINT()
END_MESSAGE_MAP()

// CMFC_Train2View ����/�Ҹ�

CMFC_Train2View::CMFC_Train2View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CMFC_Train2View::~CMFC_Train2View()
{
}

BOOL CMFC_Train2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CMFC_Train2View �׸���

void CMFC_Train2View::OnDraw(CDC* /*pDC*/)
{
	CMFC_Train2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CMFC_Train2View �μ�

BOOL CMFC_Train2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CMFC_Train2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CMFC_Train2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CMFC_Train2View ����

#ifdef _DEBUG
void CMFC_Train2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_Train2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_Train2Doc* CMFC_Train2View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_Train2Doc)));
	return (CMFC_Train2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_Train2View �޽��� ó����


int CMFC_Train2View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here
	m_Wnd01.Create(
		AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW),
		_T("���ϵ� ������"),
		WS_OVERLAPPEDWINDOW | WS_VISIBLE | WS_CHILD,
		CRect(50, 50, 300, 200),
		this,
		1010
	);

	m_Wnd02.Create(
		AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW),
		_T("���ϵ� ������2"),
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
//	dc.TextOutW(20, 20, _T("���ڿ� �׽�Ʈ"));
//}
