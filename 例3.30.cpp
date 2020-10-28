#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(void)
{
	float a;
	float x0, x1;
	cout << "Input a positive number:" << endl;
	cin >> a;
	x0 = a / 2;
	x1 = (x0 + a / x0) / 2;
	while (fabs(x1 - x0) >= 1e-5)
	{
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	}
	cout << "The square root is " << x1 << endl;
	system("pause");
	return 0;
}
