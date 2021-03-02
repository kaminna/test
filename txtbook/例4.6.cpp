#include<iostream>
#include<cstdlib>
using namespace std;
int multiple3(int n)
{
	n = n * 3;
	return n;
}
int main()
{
	int n = 5;
	cout << multiple3(2) << endl;
	cout << multiple3(n) << endl;
	cout << n << endl;
	system("pause");
	return 0;
}
