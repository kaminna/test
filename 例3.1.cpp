#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
	int h, f, x, y;
	cout << "请输入鸡和兔的总只数：";
	cin >> h;
	cout << "鸡和兔的总脚数（偶数）：";
	cin >> f;
	x = (4 * h - f) / 2;
	y = (f - 2 * h) / 2;
	cout << "则笼中鸡有" << x << "只，兔有" << y << "只。" << endl;
	system("pause");
	return 0;
}
