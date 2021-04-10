#include<stdio.h>
double fac(int n)	//求阶乘
{
	if(n==0)	//0!=1
	{
		n=1;
		return n;
	}
	if(n==1)
		return n;
	else
		return n*fac(n-1);
}
/*double fac(int n)
{
	int i=1;
	double m=1;
	for(i=1;i<=n;i++)
	{
		m=m*i;
	}
	return m;
}*/
double combin(int m,int n)
{
	double result;
	result=fac(m)/(fac(n)*fac((m-n)));	//m!/(n!*(m-n)!)
	return result;
}
int main(void)
{
	int m,n,temp;
	double result;
	scanf("%d%d",&m,&n);
	if(m<n)
	{
		temp=n;n=m;m=temp;
		result=combin(m,n);
	}
	else
		result=combin(m,n);
	printf("m!=%.f,n!=%.f,(m-n)!=%.f\n",fac(m),fac(n),fac((m-n)));
	printf("result=%.f\n",result);
	return 0;
}
