#include"aboutf.h"
vector<Message>::iterator iter;
fstream ioFile,ioFile1;

void File::InFile(vector<Message> *p)//д���ļ�
{
	iter=p->begin();
	ioFile1.open("D:\\ShiXun\\M.txt",ios::out);
	ioFile1<<setiosflags(ios::left)<<setw(10)<<"�û���"<<setw(10)<<"����"<<setw(10)<<"Ȩ��"<<endl;
	int count=0;
	while(iter!=p->end())
	{
		count++;
		if(count==p->size())
			ioFile1<<setiosflags(ios::left)<<setw(10)<<(*iter).getn()<<setw(10)<<(*iter).getp()<<setw(10)<<(*iter).geti();
		else
			ioFile1<<setiosflags(ios::left)<<setw(10)<<(*iter).getn()<<setw(10)<<(*iter).getp()<<setw(10)<<(*iter).geti()<<endl;
		iter++;
	}
	ioFile1.close() ;
}
void File::OutFile(vector<Message> *p)//���ļ�
{
	Message x;
	char y[10];
	int z;
	p->clear();
	ioFile.open("D:\\ShiXun\\M.txt",ios::in);
	ioFile>>y;
	ioFile>>y;
	ioFile>>y;
	while(!ioFile.eof())
	{
		ioFile>>y;
		x.setn(y);
		ioFile>>y;
		x.setp(y);
		ioFile>>z;
		x.seti(z);
		p->push_back(x);
	}
	p->pop_back();
	ioFile.close();
}