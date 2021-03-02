#include<iostream>
using namespace std;
int max(int x, int y)
{
	int z;
	if (x > y) z = x;
	else z = y;
	return z;
}
int main()
{
	int(*p)(int, int);
	int a, b, c;
	p = &max;
	cin >> a >> b;
	c = (*p)(a, b);
	cout << "a=" << a << "b=" << b << "c=" << c << endl;
	cout << "p=" << p << "max=" << max << endl;
	return 0;
}
