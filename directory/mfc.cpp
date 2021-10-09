#include"mfc.h"
MyApp app;
BOOL MyApp::InitInstance()
{
	//创建窗口
	MyFrame* frame = new MyFrame;
	//显示和更新
	frame->ShowWindow(SW_SHOWNORMAL);
	frame->UpdateWindow();
	m_pMainWnd = frame;  //保存主窗口的指针
	return TRUE;	
}
//分界宏
BEGIN_MESSAGE_MAP(MyFrame, CFrameWnd)
ON_WM_LBUTTONDOWN()//鼠标左键按下
ON_WM_CHAR()  //键盘按下
ON_WM_PAINT()
END_MESSAGE_MAP()

MyFrame::MyFrame()
{
	Create(NULL, TEXT("mfc"));    //创建窗口
}

void MyFrame::OnLButtonDown(UINT, CPoint point)    //鼠标左键
{
	/*TCHAR buf[1024];
	wsprintf(buf, TEXT("x= %d, y=%d"), point.x, point.y);
	MessageBox(buf);*/   //打印窗口、

     //mfc使用字符串CString
	CString str;
	str.Format(TEXT("x = %d,, y = %d"), point.x, point.y);
	MessageBox(str);
}

void MyFrame::OnChar(UINT key, UINT, UINT)   //键盘按键
{
	CString str;
	str.Format(TEXT("你按下了%c键"), key);
	MessageBox(str);
}

void MyFrame::OnPaint()
{
	CPaintDC dc(this);
	dc.TextOutW(100, 100, TEXT("为了部落"));
	dc.Ellipse(10, 10, 100, 100);

}
