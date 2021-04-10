#include<stdio.h>
struct DATE
{
	int year;
	int month;
	int day;
};
int f(int year)//判断是否为闰年
{
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}
int main(void)
{
	struct DATE date;
	int i,result=0,month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请输入年月日(如:2020.12.11):");
	scanf("%d.%d.%d",&date.year,&date.month,&date.day);
	if(f(date.year))
	{
		month[1]=29;
		if(date.month>1)
		for(i=1;i<date.month;i++)
			result+=month[i-1];
		result+=date.day;
	}
	else
	{
		if(date.month>1)
		for(i=1;i<date.month;i++)
			result+=month[i-1];
		result=date.day;
	}
	printf("%d.%d.%d为该年的第%d天\n",date.year,date.month,date.day,result);
	return 0;
}
