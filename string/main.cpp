#include <iostream>
#include "MyString.h"
using namespace std;
int MyString:: createdObj=0;
int main()
{
	MyString a("Warsaw");
	a.print();
	MyString b("Kyiv");
	b.myStrCat(a);
	b.print();
	cout << a.myStrStr("Warsak")<<endl;
	cout << b.myChr('p') << endl;
}