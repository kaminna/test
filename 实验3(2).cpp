#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	float i;
	int j;
	cout << "请输入金额：";
	cin >> i;
	j = i / 1000;
	if (i<0)
	{
		cout << "请输入正确金额" << endl;
	}
	else
	{
		switch (j)
		{
		case 5:cout << "应付：" << i*0.8 << "元" << endl; break;
		case 4:cout << "应付：" << i*0.85 << "元" << endl; break;
		case 3:cout << "应付：" << i*0.85 << "元" << endl; break;
		case 2:cout << "应付：" << i*0.9 << "元" << endl; break;
		case 1:cout << "应付：" << i*0.95 << "元" << endl; break;
		case 0:cout << "应付：" << i << "元" << endl; break;
		default:cout << "应付:" << i*0.8 << "元" << endl;
		}
	}
	system("pause");
	return 0;
}
