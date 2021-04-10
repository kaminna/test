#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int F, C;
	printf("请输入华氏温度：");
	scanf("%d",&F);
	C = 5.0 / 9.0*(F - 32);                        //C=5*(F-32)/9,C=(float)5/9*(F-32)
	printf("对应的摄氏温度为：%d℃\n",C);
	system("pause");
	return 0;
}
