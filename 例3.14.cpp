#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i, sum;
	sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	cout << "sum=" << sum << endl;
	system("pause");
	return 0;
}
