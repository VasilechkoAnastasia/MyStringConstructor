#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
	MyString obj1("Hello world!");
	obj1.Print();
	MyString obj2(obj1);
	obj2.Print();
}