#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(void)
{
	double x0, x1, e, f, f1;
	cout << "请输入迭代初值：";
	cin >> x1;
	cout << "输入迭代误差：";
	cin >> e;
	do
	{
		x0 = x1;
		f = x0 + log(x0) - 2.13;
		f1 = 1 + 1 / x0;
		x1 = x0 - f / f1;
	} while (fabs(x0 - x1) > e);
	cout << x1 << endl;
	system("pause");
	return 0;
}
