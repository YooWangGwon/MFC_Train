
// MFC_20240904.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFC_20240904App:
// See MFC_20240904.cpp for the implementation of this class
//

class CMFC_20240904App : public CWinApp
{
public:
	CMFC_20240904App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFC_20240904App theApp;