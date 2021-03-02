#include<iostream>
using namespace std;
struct student
{
	long int num;
	char mame[20];
	char sex;
	int age;
}stu[3] = { { 2006101, "LiLin", 'M', 18 }, { 2006102, "ZhangFeng", 'M', 19 }, {2006103,"WangMin",'F',20} };
int main()
{
	student *p;
	for (p = stu; p < stu + 3; p++)
		cout << p->num << "," << p->name << "," << p->sex << "," << p->age << endl;
	return 0;
}
