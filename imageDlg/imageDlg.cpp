﻿#include "framework.h"
#include "imageDlg.h"

#include <gdiplus.h>
#pragma comment(lib, "gdiplus")
using namespace Gdiplus;

int flag = 0;
int num1 = 0, num2 = 0, result = 0;

void NumBtn(HWND hWnd, int num)
{
    SetDlgItemInt(hWnd, IDC_EDIT1, 1, TRUE);
}

// 정보 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        SetWindowPos(hDlg, HWND_TOP, 0, 0, 800, 600, NULL);
        return (INT_PTR)TRUE;

    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hDlg, &ps);
        Graphics gp(hdc);
        Image img =L"img1.jpg";
        gp.DrawImage(&img, 0, 0, 800, 600);
        EndPaint(hDlg, &ps);
    }
    return TRUE;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    case WM_COMMAND:
        int id = LOWORD(wParam);
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        else if (id == IDC_BUTTON1) {
            NumBtn(hDig, 1);
        }
        break;
    }
    return (INT_PTR)FALSE;
}

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPTSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    ULONG_PTR up;
    GdiplusStartupInput gpsi;
    GdiplusStartup(&up, &gpsi, NULL);
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgProc);
    GdiplusShutdown(up);
}

