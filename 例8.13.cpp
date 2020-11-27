#include<iostream>
using namespace std;
void swap(int, int);
int main()
{
	int a = 3, b = 8;
	cout << "交换前:" << endl;
	cout << "a=" << a << "\t	b=" << b << endl;
	swap(a, b);
	cout << "交换后：" << endl; cout << "a=" << a << "\t	b=" << b << endl;
	return 0;
}
void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
