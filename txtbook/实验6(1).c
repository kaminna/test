#include<stdio.h>
int f(int n,int m,int sum)
{
	sum=sum+m*m;
	if(sum<=n)
	{
		return f(n,m+1,sum);
	}
	else
		return m-1;
}
int main(void)
{
	int n=1000,m=1,sum=0;
	printf("%d\n",f(n,m,sum));
	return 0;
}
