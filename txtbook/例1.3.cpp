#include<iostream>
#include<stdlib.h>
using namespace std;
int max(int x, int y)
{
	int z=0;
	if (x > y)
		y = z;
	else
		z = y;
	return z;
}
int main()
{
	int a, b, c;
	cout << "Input two numbers:\n";
	cin >> a >> b;
	c = max(a, b);
	cout << "maximun number is:" << c << endl;
	system("pause");
	return 0;
}
