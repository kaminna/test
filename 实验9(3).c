#include<stdio.h>
struct student
{
	int num;
	char name[50];
	int chinese;
	int math;
	int english;
}stu[5];
void print()
{
	int i,j,sum[5];
	struct student t;
	for(i=0;i<5;i++)
	{
		sum[i]=stu[i].chinese+stu[i].math+stu[i].english;
	}
	for(i=0;i<4;i++)
		for(j=0;j<4-i;j++)
			if(sum[j]<sum[j+1])
			{t=stu[j];stu[j]=stu[j+1];stu[j+1]=t;}
	for(i=0;i<5;i++)
		printf("%d	%s	%4d%4d%4d\n",stu[i].num,stu[i].name,stu[i].chinese,stu[i].math,stu[i].english);
}
int main(void)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("学号:");
		scanf("%d",&stu[i].num);
		printf("姓名:");
		scanf("%s",&stu[i].name);
		printf("语文成绩:");
		scanf("%d",&stu[i].chinese);
		printf("数学成绩:");
		scanf("%d",&stu[i].math);
		printf("英语成绩:");
		scanf("%d",&stu[i].english);
	}
	print();
	return 0;
}
