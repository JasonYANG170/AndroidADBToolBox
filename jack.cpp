// jack.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication4.h"
#include "afxdialogex.h"
#include "jack.h"
#include"MFCApplication4Dlg.h"

#define BUFSIZE 4096
#pragma warning(disable:4996)

// jack 对话框
CString str;
CString str2;
CString fh=" & ";
IMPLEMENT_DYNAMIC(jack, CDialogEx)


jack::jack(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

jack::~jack()
{
}

void jack::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, jack2);
}


BEGIN_MESSAGE_MAP(jack, CDialogEx)
	ON_WM_DROPFILES()
	ON_EN_CHANGE(IDC_EDIT1, &jack::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &jack::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &jack::OnBnClickedButton2)
END_MESSAGE_MAP()


// jack 消息处理程序


void jack::OnDropFiles(HDROP hDropInfo)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	TCHAR szPath[MAX_PATH] = { 0 };
	DragQueryFile(hDropInfo, 0, szPath, MAX_PATH);
	//显示到控件上
	jack2.SetWindowText(szPath);
	UpdateData(TRUE);

	str.Format("%s", szPath);


		char pFileName[MAX_PATH] = { 0 };
		int nPos = GetCurrentDirectory(MAX_PATH, pFileName);

		CString csFullPath(pFileName);
		str2 = csFullPath;
		//StartConsole();
	//	system(csFullPath);
		CDialogEx::OnDropFiles(hDropInfo);

}


void jack::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void StartConsole1()
{
	AllocConsole();//控制台调试窗口开启
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w+t", stdout);    // 申请写
	freopen("CONIN$", "r+t", stdin);   //开启中文控制台输出支持

}

void CloseConsole1()
{
	FreeConsole(); // 释放控制台资源
}
void jack::OnBnClickedButton1()
{
	CString inst = "adb install -r ";

	StartConsole1();
	system("cd "+str2 + fh + inst + str);
	CloseConsole1();

	// TODO: 在此添加控件通知处理程序代码
}


void jack::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	system("adb push " + str + " /sdcard/test/good.flv");
}
