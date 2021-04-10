#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=1;
	long n;
	while(i<=100)
	{
		n=i*i;
		if(i>=10)
		{
			if(n%100==i)
			{
				printf("%d^2=%d\n",i,n);
				printf("%d为同构数\n",i);
			}
		}
		else
		{
			if(n%10==i)
			{
				printf("%d^2=%d\n",i,n);
				printf("%d为同构数\n",i);
			}
		}
		i++;
	}
	system("pause");
	return 0;
}
