#include<iostream>
using namespace std;
#define doub(x) x*2
int main()
{
	for (int i = 0; i < 3; i++)
		cout << i << "double is:" << doub(i) << endl;
	cout << "2+3 double is:" << doub(2 + 3) << endl;
	return 0;
}
