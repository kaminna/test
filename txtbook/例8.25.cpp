#include<iostream>
using namespace std;
struct student
{
	int num;
	char name[20];
	int score;
	char grade;
};
void getgrade(student *p)
{
	int k;
	for (k = 0; k < 3; k++, p++)
	{
		if (p->score >= 85)
			p->grade = 'A';
		else if (p->score >= 70)
			p->grade = 'B';
		else if (p->score >= 60)
			p->grade = 'C';
		else p->grade = 'D';
	}
}
int main()
{
	student stu[3], *q;
	int i;
	q = stu;
	cout << "请输入3名学生的信息：";
	for (i = 0; i < 3; i++)
		cin >> stu[i].num >> stu[i].name >> stu[i].score;
	getgrade(q);
	for (i = 0; i < 3; i++)
		cout << stu[i].num << "," << stu[i].name << "," << stu[i].score << "," << stu[i].grade << endl;
	return 0;
}
