
// MFC_Train2.h : MFC_Train2 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMFC_Train2App:
// �� Ŭ������ ������ ���ؼ��� MFC_Train2.cpp�� �����Ͻʽÿ�.
//

class CMFC_Train2App : public CWinApp
{
public:
	CMFC_Train2App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC_Train2App theApp;
