#include<iostream>
#include<cstdlib>
using namespace std;
void menu_print();
void account_report();
void engineering_report();
void marketing_report();
int main()
{
	int choice;
	do
	{
		menu_print();
		cin >> choice;
	} while (choice <= 0 || choice >= 4);
	switch (choice)
	{
	case 1:account_report(); break;
	case 2:engineering_report(); break;
	case 3:marketing_report(); break;
	}
	system("pause");
	return 0;
}
void menu_print()
{
	cout << "系统功能：" << endl;
	cout << "1.财务管理" << endl;
	cout << "2.工程管理" << endl;
	cout << "3.市场管理" << endl;
	cout << "选择业务序号：" << endl;
}
void account_report()
{
	cout << "生成财务管理" << endl;
}
void engineering_report()
{
	cout << "生成工程管理" << endl;
}
void marketing_report()
{
	cout << "生成市场管理" << endl;
}
