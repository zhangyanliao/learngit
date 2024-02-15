
// monitorView.h: CmonitorView 类的接口
//

#pragma once


class CmonitorView : public CFormView
{
protected: // 仅从序列化创建
	CmonitorView() noexcept;
	DECLARE_DYNCREATE(CmonitorView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MONITOR_FORM };
#endif

// 特性
public:
	CmonitorDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CmonitorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // monitorView.cpp 中的调试版本
inline CmonitorDoc* CmonitorView::GetDocument() const
   { return reinterpret_cast<CmonitorDoc*>(m_pDocument); }
#endif

