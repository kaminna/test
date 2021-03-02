#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main(void)
{
	cout << '*';
	for (int i = 1; i <= 9; i++)
		cout << setw(8) << i;
	cout << endl;
	for (int i = 1; i <= 9; i++)
	{
		cout << i;
		for (int j = 1; j <= i; j++)
			cout << setw(3) << i << '*' << j << '=' << setw(2) << i*j;
		cout << endl;
	}
	system("pause");
	return 0;
}
