#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n > 0)
	{
		cout << n % 10;
		n = n / 10;
	}
	cout << endl;
	system("pause");
	return 0;
}
