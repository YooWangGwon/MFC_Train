
// MFC_Train2View.h : CMFC_Train2View 클래스의 인터페이스
//

#include "ChildWnd.h"
#pragma once


class CMFC_Train2View : public CView
{
protected: // serialization에서만 만들어집니다.
	CMFC_Train2View();
	DECLARE_DYNCREATE(CMFC_Train2View)

// 특성입니다.
public:
	CMFC_Train2Doc* GetDocument() const;

// 작업입니다.
public:
	CChildWnd m_Wnd01;
	CChildWnd m_Wnd02;

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CMFC_Train2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
//	afx_msg void OnPaint();
};

#ifndef _DEBUG  // MFC_Train2View.cpp의 디버그 버전
inline CMFC_Train2Doc* CMFC_Train2View::GetDocument() const
   { return reinterpret_cast<CMFC_Train2Doc*>(m_pDocument); }
#endif

