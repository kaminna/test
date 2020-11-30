#include<iostream>
using namespace std;
int main()
{
	const int i = 20;
	int k = 40;
	const int *p;
	p = &i;
	cout << *p << ' ' << i;
	*p = 100;
	p = &k;
	cout << *p << ' ' << k;
	*p = 200;
	k = 200;
	return 0;
}
