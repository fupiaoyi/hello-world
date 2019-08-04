#ifndef DOCTOR_H
#define DOCTOR_H
#include "item.h"
class Doctor:public Item{
private:
	char number[10];
	int quantity;
public:
//	int getq(){return quantity;}
//	char *getnumber(){return number;}
	void show();
	void setAll(char *q, char *p);
};
#endif