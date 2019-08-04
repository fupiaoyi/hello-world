#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <iostream>
using namespace std;
class Item{
private:
	char name[10];
	char number[10];
	char use[20];
	int price;
	int quantity;

public:
	char *getname(){return name;}
	char *getnumber(){return number;}
	char *getuse(){return use;}
	int getq(){return quantity;}
	int getp(){return price;}
	void setname(char *q){strcpy(name,q);}
	void setnumber(char *p){strcpy(number,p);}
	void setuse(char *h){strcpy(use,h);}
	void setq(int a){price=a;}
	void setp(int b){quantity=b;}

	void setAll(char *q,char *p,char *h,int a,int b);
	virtual void show()=0;
};
#endif