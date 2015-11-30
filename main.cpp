#include <iostream>
#include <Windows.h>


using namespace std;
void BlockMouseMovement();//Block the mouse movement


int WindowX()//Get the window's X resolution
{
	RECT desktop_rect_;// RECT struct {LONG left; LONG right; LONG top; LONG bottom;} || needed for the GetWindowRect()
	HWND desktop_ = GetDesktopWindow();//Handle to the desktop
	GetWindowRect(desktop_, &desktop_rect_);// Gets the RECT struct's four members ( left, right, top, bottom) ||Miért referencia?
	return desktop_rect_.right;//Return with the window's X resolution
}

int WindowY()//Get the window's Y resolution
{
	RECT desktop_rect_;// RECT struct { LONG left; LONG right; LONG top; LONG bottom; } || needed for the GetWindowRect()
	HWND desktop_ = GetDesktopWindow();//Handle to the desktop
	GetWindowRect(desktop_, &desktop_rect_);// Gets the RECT struct's four members ( left, right, top, bottom) ||Miért referencia?
	return desktop_rect_.bottom;//Return with the window's Y resolution
}

void BlockMouseMovement()
{
	while (true)
	{
		SetCursorPos(WindowX() / 2, WindowY() / 2);
	}

}

int main()
{
	cout << "I cannot move my cursor...";
	BlockMouseMovement();


	return 0;
}
