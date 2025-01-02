#pragma once


// CSubDlg3 dialog

class CSubDlg3 : public CDialogEx
{
	DECLARE_DYNAMIC(CSubDlg3)

public:
	CSubDlg3(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSubDlg3();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
