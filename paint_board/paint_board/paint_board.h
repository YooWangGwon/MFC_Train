
// paint_board.h : main header file for the paint_board application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// Cpaint_boardApp:
// See paint_board.cpp for the implementation of this class
//

class Cpaint_boardApp : public CWinAppEx
{
public:
	Cpaint_boardApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cpaint_boardApp theApp;
