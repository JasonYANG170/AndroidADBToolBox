#pragma once
#include "afxdialogex.h"


// jack 对话框

class jack : public CDialogEx
{
	DECLARE_DYNAMIC(jack)

public:
	jack(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~jack();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDropFiles(HDROP hDropInfo);
	CEdit jack2;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
