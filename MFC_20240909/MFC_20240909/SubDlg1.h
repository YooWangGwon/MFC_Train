#pragma once


// CSubDlg1 dialog

class CSubDlg1 : public CDialogEx
{
	DECLARE_DYNAMIC(CSubDlg1)

public:
	CSubDlg1(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSubDlg1();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
