#include "stdafx.h"
#include "ChildWnd.h"


// CChildWnd
IMPLEMENT_DYNAMIC(CChildWnd, CWnd)

CChildWnd::CChildWnd()
{
}


CChildWnd::~CChildWnd()
{
}

BEGIN_MESSAGE_MAP(CChildWnd, CWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()

void CChildWnd::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: Add your message handler code here
					   // Do not call CWnd::OnPaint() for painting messages

	dc.TextOutW(20, 20, _T("문자열 테스트"));
}
