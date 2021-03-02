#include<iostream>
#include<cstdlib>
using namespace std;
int func2(int x)
{
	int t;
	t = x + 9;
	return t;
}
int func1(int a, int b)
{
	int z;
	z = func2(a*b);
	return z;
}
int main()
{
	int x1 = 2, x2 = 5, y;
	y = func1(x1, x2);
	cout << y << endl;
	system("pause");
	return 0;
}
