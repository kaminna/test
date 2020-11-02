#include<iostream>
#include<cstdlib>
using namespace std;
void conv(int n)
{
	if (n < 10)
	{
		cout << n;
		return;
	}
	cout << n % 10;
	conv(n / 10);
}
int main()
{
	int t;
	cout << "Input a positive number:";
	cin >> t;
	conv(t);
	system("pause");
	return 0;
}
