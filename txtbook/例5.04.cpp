#include<iostream>
#include<cstdlib>
using namespace std;
int x;
void fun1(int x)
{
	x++;
	cout << "local variable x is" << x << endl;
	cout << "global variable x is" << ::x << endl;
}
void fun2()
{
	int x;
	x = 5;
	cout << "local variable x is" << x << endl;
	cout << "global variable x is" << ::x << endl;
}
void fun3()
{
	x = 5;
}
int main()
{
	x = 2;
	fun1(5); cout << "main:" << x << endl;
	fun2(); cout << "main:" << x << endl;
	fun3(); cout << "main:" << x << endl;
	system("pause");
	return 0;
}
