#include<afxwin.h>
class MyApp : public CWinApp
{
public:
    //程序入口
	virtual BOOL InitInstance();
};
class MyFrame : public CFrameWnd
{
public:
	MyFrame();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnLButtonDown(UINT, CPoint);
	afx_msg void OnChar(UINT, UINT, UINT);
	afx_msg void OnPaint();
};
