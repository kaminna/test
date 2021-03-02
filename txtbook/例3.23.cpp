#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void)
{
	double p, t, sum_e;
	int i = 1;
	p = 1; sum_e = 1;
	do
	{
		p = p*i;
		t = 1 / p;
		sum_e = sum_e + t;
		i = i + 1;
	} while (t > 0.00001);
	cout << sum_e << endl;
	system("pause");
	return 0;
}
