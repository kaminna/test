/*文件名：exemple5_10_1.cpp*/
int a = 20, b = 7;
int max(int x,int y)
{
	return x > y ? x : y;
}
/*文件名：exemple5_10_2.cpp*/
#include<iostream>
using namespace std;
extern int a, b;
extern int max(int x, int y);
int main()
{
	int c;
	c = max(a, b);
	cout << "max=" << c << endl;
	return 0;
}
