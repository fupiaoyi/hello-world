#ifndef PATIENT_H
#define PATIENT_H
#include "item.h"
class Patient:public Item{
private:
	int price;
public:
//	int getp(){return price;}

	void show();
	void setAll(char *q, int a);
};
#endif