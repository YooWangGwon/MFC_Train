
// MFC_Train2View.h : CMFC_Train2View Ŭ������ �������̽�
//

#include "ChildWnd.h"
#pragma once


class CMFC_Train2View : public CView
{
protected: // serialization������ ��������ϴ�.
	CMFC_Train2View();
	DECLARE_DYNCREATE(CMFC_Train2View)

// Ư���Դϴ�.
public:
	CMFC_Train2Doc* GetDocument() const;

// �۾��Դϴ�.
public:
	CChildWnd m_Wnd01;
	CChildWnd m_Wnd02;

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CMFC_Train2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
//	afx_msg void OnPaint();
};

#ifndef _DEBUG  // MFC_Train2View.cpp�� ����� ����
inline CMFC_Train2Doc* CMFC_Train2View::GetDocument() const
   { return reinterpret_cast<CMFC_Train2Doc*>(m_pDocument); }
#endif

