#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k;
	double sum, d, f;
	sum = 0; k = 1; f = 1;
	do
	{
		d = 1.0 / (k*(k + 1));
		sum = sum + f*d;
		k = k + 1;
		f = -f;
	} while (d >= 1.0e-4);
	printf("sum=%lf\n", sum);
	system("pause");
	return 0;
}
