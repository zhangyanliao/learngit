
// monitorView.cpp: CmonitorView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "monitor.h"
#endif

#include "monitorDoc.h"
#include "monitorView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmonitorView

IMPLEMENT_DYNCREATE(CmonitorView, CFormView)

BEGIN_MESSAGE_MAP(CmonitorView, CFormView)
END_MESSAGE_MAP()

// CmonitorView 构造/析构

CmonitorView::CmonitorView() noexcept
	: CFormView(IDD_MONITOR_FORM)
{
	// TODO: 在此处添加构造代码

}

CmonitorView::~CmonitorView()
{
}

void CmonitorView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CmonitorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CFormView::PreCreateWindow(cs);
}

void CmonitorView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}


// CmonitorView 诊断

#ifdef _DEBUG
void CmonitorView::AssertValid() const
{
	CFormView::AssertValid();
}

void CmonitorView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CmonitorDoc* CmonitorView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmonitorDoc)));
	return (CmonitorDoc*)m_pDocument;
}
#endif //_DEBUG


// CmonitorView 消息处理程序
