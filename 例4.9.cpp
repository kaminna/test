#include<iostream>
#include<cstdlib>
using namespace std;
long fac(int n)
{
	long p;
	if (n == 1)
	{
		p = 1;
	}
	else
	{
		p = n*fac(n - 1);
	}
	return p;
}
int main()
{
	int n;
	cout << "请输入一个正整数：";
	cin >> n;
	cout <<n <<"!=" << fac(n) << endl;
	system("pause");
	return 0;
}
