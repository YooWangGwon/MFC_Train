
// MFC_20240904Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFC_20240904.h"
#include "MFC_20240904Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_20240904Dlg dialog



CMFC_20240904Dlg::CMFC_20240904Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFC_20240904_DIALOG, pParent)
	, m_name(_T(""))
	, m_name2(_T(""))
	, Num1st(0)
	, Num2nd(0)
	, NumResult(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFC_20240904Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_name2);
	DDX_Text(pDX, IDC_EDIT3, Num1st);
	DDX_Text(pDX, IDC_EDIT4, Num2nd);
	DDX_Text(pDX, IDC_EDIT5, NumResult);
	DDX_Control(pDX, IDC_TAB1, m_tab);
}

BEGIN_MESSAGE_MAP(CMFC_20240904Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC_20240904Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFC_20240904Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFC_20240904Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFC_20240904Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFC_20240904Dlg::OnBnClickedButton5)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &CMFC_20240904Dlg::OnSelchangeTab1)
END_MESSAGE_MAP()


// CMFC_20240904Dlg message handlers

BOOL CMFC_20240904Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	CRect rect;
	m_tab.GetWindowRect(rect);

	m_tab.InsertItem(0, _T("탭 1"));
	m_tab.InsertItem(1, _T("탭 2"));
	m_tab.InsertItem(2, _T("탭 3"));


	dlg1 = new CDlgTab1;
	dlg1->Create(IDD_DIALOG_TAB1, &m_tab);
	dlg1->MoveWindow(0, 20, rect.Width(), rect.Height());
	dlg1->ShowWindow(SW_SHOW);	// 첫번째 Tab을 SHOW로 하고 나머지는 HIDE


	dlg2 = new CDlgTab2;
	dlg2->Create(IDD_DIALOG_TAB2, &m_tab);
	dlg2->MoveWindow(0, 20, rect.Width(), rect.Height());
	dlg2->ShowWindow(SW_HIDE);	// 첫번째 Tab을 SHOW로 하고 나머지는 HIDE

	dlg3 = new CDlgTab3;
	dlg3->Create(IDD_DIALOG_TAB3, &m_tab);
	dlg3->MoveWindow(0, 20, rect.Width(), rect.Height());
	dlg3->ShowWindow(SW_HIDE);	// 첫번째 Tab을 SHOW로 하고 나머지는 HIDE
	
	m_tab.SetCurSel(0);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFC_20240904Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFC_20240904Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFC_20240904Dlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);

	m_name2 = m_name;

	UpdateData(FALSE);
}


void CMFC_20240904Dlg::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);

	NumResult = Num1st + Num2nd;

	UpdateData(FALSE);
}


void CMFC_20240904Dlg::OnBnClickedButton3()
{
	UpdateData(TRUE);

	NumResult = Num1st - Num2nd;

	UpdateData(FALSE);
}


void CMFC_20240904Dlg::OnBnClickedButton4()
{
	UpdateData(TRUE);

	NumResult = Num1st * Num2nd;

	UpdateData(FALSE);
}


void CMFC_20240904Dlg::OnBnClickedButton5()
{
	UpdateData(TRUE);

	NumResult = Num1st / Num2nd;

	UpdateData(FALSE);
}


void CMFC_20240904Dlg::OnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	if (IDC_TAB1 == pNMHDR->idFrom) {
		int select = m_tab.GetCurSel();
		switch (select)
		{
		case 0:
			dlg1->ShowWindow(SW_SHOW);
			dlg2->ShowWindow(SW_HIDE);
			dlg3->ShowWindow(SW_HIDE);
			break;
		case 1:
			dlg1->ShowWindow(SW_HIDE);
			dlg2->ShowWindow(SW_SHOW);
			dlg3->ShowWindow(SW_HIDE);
			break;
		case 2:
			dlg1->ShowWindow(SW_HIDE);
			dlg2->ShowWindow(SW_HIDE);
			dlg3->ShowWindow(SW_SHOW);
			break;
		}
	}
}
