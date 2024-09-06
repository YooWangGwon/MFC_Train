#pragma once
#include "afxwin.h"
class CChildWnd : public CWnd
{
	DECLARE_DYNAMIC(CChildWnd);
public:
	CChildWnd();	// 持失切
	~CChildWnd();	// 社瑚切

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};

