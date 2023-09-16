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
	void myStrCpy(const MyString& obj);// ����������� �����
	bool myStrStr(const char* str)const;// ����� ��������� � ������
	int  myChr(char c)const; // ����� ������� � ������(������ ���������� �������, ���� -1)
	int myStrLen()const;// ���������� ����� ������
	MyString myStrCat(MyString& b); // ����������� �����
	MyString myStrCat(const char* word);//����������������� � ������ ��������� �����
	void myDelChr(char c); // ������� ��������� ������ 
	int myStrCmp(MyString&b)const; // ��������� ����� 
	MyString operator + (MyString& b); // ���������� ��������� + (������������ �����)
	MyString operator + (const char* word); //���������� ��������� + (����������������� � ������ ��������� �����)
	MyString& operator++(); // ���������� ������� ������ �� 1
	MyString operator++(int); // postfix ���������� ������� ������ �� 1
	MyString& operator--(); //�������� ���������� ������� ������
	MyString operator--(int); //postfix �������� ���������� ������� ������
	MyString& operator - (char c); // �������� ������� �� ������
	bool operator > (MyString& b); //��������� �����(�� ������� ascii)
	bool operator < (MyString& b);
	bool operator >= (MyString& b);
	bool operator <= (MyString& b);
	bool operator == (MyString& b);
	bool operator != (MyString& b);

};

