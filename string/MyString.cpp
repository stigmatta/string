#include "MyString.h"
#include <iostream>
using namespace std;
MyString::MyString() 
{
	createdObj++;
	this->length = 81;
	this->str = new char[length];
}
MyString::MyString(int length) 
{
	createdObj++;

	this->length = length;
	this->str = new char[length];
}
MyString::MyString(const char* str)
{
	createdObj++;

	this->length = strlen(str)+1;
	this->str = new char[length];
	strcpy_s(this->str, strlen(str) + 1, str);
}
void MyString:: init(const char* str) 
{
	if (this->str != nullptr)
		delete[]str;
	this->length = strlen(str) + 1;
	this->str = new char[length];
	strcpy_s(this->str, strlen(str) + 1, str);
}
void MyString::print()const
{
	cout << str << endl;
}
void MyString::myStrCpy(MyString& obj) 
{
	if (this->str != nullptr)
		delete[]str;
	this->length = obj.length + 1;
	this->str = new char[this->length+ 1];
	strcpy_s(this->str, this ->length + 1, obj.str);
}
bool MyString::myStrStr(const char* str)const 
{
	int i = 0,j=0;
	bool flag = 0;
	while (this->str[i] != '\0')
	{
		if (this->str[i] == str[j])
		{
			while (this->str[i] == str[j])
			{
				i++;
				j++;
			}
			if (str[j] == '\0')
				return true;
		}
		else
			i++;
	}
	return false;
}
int MyString:: myChr(char c)const //поиск символа в строке(индекс найденного символа, либо -1)
{
	int i = 0;
	while (this->str[i] != '\0')
	{
		if (str[i] == c)
			return i;
		i++;
	}
	return -1;
}

int MyString::myStrLen()const //return str length
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
void MyString::myStrCat(MyString& b) // concatenation
{
	MyString tmp((int)this->length + b.length-1);
	tmp.str = new char[tmp.length];
	for (int i = 0,j=0; i < tmp.length; i++)
	{
		if (i < this->length-1)
		{
			tmp.str[i] = this->str[i];
		}
		else
		{
			tmp.str[i] = b.str[j];
			j++;
		}
	}
	if (this->str != nullptr)
		delete[]this->str;
	this->str = new char[tmp.length + 1];
	strcpy_s(this->str, tmp.length + 1, tmp.str);
}
//void myDelChr(char c); // удаляет указанный символ 
//int myStrCmp(MyString& b)const; // сравнение строк 