#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;
int main(void)
{
	int i, m, count = 0;
	bool flag;
	for (m = 100; m <= 200; m++)
	{
		flag = true;
		for (i = 2; i <= sqrtf(m);i++)
		if (m%i == 0)
		{
			flag = false;
			break;
		}
		if (flag)
		{
			cout << setw(5) << m;
			count++;
			if (count % 8 == 0)cout << endl;
		}
	}
	system("pause");
	return 0;
}
