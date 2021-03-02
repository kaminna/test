#include<iostream>
using namespace std;
inline int doub(int x)
{
	return x * 2;
}
int main(void)
{
	for (int i = 0; i < 3; i++)
		cout << i << "doubled is:" << doub(i) << endl;
	cout << "2+3 doubled is:" << doub(2 + 3) << endl;
	return 0;
}
