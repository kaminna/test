#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int i, n, sum;
	sum = 0;
	for (i = 0; i < 50; i++)
	{
		cout << "\n Input number:";
		cin >> n;
		if (n < 0)
			break;
		sum += n;
	}
	cout << "sum=" << sum << endl;
	system("pause");
	return 0;
}
