#pragma once
#include "afxdialogex.h"


// RevolveParams 对话框

class RevolveParams : public CDialogEx
{
	DECLARE_DYNAMIC(RevolveParams)

public:
	RevolveParams(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~RevolveParams();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REVOLVE_PARAMS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

public:
	double mRevolveAngle;

	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit1();
};
