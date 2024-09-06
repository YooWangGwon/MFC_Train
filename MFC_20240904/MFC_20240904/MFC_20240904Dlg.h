
// MFC_20240904Dlg.h : header file
//

#pragma once
#include "afxcmn.h"
#include "DlgTab1.h"
#include "DlgTab2.h"
#include "DlgTab3.h"

// CMFC_20240904Dlg dialog
class CMFC_20240904Dlg : public CDialogEx
{
// Construction
public:
	CMFC_20240904Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_20240904_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_name;
	afx_msg void OnBnClickedButton1();
	CString m_name2;
	// Only float or int
	float Num1st;
	float Num2nd;
	float NumResult;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	CTabCtrl m_tab;

	afx_msg void OnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
	CDlgTab1* dlg1;
	CDlgTab2* dlg2;
	CDlgTab3* dlg3;
};
