#include<iostream>
#include<cstdlib>
using namespace std;
void f()
{
	auto x = 0;
	static int y = 3;
	x = x + 1;
	y = y + 1;
	cout << x << '\t' << y << endl;
}
int main()
{
	int i;
	for (i = 0; i < 3; i++)
		f();
	system("pause");
	return 0;
}
