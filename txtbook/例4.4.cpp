#include<iostream>
#include<cstdlib>
using namespace std;
long fact(int m);
int main()
{
	int n; long p;
	cin >> n;
	p = fact(n);
	cout << p << endl;
	system("pause");
	return 0;
}
long fact(int m)
{
	int i;
	long s = 1;
	for (i = 1; i <= m; i++)
		s = s*i;
	return(s);
}
