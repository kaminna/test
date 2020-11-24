#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 0, 1, 2, 3, 4 };
	int *p;
	p = &a[0];
	p++; cout << *p << '\t';
	p = p + 3; cout << *p << '\t';
	p--; cout << *p << '\t';
	p = p - 3; cout << *p << '\t';
	return 0;
}
