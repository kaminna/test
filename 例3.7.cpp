#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	float num1, num2, result;
	char op;
	cout << "输入操作数1，运算符，操作数2： " << endl;
	cin >> num1 >> op >> num2;
	switch (op)
	{
	case '+':result = num1 + num2; break;
	case '-':result = num1 - num2; break;
	case '*':result = num1*num2; break;
	case '/':result = num1 / num2; break;
	default:cout << op << "是无效运算符！";
	}
	if (op == '+' || op == '-' || op == '*' || op == '/')
		cout << num1 << op << num2 << "=" << result << endl;
	system("pause");
	return 0;
}
