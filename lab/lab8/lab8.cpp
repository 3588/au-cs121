#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	 HWND hWnd=::FindWindow(NULL,"QQ安全中心");
        if (hWnd!=NULL)
        {
                ::ShowWindow(hWnd,0);
                //SendMessage(hWnd,WM_CLOSE,0,0);
        }
        HWND hWnd1=::FindWindow(NULL,"QQ2010");
        if (hWnd1!=NULL)
        {
                ::EnableWindow(hWnd1,TRUE);
                AfxMessageBox("已经兼容");
        }
	return 0;
}
