#include "stdafx.h"
#include "CreateCmd.h"

CCreateRevolvedSurface::CCreateRevolvedSurface()
	: m_pProfileCurve(nullptr)
{
}

CCreateRevolvedSurface::~CCreateRevolvedSurface()
{
	if (m_pProfileCurve)
	{
		delete m_pProfileCurve;
		m_pProfileCurve = nullptr;
	}
}

int CCreateRevolvedSurface::GetType()
{
	return ctFeatureRevolve;
}

int CCreateRevolvedSurface::OnLButtonDown(UINT nFlags, const CPoint3D& pos)
{
	PromptForAngle();
	return 0;
}
int CCreateRevolvedSurface::OnMouseMove(UINT nFlags, const CPoint3D& pos)
{
	return 0;
}
int CCreateRevolvedSurface::OnRButtonDown(UINT nFlags, const CPoint3D& pos)
{
	return Cancel();
}
int CCreateRevolvedSurface::Cancel()
{
	return 0;
}

void CCreateRevolvedSurface::PromptForAngle()
{
	RevolveParams dlg;
	if (dlg.DoModal() == IDOK)
	{
		// 获取旋转角度并创建旋转曲面
		double angle = dlg.mRevolveAngle;
		// 创建旋转曲面的逻辑
		cout << "Revolve angle: " << angle << endl;
	}
}