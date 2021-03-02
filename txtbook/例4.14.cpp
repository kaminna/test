#include<iostream>
#include<cstdlib>
using namespace std;
int max(int, int);
int max(int, int, int);
int max(int, int, int, int);
int main()
{
	cout << max(3, 5) << endl;
	cout << max(-7, 9, 0) << endl;
	cout << max(8, 6, 1, 2) << endl;
	system("pause");
	return 0;
}
int max(int a, int b)
{
	return (a > b ? a : b);
}
int max(int a, int b, int c)
{
	int t = max(a, b);
	return max(t, c);
}
int max(int a, int b, int c, int d)
{
	int t1, t2;
	t1 = max(a, b);
	t2 = max(c, d);
	return max(t1, t2);
}
