// Shutdown.cpp : Defines the entry point for the application.
//

#include "stdafx.h"

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
 	static HWND hShellWnd = ::FindWindow("Shell_TrayWnd", NULL);
        
	if(hShellWnd != NULL)
	{		
		::PostMessage(hShellWnd, WM_COMMAND, MAKELONG(506, 0), NULL);	

	}
	
	return 0;
}



