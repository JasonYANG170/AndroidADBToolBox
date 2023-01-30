#pragma once
#include "afxdialogex.h"


// rcad 对话框

class rcad : public CDialogEx
{
	DECLARE_DYNAMIC(rcad)

public:
	rcad(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~rcad();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CRichEditCtrl m_ctrlRichEdit;
	afx_msg void OnEnChangeRichedit21();
};
