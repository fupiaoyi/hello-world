#include "patient.h"
void Patient::show()
{
	cout<<"������"<<Item::getq()<<endl;
}
void Patient::setAll(char *q, int a)
{
	Item::setname(q);
	Item::setq(a);
}