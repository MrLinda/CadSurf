#include "stdafx.h"
#include "math.h"

#include "Point3D.h"
#include "Command.h"

#include "CreateCmd.h"
#include "GLCurve.h"

#include "GLView.h"
extern CGLView* g_pGLView;


CCreateBezier::CCreateBezier() 
{
	m_nStep = 0;
	m_pPositions = std::make_unique<CListOfCPoint3D>();
	m_pTmpCurve = NULL;
}

CCreateBezier::~CCreateBezier() 
{
	if(m_pTmpCurve)
	{
		g_pGLView->RemoveEntity(m_pTmpCurve);
		m_pTmpCurve = NULL;
	}
}

int CCreateBezier::GetType() 
{
	return ctCreateBezier;
}

int	CCreateBezier::OnLButtonDown(UINT nFlags, const CPoint3D& pos) 
{
	//TODO
	return 0;
}

int CCreateBezier::OnMouseMove(UINT nFlags, const CPoint3D& pos) 
{
	//TODO
	return 0;
}

int CCreateBezier::OnLButtonDblClk(UINT nFlags, const CPoint3D& pos) 
{
	//TODO
	return 0;
}

// 单击鼠标右键取消当前的操作
int	CCreateBezier::OnRButtonDown(UINT nFlags, const CPoint3D& pos)
{
	// 如果当前的操作步为 1 ，那么要在结束本次操作前擦除上次鼠标移动时绘制的橡皮线
	if (m_nStep == 1) {

	}
	m_nStep = 0; // 将操作步重置为 0 
	::Prompt("请输入直线的起点：");
	return 0;
}

// 调用Cancel 函数取消本次操作
int CCreateBezier::Cancel()
{
	// 如果当前的操作步为 1 ，那么要在结束本次操作前擦除上次鼠标移动时绘制的橡皮线
	if (m_nStep == 1) {

	}
	m_nStep = 0; // 将操作步重置为 0 
	::Prompt("就绪"); // 等待提示新类型的命令操作
	return 0;
}