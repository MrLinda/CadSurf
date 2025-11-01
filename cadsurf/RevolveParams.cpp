// RevolveParams.cpp: 实现文件
//

#include "stdafx.h"
#include "CadSurf.h"
#include "afxdialogex.h"
#include "RevolveParams.h"


// RevolveParams 对话框

IMPLEMENT_DYNAMIC(RevolveParams, CDialogEx)

RevolveParams::RevolveParams(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_REVOLVE_PARAMS, pParent)
{
	mRevolveAngle = 360;
}

RevolveParams::~RevolveParams()
{
}

void RevolveParams::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, mRevolveAngle);
}


BEGIN_MESSAGE_MAP(RevolveParams, CDialogEx)
	ON_BN_CLICKED(IDOK, &RevolveParams::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT1, &RevolveParams::OnEnChangeEdit1)
END_MESSAGE_MAP()


// RevolveParams 消息处理程序

void RevolveParams::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}

void RevolveParams::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
}
