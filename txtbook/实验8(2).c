#include<stdio.h>
int main(void)
{
	int a[5]={8,6,5,4,1};
	int i,temp,j;
	printf("原数组为：");
	for(i=0;i<5;i++)
		printf("%d	",a[i]);
	printf("\n");
	for(i=0;i<5/2;i++)	//交换数据，只需换前一半的数据，后面的就跟着换好了
	{
		temp=a[i];
		a[i]=a[4-i];
		a[4-i]=temp;
	}
	printf("逆序为：");
	for(i=0;i<5;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}
