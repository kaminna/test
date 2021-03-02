#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void)
{
	double sum = 0;
	for (int i = 1; i <= 30; i++)
		sum += 2.0*i / (2.0*i + 1);
	cout << sum << endl;
	system("pause");
	return 0;
}
