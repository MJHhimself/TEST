
// MDItestView.h : CMDItestView Ŭ������ �������̽�
//

#pragma once


class CMDItestView : public CView
{
protected: // serialization������ ��������ϴ�.
	CMDItestView();
	DECLARE_DYNCREATE(CMDItestView)

// Ư���Դϴ�.
public:
	CMDItestDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CMDItestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MDItestView.cpp�� ����� ����
inline CMDItestDoc* CMDItestView::GetDocument() const
   { return reinterpret_cast<CMDItestDoc*>(m_pDocument); }
#endif

