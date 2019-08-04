#include "item.h"
void Item::setAll(char *q,char *p,char *h,int a,int b)
{
	strcpy(name,q);
	strcpy(number,p);
	strcpy(use,h);
	price=a;
	quantity=b;
}