
// MFC_Train03.h : MFC_Train03 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMFC_Train03App:
// �� Ŭ������ ������ ���ؼ��� MFC_Train03.cpp�� �����Ͻʽÿ�.
//

class CMFC_Train03App : public CWinAppEx
{
public:
	CMFC_Train03App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC_Train03App theApp;
