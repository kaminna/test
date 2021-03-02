#include<iostream>
#include<cstdlib>
using namespace std;
void move(char source, char target)
{
	cout << source << "==>" << target << endl; 
}
void hanoi(int n, char source, char temp, char target)
{
	if (n == 1)
		move(source, target);
	else
	{
		hanoi(n - 1, source, target, temp);
		move(source, target);
		hanoi(n - 1, temp, source, target);
	}
}
int main()
{
	int n;
	cout << "输入盘子数：" << endl;
	cin >> n;
	cout << "移动" << n << "个盘子的步骤是：" << endl;
	hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}
