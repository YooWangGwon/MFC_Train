
// MFC_20240911View.h : CMFC_20240911View 클래스의 인터페이스
//

#pragma once


class CMFC_20240911View : public CView
{
protected: // serialization에서만 만들어집니다.
	CMFC_20240911View();
	DECLARE_DYNCREATE(CMFC_20240911View)

// 특성입니다.
public:
	CMFC_20240911Doc* GetDocument() const;

// 작업입니다.
public:

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
	virtual ~CMFC_20240911View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC_20240911View.cpp의 디버그 버전
inline CMFC_20240911Doc* CMFC_20240911View::GetDocument() const
   { return reinterpret_cast<CMFC_20240911Doc*>(m_pDocument); }
#endif

