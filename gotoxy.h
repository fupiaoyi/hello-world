#ifndef GOTOXY_H
#define GOTOXY_H
#include <windows.h>
void gotoxy(int x,int y)//���ù��λ�õĺ���
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_ERROR_HANDLE),coord);
}
#endif