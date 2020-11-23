#include<iostream>
#include<iomanip>
using namespace std;
struct person
{
	char name[12];
	int age;
	int profession;
union level
{
	int grade;
	char rank[20];
	char title[20];
}m;
};
void main()
{
	person body[20];
	int i;
	for (i = 0; i < 3; i++)
	{
		cout << "输入姓名，年龄，类别代号（0为学生，1为行政干部，2为老师）：\n";
		cin >> body[i].name >> body[i].age >> body[i].profession;
		if (body[i].profession == 0)
		{
			cout << "输入学生年级:";
			cin >> body[i].m.grade;
		}
		else if (body[i].profession==1)
		{
			cout << "行政干部的职务：";
			cin >> body[i].m.rank;
		}
		else
		{
			cout << "老师的职称：";
			cin >> body[i].m.title;
		}
	}
	cout << "	姓名，年龄，类别信息\n";
	for (i = 0; i < 3; i++)
	{
		cout << setw(10) << body[i].name << setw(5) << body[i].age;
		if (body[i].profession == 0) cout << setw(20) << body[i].m.grade;
		else if (body[i].profession == 1) cout << setw(20) << body[i].m.rank;
		else cout << setw(20) << body[i].m.title;
		cout << endl;
	}
}
