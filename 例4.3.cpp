#include<iostream>
#include<cstdlib>
using namespace std;
void print_star()
{
	cout << "**********" << endl;
}
double sqr(double y)
{
	return y*y;
}
int main()
{
	double a = 7.0;
	print_star();
	cout << "6^2=" << sqr(6.0) << endl;
	cout << "8^2=" << sqr(5.0 + 3.0) << endl;
	cout << "7^2=" << sqr(a) << endl;
	print_star();
	system("pause");
	return 0;
}
