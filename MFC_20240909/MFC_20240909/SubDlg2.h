#pragma once


// CSubDlg2 dialog

class CSubDlg2 : public CDialogEx
{
	DECLARE_DYNAMIC(CSubDlg2)

public:
	CSubDlg2(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSubDlg2();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
