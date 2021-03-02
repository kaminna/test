#include<iostream>
#include<string.h>
#include<iomanip>
#define N 100
using namespace std;
union UAddr
{
	char gzdw[30];
	int bdfh;
};
struct PERSON
{
	char name[12];
	char xb;
	int age;
	char profe[10];
	UAddr uaddr;
};
int main(void)
{
	int n = 0, i; 
	char flag;
	PERSON person[N];
	do
	{
		n++;
		cout << "请输入第" << n << "个人员的姓名：";
		cin >> person[n - 1].name;
		cout << "请输入第" << n << "个人员的性别（f/m）:";//输入f或m
		cin >> person[n - 1].xb;
		cout << "请输入第" << n << "个人员的年龄：";
		cin >> person[n - 1].age;
		cout << "请输入第" << n << "个人员的职业：";
		cin >> person[n - 1].profe;
		if (strcmp(person[n - 1].profe, "军人") == 0)
		{
			cout << "请输入第" << n << "个人员的部队番号：";
			cin >> person[n - 1].uaddr.bdfh;
		}
		else
		{
			cout << "请输入第" << n << "个人员的工作单位:";
			cin >> person[n - 1].uaddr.gzdw;
		}
		cout << "继续输入人员信息吗(y/n)?";//输入y或n
		cin >> flag;
	} while (flag == 'y'&&n <= N);
	cout << setw(12) << "姓名" << setw(8) << "性别" << setw(8) << "年龄" << setw(10) << "职务" << setw(20) << "工作单位或部队番号" << endl;
	for (i = 0; i < n; i++)
	{
		cout << setw(12) << person[i].name << setw(8) << person[i].xb << setw(8) << person[i].age << setw(10) << person[i].profe;
		if (strcmp(person[i].profe, "军人") == 0)
			cout << setw(20) << person[i].uaddr.bdfh << endl;
		else
			cout << setw(20) << person[i].uaddr.gzdw << endl;
	}
	return 0;
}
