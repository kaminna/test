#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int m, n, r, t;
	int m1, n1;
	cout << "请输入第1个数："; cin >> m;
	cout << "请输入第2个数："; cin >> n;
	m1 = m; n1 = n;
	if (m<n)
	{
		t = m; m = n; n = t;
	}
	do
	{
		r = m%n;
		m = n;
		n = r;
	} while (r != 0);
	cout << m1 << "和" << n1 << "的最大公约数是" << m;
	system("pause");
	return 0;
}
