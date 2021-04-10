#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int main(void)
{
	int a[10],i,*k=a,*j=a;
	printf("请输入10个数字:");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=1;i<10;i++)
	{	 
		if(*k>a[i])
			k=&a[i];
		if(*j<a[i])
			j=&a[i];
	}
	swap(k,&a[0]);
	swap(j,&a[9]);
	printf("交换后:");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}
