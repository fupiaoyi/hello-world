#include "message.h"
void Message::setn(char *a)//��������
{
	int i=0;
	for(;a[i]!='\0';i++)
	{
		un[i]=a[i];
	}
	un[i]='\0';
}
void Message::setp(char *b)//��������
{
	int i=0;
	for(;b[i]!='\0';i++)
	{
		pw[i]=b[i];
	}
	pw[i]='\0';
}
void Message::seti(int c)//�������
{
	id=c;
}
void Message::read(char *p,char *q)
{
	cout<<"ҩ����"<<p<<endl;
	cout<<"���ã�"<<q<<endl;
}
void Message::read(char *p, int a)
{
	cout<<"ҩ����"<<p<<endl;
	cout<<"�۸�"<<a<<endl;
}