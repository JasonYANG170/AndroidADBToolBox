// zhu.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication4.h"
#include "afxdialogex.h"
#include "zhu.h"


// zhu 对话框

IMPLEMENT_DYNAMIC(zhu, CDialogEx)

zhu::zhu(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

zhu::~zhu()
{
}

void zhu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(zhu, CDialogEx)
END_MESSAGE_MAP()


// zhu 消息处理程序
