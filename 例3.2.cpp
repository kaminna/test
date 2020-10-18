#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int year;
	cout << "输入年份：" << endl;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		cout << year << "是闰年" << endl;
	else
		cout << year << "不是闰年" << endl;
	system("pause");
	return 0;
}
