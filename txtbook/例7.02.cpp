#include<iostream>
using namespace std;
struct person
{
	char name[10];
	bool sex;
	int age;
	float salary;
};
person a[4] = { { "李明", true, 22, 380 }, { "王强", true, 34, 570 },
				{ "刘刚", true, 28, 450 }, { "王霞", false, 27, 480 } };
void output(int n)
{
	cout << "显示具有person结构的" << n << "个记录" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i].name << ' ';
		if (a[i].sex == true)
			cout << "男" << ' ';
		else
			cout << "女" << ' ';
		cout << a[i].age << ' ' << a[i].salary << endl;
	}
}
void find(int n)
{
	int k = 0;
	float x = a[0].salary;
	for (int i = 1; i < n; i++)
	{
		if (a[i].salary>x)
		{
			x = a[i].salary;
			k = i;
		}
	}
	cout << "显示数组a中具有最高工资值的员工信息： " << endl;
	cout << a[k].name << ' ';
	if (a[k].sex == true)
		cout << "男" << ' ';
	else
		cout << "女" << ' ';
	cout << ' ' << a[k].age << ' ' << a[k].salary << endl;
}
int main(void)
{
	output(4);
	find(4);
	return 0;
}
