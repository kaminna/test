#include<stdio.h>
int main(void)
{
	char a[3][80];
	int i, j;
	int n=0,m=0,num=0,space=0,others=0;
	printf("请输入三行文字：");
	for (i = 0; i < 3;i++)
		gets(a[i]);
	for (i = 0; i < 3;i++)
	for (j = 0; j < 80; j++)
	{
		if (a[i][j] == '\0')					//换行判断
			break;
		if (a[i][j] >= 'A'&&a[i][j] <= 'Z')
			n++;
		else if (a[i][j] >= 'a'&&a[i][j] <= 'z')
			m++;
		else if (a[i][j] >= '0'&&a[i][j] <= '9')
			num++;
		else if (a[i][j] == ' ')
			space++;
		else
			others++;
	}
	printf("大写字母有：%d个\n",n);
	printf("小写字母有：%d个\n", m);
	printf("数字有：%d个\n", num);
	printf("空格有：%d个\n", space);
	printf("其他字符有：%d个\n", others);
	return 0;
}
