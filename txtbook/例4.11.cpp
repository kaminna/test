#include<iostream>
#include<cstdlib>
using namespace std;
int gcd1(int x, int y)
{
	if (y == 0) return x;
	else return gcd1(y, x%y);
}
int main()
{
	int a, b;
	cout << "输入两个整数："; cin >> a >> b;
	int g = gcd1(a, b);
	cout << "最大公约数为：" << g << endl;
	system("pause");
	return 0;
}
