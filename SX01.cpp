#include"AllHead.h"

int main()
{
	char un[10]={0};//�洢�����û���������
	char pw[10]={0};//�����������������

	system("title XXXX");
	system("color 4e");

	vector<Message> a;//�洢�û������������
	vector<Message>::iterator iter1;//��������ĵ�����

	File f;//��д�ļ��������
	f.OutFile(&a);//���ļ��ж����û���Ϣ

	Message m;//һ���û���Ķ���

	Patient P;
	Doctor D;

	Item *I[2];
	P.setp(500);
	D.setuse("����");
	P.setAll("Yao",1000);
	D.setAll("Yao","XI0015");

	I[0] = &P;
	I[1] = &D;

C:		gotoxy(25,5);//��ʼ��ӡ����
		puts("||||||||||||||||||||||||||||||");
		gotoxy(25,6);
		puts("$                            $");
		gotoxy(25,7);
		puts("$      ��ӭʹ�ãأ�ϵͳ      $");
		gotoxy(25,8);
		puts("$      ����1.��¼            $");
		gotoxy(25,9);
		puts("$          2.ע��            $");
		gotoxy(25,10);
		puts("$          3.�˳�            $");
		gotoxy(25,11);
		puts("$        ��ѡ�����:_        $");
		gotoxy(25,12);
		puts("$                            $");
		gotoxy(25,13);
		puts("||||||||||||||||||||||||||||||");

	gotoxy(45,11);
	int x,j;//j������¼��¼�Ĵ���
	int flag;
	cin>>x;//��ȡ�û���ѡ��

	if(x==2)
	{
		while(getchar()!='\n');
A:		flag=0;

		gotoxy(25,7);
		puts("$                            $");
		gotoxy(25,8);
		puts("$          ע�����      ����$");
		gotoxy(25,9);
		puts("$      �û�����              $");
		gotoxy(25,10);
		puts("$      ��  �룺              $");
		gotoxy(25,11);
		puts("$                            $");

		put0(un,pw);

		iter1=a.begin();
		while(iter1!=a.end())//����û����Ƿ����
		{
			
			if(!strcmp(un,iter1->getn()))
			{
				gotoxy(29,11);
				puts("���û��ѱ�ע��");
				flag=1;
				break;
			}
			iter1++;
		}//while(������)�Ľ�β
		if(flag==1)
		{
			Sleep(900);
			goto A;//����û������ڷ���ע�����
		}

		m.setn(un);
		m.setp(pw);
		m.seti(1);//����������ݸ����û���Ķ���
		a.push_back(m);//�ŵ�����β��

		gotoxy(36,11);
		cout<<"ע��ɹ�";
		Sleep(900);
		goto C;//���س�ʼ����
	}//if x=2 �Ľ�β

	else if(x==1)
	{
		j=0;
		while(getchar()!='\n');
B:		while(j<3)
		{

			gotoxy(25,7);
			puts("$                            $");
			gotoxy(25,8);
			puts("$          ��¼����      ����$");
			gotoxy(25,9);
			puts("$      �û�����              $");
			gotoxy(25,10);
			puts("$      ��  �룺              $");
			gotoxy(25,11);
			puts("$                            $");
			gotoxy(25,12);
			puts("$                            $");

		put0(un,pw);

			j++;

			iter1=a.begin();
			flag=0;
			while(iter1!=a.end())
			{
				if(!strcmp(pw,iter1->getp())&&!strcmp(un,iter1->getn()))//���������Ϣ���бȶ�
				{
					gotoxy(32,11);
					puts("��¼�ɹ�");
					m.seti(iter1->geti());//��ȡ���û���Ȩ��ֵ
					Sleep(900);
					flag=1;
					break;
				}
				iter1++;
			}//while(������)�Ľ�β
			if(flag==1)
				break;
			else
				{
					gotoxy(27,11);
					cout<<"�û������������ʣ"<<3-j<<"�λ���";
					Sleep(900);
					if(j==3)//3�λ���������
					{
						gotoxy(30,12);
						puts("��¼ʧ�ܣ�����������");
						Sleep(900);
						goto C;
					}
					goto B;
				}
		}//while��j<3���Ľ�β
	}//else if x=1�Ľ�β

	else if(x==3)//�˳�ѡ��
	{
		gotoxy(0,15);
		return 0;
	}
	else
	{
		gotoxy(30,12);
		puts("�������ݴ���");
		goto C;
	}


E:		system("cls");//�����������
		gotoxy(25,5);
		puts("||||||||||||||||||||||||||||||");
		gotoxy(25,6);
		puts("$          ��������          $");
		gotoxy(25,7);
		puts("$          1.����            $");
		gotoxy(25,8);
		puts("$      ����2.ɾ��            $");
		gotoxy(25,9);
		puts("$          3.�鿴            $");
		gotoxy(25,10);
		puts("$          4.����            $");
		gotoxy(25,11);
		puts("$          5.�˳�            $");
		gotoxy(25,12);
		puts("$        ��ѡ�����:_        $");
		gotoxy(25,13);
		puts("||||||||||||||||||||||||||||||");

	gotoxy(45,11);
	cin>>x;

	if(x==2||x==1)
	{
		if(m.geti()==1)//Ȩ���ж�
		{
			gotoxy(30,12);
			cout<<"�޴˲���Ȩ��";
			Sleep(900);
			goto E;//Ȩ�޲��㷵�ز�������
		}
		while(getchar()!='\n');
		gotoxy(0,15);
			iter1=a.begin();
			while(iter1!=a.end())//�г������ļ��������û�����Ϣ
			{
				cout<<iter1->getn()<<"\t"<<iter1->getp()<<"\t"<<iter1->geti()<<endl;
				iter1++;
			}
D:		flag=0;

		gotoxy(25,7);
		puts("$                            $");
		gotoxy(25,8);
		puts("$   ������Ҫ�޸ĵ��û���Ϣ   $");
		gotoxy(25,9);
		puts("$      �û�����              $");
		gotoxy(25,10);
		puts("$      ��  �룺              $");
		gotoxy(25,11);
		puts("$                            $");
		gotoxy(25,12);
		puts("$                            $");

		put0(un,pw);

		Message m0;
		if(x==1)//���Ӳ���
		{
			iter1=a.begin();
			while(iter1!=a.end())
			{
				
				if(!strcmp(un,iter1->getn()))
				{
					gotoxy(29,11);
					puts("���û��Ѵ���");
					flag=1;
					break;
				}
				iter1++;
			}//while(������)�Ľ�β
			if(flag==1)
			{
				Sleep(900);
				goto D;//�����޸Ľ���
			}

			gotoxy(30,12);
			cout<<"Ȩ  �ޣ�_\b";
			int y;
			cin>>y;
			m0.setn(un);
			m0.setp(pw);
			m0.seti(y);
			a.push_back(m0);

			gotoxy(36,11);
			cout<<"��ӳɹ�";
			Sleep(900);
			goto E;
		}
		else//ɾ������
		{

			iter1=a.begin();
			flag=0;
			while(iter1!=a.end())
			{	
				if(!strcmp(pw,iter1->getp())&&!strcmp(un,iter1->getn()))
				{
					a.erase(iter1);//������ɾ������
					gotoxy(32,11);
					puts("ɾ���ɹ�");
					Sleep(900);
					flag=1;
					break;
				}
				iter1++;
			}//while(������)�Ľ�β
			if(flag==1)
				goto E;
			else
				{
					gotoxy(27,11);
					cout<<"���û��������벻����";
					Sleep(900);
					goto D;
				}
		}
	}//if x=2��x=1 �Ľ�β

	else if(x==3)
	{
		system("cls");
		cout<<"ѡ��Ҫ�鿴����Ϣ��1.���\t2.����"<<endl;
		cin>>x;
//		gotoxy(0,15);
		if(m.geti()==1)
		{
			m.read(P.getname(),P.getp());
			if(x==1)
				I[1]->show();
			else
				I[0]->show();
		}
		else
		{
			m.read(D.getname(),D.getuse());
			if(x==1)
				I[1]->show();
			else
				I[0]->show();
		}
	}

	else if(x==4)
		goto C;

	else if(x==5)//����ĳ���
	{
		gotoxy(0,15);

		f.InFile(&a);//���޸Ĺ�����������д���ļ�
		return 0;
	}
	else
	{
		gotoxy(30,12);
		puts("�������ݴ���");
		goto E;
	}

	return 0;
}//main�����Ľ�β
