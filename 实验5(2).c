#include<stdio.h>
#include<stdlib.h>
int main()
{
	const int std = 10;
	int n,i=0,j=0,sum=0,a;
	for (a = 1; a <= 20; a++)
	{
		printf("请输入第%d根金属杆的长度(cm)：",a);
		scanf("%d", &n);
		if (n > 10)
		{
			i++;
		}
		else if(n<10)
		{
			j++;
		}
		sum += n;
	}
	printf("超过标准长度的根数有：%d根\n", i);
	printf("低于标准长度的根数有：%d根\n", j);
	printf("这批金属杆的平均长度为:%dcm\n", sum / 20);
	system("pause");
	return 0;
}
