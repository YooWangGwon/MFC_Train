#pragma once
#include "afxwin.h"
class CChildWnd : public CWnd
{
	DECLARE_DYNAMIC(CChildWnd);
public:
	CChildWnd();	// ������
	~CChildWnd();	// �Ҹ���

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};

