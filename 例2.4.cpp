#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
	int i, j;
	cout << "please input two numbers:";
	cin >> i >> j;
	cout << i << j << endl;
	cout << setw(10) << i << setw(10) << j << endl;
	system("pause");
	return 0;
}
