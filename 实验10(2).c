#include<stdio.h>
int main(void)
{
	char str_one[5],*str,str_two[5];
	int i,j;
	printf("请输入一个字符串:");
	scanf("%s",&str_one);
	printf("从第几个字符开始复制:");
	scanf("%d",&i);
	str=&str_one[i-1];
	for(j=0;j<5;j++)
		str_two[j]=*(str+j);
	str_two[5-(i-1)]='\0';
	printf("%s",str_two);
	return 0;
}
