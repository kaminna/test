#include<stdio.h>
int main()
{
	int i=1,d=10;
	while(d>=1)
	{
		printf("Day%d有%d个桃子\n",d,i);
		i=2*(i+1);
		d--;
	}
	return 0;
}
