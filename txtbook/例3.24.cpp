#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(void)
{
	int max, min, x;
	x = rand() % 101 + 100;
	max = x; min = x;
	for (int i = 1; i<10; i++)
	{
		x = rand() % 101 + 100;
		cout << setw(4) << x;
		if (x > max)max = x;
		if (x < min)min = x;
	}
	cout << endl << "最大数：" << max << ",最小值：" << min << endl;
	system("pause");
	return 0;
}
