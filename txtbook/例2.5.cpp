#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
	const double pi = 3.14159;
	double r = 6.779, c, s;
	c = 2.0*pi*r;
	s = pi*r*r;
	cout << "圆的周长（指数形式）为：" << setiosflags(ios::scientific) << c << endl;
	cout << "圆的面积（指数形式）为：" << s << endl;
	system("pause");
	return 0;
}
