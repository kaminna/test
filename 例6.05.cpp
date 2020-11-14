#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	int i, n;
	char a[30], temp;
	cout << "Please input a string:" << endl;
	cin >> a;
	n = strlen(a);
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i]; a[i] = a[n - i - 1]; a[n - i - 1] = temp;
	}
	for (i = 0; i < n; i++)
		cout << a[i];
	cout << endl;
	return 0;
}
