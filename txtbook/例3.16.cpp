#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main(void)
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		cout << setw(20 - i);
		for (j = 1; j < 2 * i; j++)
			cout << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}
