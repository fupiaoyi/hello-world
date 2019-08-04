#ifndef MESSAGE_H
#define MESSAGE_H
#include <iostream>
using namespace std;
class Message {
private:
	char un[10];
	char pw[10];
	int id;
public:
	char *getn(){return un;};
	char *getp(){return pw;};
	int geti(){return id;};
	void setn(char *a);
	void setp(char *b);
	void seti(int c);
	void read(char *p, char *q);
	void read(char *p, int a);
};
#endif