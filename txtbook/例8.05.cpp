#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 }, sum = 0;
	int *p, *p1;
	p1 = &a[4];
	for (p = &a[0]; p <= p1; p++)
	{
		sum += *p;
		cout << *p << '\t';
	}
	cout << "\nsum=" << sum << endl;
	return 0;
}
