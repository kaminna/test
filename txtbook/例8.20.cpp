#include<iostream>
using namespace std;
int main()
{
	int select;
	while (true)
	{
		cout << "1-----添加学生信息\n";
		cout << "2-----修改学生成绩\n";
		cout << "3-----查询学生信息\n";
		cout << "4-----按总成绩排序\n";
		cout << "5-----删除学生信息\n";
		cout << "0-----推出系统\n";
		cin >> select;
		switch (select)
		{
		case 0:return 0;
		case 1:add(); break; 
		case 2:modify(); break;
		case 3:sort(); break;
		case 4:query(); break;
		case 5:del(); break;
		}
	}
	return 0;
}
