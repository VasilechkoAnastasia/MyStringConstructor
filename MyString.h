#pragma once
class MyString
{
	char* str;
	int length;

public:
	MyString();
	MyString(const char* obj);
	MyString(const MyString& obj);
	~MyString();
	void Print();
	MyString(const MyString& obj);
};