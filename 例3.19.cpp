#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int n, i;
	cout << "please input a number:";
	cin >> n;
	cout << n << '=';
	for (i = 2; i <= n; i++)
	{
		while (n%i == 0)
		{
			if (n != i)
				cout << i << '*';
			else
				cout << i;
			n = n / i;
		}
	}
	system("pause");
	return 0;
}
