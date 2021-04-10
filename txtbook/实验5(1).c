#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double i=100,sum=0;
	int n;
	for ( n = 1; n <= 10; n++)
	{
		sum += i;
		i /= 2;
		printf("第%d次落地时共经过%f米\n",n,sum);
		printf("第%d次反弹%f米\n",n,i);
	}
	system("pause");
	return 0;
}
