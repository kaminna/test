#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(void)
{
	int m, i;
	bool flag;
	cout << "输入整数m: " << endl;
	cin >> m;
	flag = true;
	for (i = 2; i < m; i++)
	if (m%i == 0)
	{
		flag = false;
		break;
	}
	if (flag == true)
		cout << m << "是素数" << endl;
	else
		cout << m << "不是素数" << endl;
	system("pause");
	return 0;
}
