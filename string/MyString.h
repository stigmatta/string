#pragma once
class MyString
{
private:
	char* str;
	int length;
public:
	static int createdObj;
	MyString();
	MyString(int length);
	MyString(const char* str);
	void init(const char* str);
	void print()const;
	void myStrCpy(MyString& obj);// копирование строк
	bool myStrStr(const char* str)const;// поиск подстроки в строке
	int  myChr(char c)const; // поиск символа в строке(индекс найденного символа, либо -1)
	int myStrLen()const;// возвращает длину строки
	void myStrCat(MyString& b); // объединение строк
	void myDelChr(char c); // удаляет указанный символ 
	int myStrCmp(MyString&b)const; // сравнение строк 

};

