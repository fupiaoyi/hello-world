#ifndef GOTOXY_H
#define GOTOXY_H
#include <windows.h>
void gotoxy(int x,int y)//设置光标位置的函数
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_ERROR_HANDLE),coord);
}
#endif