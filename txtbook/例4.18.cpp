#include<iostream>
#include<cstdlib>
using namespace std;
const double PI = 3.1415;
double area(float r)
{
	return (PI*r*r);
}
double area(float x, float y)
{
	return (x*y);
}
int main()
{
	float a, b, r;
	cout << "输入圆半径";
	cin >> r;
	cout << "圆面积：" << area(r) << endl;
	cout << "输入矩形的长和宽";
	cin >> a >> b;
	cout << "矩形面积：" << area(a, b) << endl;
	system("pause");
	return 0;
}
