#include<iostream>
#include<cstring>
using namespace std;
struct student
{
	long int num;
	char name[20];
	char sex;
	float score;
}stu , *p;
int main()
{
	p = &stu;
	stu.num = 2006101;
	strcpy(stu.name, "Li Lin");
	p->sex = 'M';
	p->score = 89;
	cout << (*p).num << "," << p->name << "," << stu.sex << "," << p->score << endl;
	return 0;
}
