#include <iostream>
#include "MyString.h"
using namespace std;

MyString::MyString()
{
	length = 80;
	str = new char[length];
}

MyString::MyString(const char* obj)
{
	length = strlen(obj);
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj);
}

MyString::MyString(const MyString& obj)
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
}

MyString::~MyString()
{
	delete[] str;
}

void MyString::Print()
{
	cout << str << endl;
}

MyString::MyString(const Minere& obj)
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
	objectCount++;
}
