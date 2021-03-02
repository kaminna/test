#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int cright;
int multiplication(int x, int y)
{
	cout << "请输入结果：" << x << '*' << y << "=";
	return x*y;
}
int addition(int x, int y)
{
	cout << "请输入结果：" << x << '+' << y << "=";
	return (x + y);
}
int subtraction(int x, int y)
{
	while (x < y)
	{
		x = rand() % 101;
		y = rand() % 101;
	}
	cout << "请输入结果：" << x << '-' << y << "=\n";
	return (x - y);
}
int division(int x, int y)
{
	while (y == 0 || x%y != 0)
	{
		x = rand() % 101;
		y = rand() % 101;
	}
	cout << "请输入结果：" << x << '/' << y << "=";
	return x / y;
}
void panduan(int r1, int r2)
{
	int r3;
	if (r1 == r2)
	{
		cout << "It is right!" << endl;
		cright++;
	}
	else
	{
		cout << "It is error!Please try again!" << endl;
		cin >> r3;
		if (r3 == r2){ cout << "It is right!" << endl; cright++; }
	}
}
int main()
{
	int num1, num2, result, op, m, n;
	cout << "请输入要做的题数：";
	cin >> m;
	srand(time(0));
	for (int j = 1; j <= m; j++)
	{
		num1 = rand() % 101;
		num2 = rand() % 101;
		op = rand() % 4 + 1;
		switch (op)
		{
		case 1:result = multiplication(num1, num2); break;
		case 2:result = addition(num1, num2); break;
		case 3:result = subtraction(num1, num2); break;
		case 4:result = division(num1, num2); break;
		default:cout << "错" << endl;
		}
		cin >> n;
		panduan(n, result);
	}
	cout << "共做对" << cright << "题" << endl;
	cout << "正确率为" << cright * 100 / m << "%" << endl;
	system("pause");
	return 0;
}
