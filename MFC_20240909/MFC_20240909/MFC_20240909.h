
// MFC_20240909.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CMFC_20240909App:
// �� Ŭ������ ������ ���ؼ��� MFC_20240909.cpp�� �����Ͻʽÿ�.
//

class CMFC_20240909App : public CWinApp
{
public:
	CMFC_20240909App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CMFC_20240909App theApp;