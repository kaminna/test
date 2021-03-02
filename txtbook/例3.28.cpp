#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	long f1, f2, f3;
	f1 = 1; f2 = 1;
	cout << f1 << endl << f2 << endl;
	for (int i = 3; i <= 20; i++)
	{
		f3 = f1 + f2;
		cout << f3 << endl;
		f1 = f2; f2 = f3;
	}
	system("pause");
	return 0;
}
