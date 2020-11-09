#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;
int min;
int find()
{
	int max, x;
	x = rand() % 101 + 100;
	cout << setw(4) << x;
	max = x; min = x;
	for (int i = 1; i < 10; i++)
	{
		x = rand() % 101 + 100;
		cout << setw(4) << x;
		if (x>max) max = x;
		if (x < min) min = x;
	}
	return max;
}
int main()
{
	int m = find();
	cout << endl << "最大数：" << m << ",最小数：" << min << endl;
	system("pause");
	return 0;
}
