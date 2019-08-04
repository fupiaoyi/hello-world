#include "message.h"
void Message::setn(char *a)//设置名字
{
	int i=0;
	for(;a[i]!='\0';i++)
	{
		un[i]=a[i];
	}
	un[i]='\0';
}
void Message::setp(char *b)//设置密码
{
	int i=0;
	for(;b[i]!='\0';i++)
	{
		pw[i]=b[i];
	}
	pw[i]='\0';
}
void Message::seti(int c)//设置身份
{
	id=c;
}
void Message::read(char *p,char *q)
{
	cout<<"药名："<<p<<endl;
	cout<<"作用："<<q<<endl;
}
void Message::read(char *p, int a)
{
	cout<<"药名："<<p<<endl;
	cout<<"价格："<<a<<endl;
}