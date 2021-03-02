#include<iostream>
#include<cstdlib>
using namespace std;
void Swap(int, int);
int main()
{
	int x, y;
	x = 6;
	y = 8;
	cout << "x=" << x << "y=" << y << endl;
	Swap(x, y);
	cout << "x=" << x << "y=" << y << endl;
	system("pause");
	return 0;
}
void Swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "b=" << b << endl;
}
