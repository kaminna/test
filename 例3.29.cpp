#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int n,number = 20;
	float a = 2, b = 1, t, s = 0;
	for (n = 1; n <= number; n++)
	{
		s = s + a / b;
		t = a; a = a + b; b = t;
	}
	cout << s;
	system("pause");
	return 0;
}
