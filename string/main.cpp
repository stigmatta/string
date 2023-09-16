#include <iostream>
#include "MyString.h"
using namespace std;
int MyString:: createdObj=0;
int main()
{
	system("chcp 1251");
	MyString a("warsaw"); 
	a.print();
	MyString b("Kyiv");
	MyString c = a + b;
	c.print();
	/*b.myStrCat(a);
	b.print();
	cout << a.myStrStr("Warsak")<<endl;
	cout << b.myChr('p') << endl;
	cout << a.myStrCmp(b) << endl;
	a.myDelChr('w');
	a.print();*/
	/*a = a + b;
	a.print();*/
	/*MyString d = a + "Kyiv";
	d.print();
	--a;
	++a;
	a.print();*/
	/*MyString d = a - 'w';*/
	/*d.print();*/
	bool test1 = a > b;
	cout << test1 << endl;
	bool test2 = a < b;
	cout << test2 << endl;
	bool test3 = a == b;
	cout << test3<< endl;
	bool test4 = a != b;
	cout << test4 << endl;
	bool test5 = a >= a;
	cout << test5 << endl;
	bool test6 = a >= b;
	cout << test6 << endl;
	bool test7 = a <= a;
	cout << test7 << endl;
	bool test8 = a <= b;
	cout << test8 << endl;
	return 0;
}