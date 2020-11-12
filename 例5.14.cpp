#include<iostream>
#include<math.h>
using namespace std;
double triange_area(double, double, double);
double circle_area(double);
#define PI 3.14159
#include"my.h"
double triangle_area(double a, double b, double c)
{
	double t, area;
	t = (a + b + c) / 2;
	area = sqrt(t*(t - a)*(t - b)*(t - c));
	return area;
}
#include"my.h"
double circle_area(double r1)
{
	double area;
	area = PI*r1*r1;
	return area;
}
#include"my.h"
int main(void)
{
	double a, b, c;
	double r;
	cout << "请输入三角形的三个边长：";
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "输入的三边值不能构成三角形！" << endl;
	}
	else
		cout << "三角形的面积：" << triangle_area(a, b, c) << endl;
	cout << "请输入圆的半径：";
	cin >> r;
	cout << "圆的面积=" << circle_area(r) << endl;
	return 0;
}
