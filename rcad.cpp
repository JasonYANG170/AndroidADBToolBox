// rcad.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication4.h"
#include "afxdialogex.h"
#include "rcad.h"


// rcad 对话框

IMPLEMENT_DYNAMIC(rcad, CDialogEx)

rcad::rcad(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

rcad::~rcad()
{
}

void rcad::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RICHEDIT21, m_ctrlRichEdit);
}


BEGIN_MESSAGE_MAP(rcad, CDialogEx)
	ON_EN_CHANGE(IDC_RICHEDIT21, &rcad::OnEnChangeRichedit21)
END_MESSAGE_MAP()


// rcad 消息处理程序


void rcad::OnEnChangeRichedit21()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
