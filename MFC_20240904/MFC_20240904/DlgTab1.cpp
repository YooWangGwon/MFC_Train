// DlgTab1.cpp : implementation file
//

#include "stdafx.h"
#include "MFC_20240904.h"
#include "DlgTab1.h"
#include "afxdialogex.h"


// CDlgTab1 dialog

IMPLEMENT_DYNAMIC(CDlgTab1, CDialogEx)

CDlgTab1::CDlgTab1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_TAB1, pParent)
{

}

CDlgTab1::~CDlgTab1()
{
}

void CDlgTab1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgTab1, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDlgTab1::OnBnClickedOk)
END_MESSAGE_MAP()


// CDlgTab1 message handlers


void CDlgTab1::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}
