
// MFC_Train03View.h : CMFC_Train03View Ŭ������ �������̽�
//

#pragma once


class CMFC_Train03View : public CView
{
protected: // serialization������ ��������ϴ�.
	CMFC_Train03View();
	DECLARE_DYNCREATE(CMFC_Train03View)

// Ư���Դϴ�.
public:
	CMFC_Train03Doc* GetDocument() const;

// �۾��Դϴ�.
public:

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
	virtual ~CMFC_Train03View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC_Train03View.cpp�� ����� ����
inline CMFC_Train03Doc* CMFC_Train03View::GetDocument() const
   { return reinterpret_cast<CMFC_Train03Doc*>(m_pDocument); }
#endif

