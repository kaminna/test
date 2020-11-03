#include<iostream>
#include<cstdlib>
using namespace std;
inline double sqr(double x)
{
	return x*x;
}
inline double cube(double x)
{
	return x*x*x;
}
int main()
{
	double x;
	cout << "请输入一个数据" << endl;
	cin >> x;
	cout << "square of " <<x<< "=" << sqr(x) << endl;
	cout << "cube of " << x << "=" << cube(x) << endl;
	system("pause");
	return 0;
}
