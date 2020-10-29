#include<stdio.h>
#include<stdlib.h>
int main()
{
	double a = 1, b = 2, c = 3, d = 0;
	int n = 3;
	while (d < 1200)
	{
		d = (a + b + c)*0.5;
		a = b; b = c; c = d;
		n++;
	}
	printf("%d\n", n);
	system("pause");
	return 0;
}
