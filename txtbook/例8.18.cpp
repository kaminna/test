#include<iostream>
using namespace std;
int *mynew(int n)
{
	int *address;
	if (n > 0)
	{
		address = new int[n];
		for (int i = 0; i < n; i++)
			address[i] = i + 1;
	}
	else
	{
		address = NULL;
	}
	return address;
}
int main()
{
	int *a, n = 10;
	if (a = mynew(n))
	{
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
		delete[n]a;
	}
	return 0;
}
