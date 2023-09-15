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
	void myStrCpy(MyString& obj);// ����������� �����
	bool myStrStr(const char* str)const;// ����� ��������� � ������
	int  myChr(char c)const; // ����� ������� � ������(������ ���������� �������, ���� -1)
	int myStrLen()const;// ���������� ����� ������
	void myStrCat(MyString& b); // ����������� �����
	void myDelChr(char c); // ������� ��������� ������ 
	int myStrCmp(MyString&b)const; // ��������� ����� 

};

