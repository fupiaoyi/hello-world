#ifndef PUTMESSAGE_H
#define PUTMESSAGE_H
#include"gotoxy.h"
#include<iostream>
using namespace std;
		
void put0(char *p,char *q)
{
	int i=0;
	char c;//�����������������ַ�
			gotoxy(40,9);	//�����û���������	
			cin.getline(p,10);

			gotoxy(40,10);
			i=0;
			while((c=_getch())!='\r')
			{
				if(c=='\b')
				{
					if(i>0)
					{
						cout<<'\b'<<' '<<'\b';
						q[--i]='\0';
					}			
				}
				else
				{
					cout<<"*";
					q[i]=c;
					i++;
				}
			}
			q[i]='\0';
}
#endif