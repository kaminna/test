#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a, b;
	cout << "输入两整数：" << endl;
	cin >> a >> b;
	cout << "a=" << a << '\t' << "b=" << b << endl;
	if (b >= a)
	{
		int t;
		t = a; a = b; b = t;
	}
	cout << "t=" << t << endl;        //错误，t已经无效
	cout << "a=" << a << '\t' << "b=" << b << endl;
	system("pause");
	return 0;
}
