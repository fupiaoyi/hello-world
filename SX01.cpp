#include"AllHead.h"

int main()
{
	char un[10]={0};//存储输入用户名的数组
	char pw[10]={0};//储存输入密码的数组

	system("title XXXX");
	system("color 4e");

	vector<Message> a;//存储用户类的向量容器
	vector<Message>::iterator iter1;//相关容器的迭代器

	File f;//读写文件的类对象
	f.OutFile(&a);//从文件中读出用户信息

	Message m;//一个用户类的对象

	Patient P;
	Doctor D;

	Item *I[2];
	P.setp(500);
	D.setuse("治疗");
	P.setAll("Yao",1000);
	D.setAll("Yao","XI0015");

	I[0] = &P;
	I[1] = &D;

C:		gotoxy(25,5);//开始打印界面
		puts("||||||||||||||||||||||||||||||");
		gotoxy(25,6);
		puts("$                            $");
		gotoxy(25,7);
		puts("$      欢迎使用ＸＸ系统      $");
		gotoxy(25,8);
		puts("$      　　1.登录            $");
		gotoxy(25,9);
		puts("$          2.注册            $");
		gotoxy(25,10);
		puts("$          3.退出            $");
		gotoxy(25,11);
		puts("$        请选择操作:_        $");
		gotoxy(25,12);
		puts("$                            $");
		gotoxy(25,13);
		puts("||||||||||||||||||||||||||||||");

	gotoxy(45,11);
	int x,j;//j用来记录登录的次数
	int flag;
	cin>>x;//读取用户的选择

	if(x==2)
	{
		while(getchar()!='\n');
A:		flag=0;

		gotoxy(25,7);
		puts("$                            $");
		gotoxy(25,8);
		puts("$          注册界面      　　$");
		gotoxy(25,9);
		puts("$      用户名：              $");
		gotoxy(25,10);
		puts("$      密  码：              $");
		gotoxy(25,11);
		puts("$                            $");

		put0(un,pw);

		iter1=a.begin();
		while(iter1!=a.end())//检查用户名是否存在
		{
			
			if(!strcmp(un,iter1->getn()))
			{
				gotoxy(29,11);
				puts("该用户已被注册");
				flag=1;
				break;
			}
			iter1++;
		}//while(迭代器)的结尾
		if(flag==1)
		{
			Sleep(900);
			goto A;//如果用户名存在返回注册界面
		}

		m.setn(un);
		m.setp(pw);
		m.seti(1);//将输入的数据赋给用户类的对象
		a.push_back(m);//放到容器尾部

		gotoxy(36,11);
		cout<<"注册成功";
		Sleep(900);
		goto C;//返回初始界面
	}//if x=2 的结尾

	else if(x==1)
	{
		j=0;
		while(getchar()!='\n');
B:		while(j<3)
		{

			gotoxy(25,7);
			puts("$                            $");
			gotoxy(25,8);
			puts("$          登录界面      　　$");
			gotoxy(25,9);
			puts("$      用户名：              $");
			gotoxy(25,10);
			puts("$      密  码：              $");
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
				if(!strcmp(pw,iter1->getp())&&!strcmp(un,iter1->getn()))//对输入的信息进行比对
				{
					gotoxy(32,11);
					puts("登录成功");
					m.seti(iter1->geti());//读取该用户的权限值
					Sleep(900);
					flag=1;
					break;
				}
				iter1++;
			}//while(迭代器)的结尾
			if(flag==1)
				break;
			else
				{
					gotoxy(27,11);
					cout<<"用户名或密码错误，剩"<<3-j<<"次机会";
					Sleep(900);
					if(j==3)//3次机会用完了
					{
						gotoxy(30,12);
						puts("登录失败，返回主界面");
						Sleep(900);
						goto C;
					}
					goto B;
				}
		}//while（j<3）的结尾
	}//else if x=1的结尾

	else if(x==3)//退出选项
	{
		gotoxy(0,15);
		return 0;
	}
	else
	{
		gotoxy(30,12);
		puts("输入数据错误");
		goto C;
	}


E:		system("cls");//进入操作界面
		gotoxy(25,5);
		puts("||||||||||||||||||||||||||||||");
		gotoxy(25,6);
		puts("$          操作界面          $");
		gotoxy(25,7);
		puts("$          1.增加            $");
		gotoxy(25,8);
		puts("$      　　2.删除            $");
		gotoxy(25,9);
		puts("$          3.查看            $");
		gotoxy(25,10);
		puts("$          4.返回            $");
		gotoxy(25,11);
		puts("$          5.退出            $");
		gotoxy(25,12);
		puts("$        请选择操作:_        $");
		gotoxy(25,13);
		puts("||||||||||||||||||||||||||||||");

	gotoxy(45,11);
	cin>>x;

	if(x==2||x==1)
	{
		if(m.geti()==1)//权限判断
		{
			gotoxy(30,12);
			cout<<"无此操作权限";
			Sleep(900);
			goto E;//权限不足返回操作界面
		}
		while(getchar()!='\n');
		gotoxy(0,15);
			iter1=a.begin();
			while(iter1!=a.end())//列出现有文件中所有用户的信息
			{
				cout<<iter1->getn()<<"\t"<<iter1->getp()<<"\t"<<iter1->geti()<<endl;
				iter1++;
			}
D:		flag=0;

		gotoxy(25,7);
		puts("$                            $");
		gotoxy(25,8);
		puts("$   请输入要修改的用户信息   $");
		gotoxy(25,9);
		puts("$      用户名：              $");
		gotoxy(25,10);
		puts("$      密  码：              $");
		gotoxy(25,11);
		puts("$                            $");
		gotoxy(25,12);
		puts("$                            $");

		put0(un,pw);

		Message m0;
		if(x==1)//增加操作
		{
			iter1=a.begin();
			while(iter1!=a.end())
			{
				
				if(!strcmp(un,iter1->getn()))
				{
					gotoxy(29,11);
					puts("该用户已存在");
					flag=1;
					break;
				}
				iter1++;
			}//while(迭代器)的结尾
			if(flag==1)
			{
				Sleep(900);
				goto D;//返回修改界面
			}

			gotoxy(30,12);
			cout<<"权  限：_\b";
			int y;
			cin>>y;
			m0.setn(un);
			m0.setp(pw);
			m0.seti(y);
			a.push_back(m0);

			gotoxy(36,11);
			cout<<"添加成功";
			Sleep(900);
			goto E;
		}
		else//删除操作
		{

			iter1=a.begin();
			flag=0;
			while(iter1!=a.end())
			{	
				if(!strcmp(pw,iter1->getp())&&!strcmp(un,iter1->getn()))
				{
					a.erase(iter1);//容器的删除操作
					gotoxy(32,11);
					puts("删除成功");
					Sleep(900);
					flag=1;
					break;
				}
				iter1++;
			}//while(迭代器)的结尾
			if(flag==1)
				goto E;
			else
				{
					gotoxy(27,11);
					cout<<"该用户名或密码不存在";
					Sleep(900);
					goto D;
				}
		}
	}//if x=2或x=1 的结尾

	else if(x==3)
	{
		system("cls");
		cout<<"选择要查看的信息：1.编号\t2.数量"<<endl;
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

	else if(x==5)//程序的出口
	{
		gotoxy(0,15);

		f.InFile(&a);//将修改过的容器重新写入文件
		return 0;
	}
	else
	{
		gotoxy(30,12);
		puts("输入数据错误");
		goto E;
	}

	return 0;
}//main函数的结尾
