#include<iostream>
#include<cstdlib>
using namespace std;
void f(int x, int y)
{
	auto m = 0;
	static int n = 0;
	m = m + x + y;
	n = n + x + y;
	cout << "m=" << m << '\t' << "n=" << n << endl;
}
int main()
{
	int i = 5, j = 10, k;
	for (k = 1; k <= 3; k++)
		f(i, j);
	system("pause");
	return 0;
}
