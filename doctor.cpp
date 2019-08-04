#include "doctor.h"
void Doctor::show()
{
	cout<<"±àºÅ£º"<<Item::getnumber()<<endl;

}
void Doctor::setAll(char *q, char *p)
{
	Item::setname(q);
	Item::setnumber(p);
}