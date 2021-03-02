#include<iostream>
using namespace std;
int main()
{
	int a;
	int *p = &a, **pp = &p;
	a = 1;
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;
	cout << "p=" << p << endl;
	cout << "*pp=" << *pp << endl;
	cout << "**pp=" << **pp << endl;
	**pp = 100;
	cout << "a=" << a << endl;
	return 0;
}
