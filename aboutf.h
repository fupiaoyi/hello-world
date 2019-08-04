#ifndef ABOUTF_H
#define ABOUTF_H
#include <fstream>
#include <vector>
#include <iostream>
#include <iomanip>
#include "message.h"
using namespace std;
class File
{
public:
	void InFile(vector<Message> *p);
	void OutFile(vector<Message> *p);
};
#endif
