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
	MyString(const MyString& b);
	~MyString();
	void init(const char* str);
	void print()const;
	void myStrCpy(const MyString& obj);// копирование строк
	bool myStrStr(const char* str)const;// поиск подстроки в строке
	int  myChr(char c)const; // поиск символа в строке(индекс найденного символа, либо -1)
	int myStrLen()const;// возвращает длину строки
	MyString myStrCat(MyString& b); // объединение строк
	MyString myStrCat(const char* word);//конкатенанировать к строке вписанное слово
	void myDelChr(char c); // удаляет указанный символ 
	int myStrCmp(MyString&b)const; // сравнение строк 
	MyString operator + (MyString& b); // перегрузка оператора + (конкатенация строк)
	MyString operator + (const char* word); //перегрузка оператора + (конкатенанировать к строке вписанное слово)
	MyString& operator++(); // увеличение размера строки на 1
	MyString operator++(int); // postfix увеличение размера строки на 1
	MyString& operator--(); //удаление последнего символа строки
	MyString operator--(int); //postfix удаление последнего символа строки
	MyString& operator - (char c); // удаление символа из строки
	bool operator > (MyString& b); //сравнение строк(по таблице ascii)
	bool operator < (MyString& b);
	bool operator >= (MyString& b);
	bool operator <= (MyString& b);
	bool operator == (MyString& b);
	bool operator != (MyString& b);

};

