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
	void myStrCpy(const MyString& obj);// copying strings
	bool myStrStr(const char* str)const;// searching substring in a string
	int  myChr(char c)const; // searching symbol in a string(index of a found symbol, or -1)
	int myStrLen()const;// returning str length
	MyString myStrCat(MyString& b); // concatenation
	MyString myStrCat(const char* word);//concat const char
	void myDelChr(char c); // delete any symbol
	int myStrCmp(MyString&b)const; // string compare 
	MyString operator + (MyString& b); // string concatenation
	MyString operator + (const char* word); //concat const char
	MyString& operator++(); // str len +1
	MyString operator++(int); // postfix str len +1
	MyString& operator--(); //delete last symbol in string
	MyString operator--(int); //postfix delete last symbol in string
	MyString& operator - (char c); // delete any symbol from string
	MyString& operator +=(MyString& b);//simplified concatenation
	MyString& operator +=(const char*word);//simplified concat const char
	MyString& operator -=(char c);
	bool operator > (MyString& b); //string compare(ascii)
	bool operator < (MyString& b);
	bool operator >= (MyString& b);
	bool operator <= (MyString& b);
	bool operator == (MyString& b);
	bool operator != (MyString& b);
	

};

