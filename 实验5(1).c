#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double i=100, j,sum=0;
	for (int n = 1; n <= 10; n++)
	{
		sum += i;
		i = i / 2;
	}
	printf("第十次落地时共经过%f米\n", sum);
	printf("第十次反弹%f米\n", i);
	system("pause");
	return 0;
}
