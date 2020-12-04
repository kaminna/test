#include<stdio.h>
int main(void)
{
	int a[11]={2,4,6,8,10,12,14,16,18,20};
	int n,i,j;
	printf("原数组为：");
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	printf("\n");
	printf("请输入一个数：");
	scanf("%d",&n);
	for(i=0;i<10;i++)	//遍历数组
	{
		if(a[i]>n)		//找n要插入的位置
		{
			for(j=9;j>=i;j--)	//把n要插入位置的数都往后移一位
				a[j+1]=a[j];
			a[i]=n;break;	//把n放到要插入的位置
		}
		else a[10]=n;
	}
	printf("插入%d后的数组为：",n);
	for(i=0;i<11;i++)
		printf("%d  ",a[i]);
	printf("\n");
	return 0;
}
