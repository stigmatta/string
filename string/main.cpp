#include <iostream>
#include "MyString.h"
using namespace std;
int MyString:: createdObj=0;
int main()
{
	MyString a("warsaw");
	a.print();
	MyString b("warsaw");
	b.myStrCat(a);
	b.print();
	cout << a.myStrStr("Warsak")<<endl;
	cout << b.myChr('p') << endl;
	cout << a.myStrCmp(b) << endl;
	a.myDelChr('w');
	a.print();
	
}