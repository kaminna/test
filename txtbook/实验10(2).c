#include<stdio.h>
int main(void)
{
	char str_one[100],*str,str_two[100];
	int i,j=0;
	printf("请输入一个字符串:");
	scanf("%s",&str_one);
	printf("从第几个字符开始复制:");
	scanf("%d",&i);
	str=&str_one[i-1];
	while(*str!='\0')
	{
		str_two[j]=*(str+j);
		j++;
	}
	printf("%s",str_two);
	return 0;
}
