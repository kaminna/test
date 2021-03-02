#include<iostream>
#include<cstdlib>
using namespace std;
void print(double d)
{
	cout << "this is a double " << d << "\n";
}
void print(int i)
{
	cout << "this is a integer " << i << "\n";
}
int main()
{
	int x = 1, z = 10;
	float y = 1.0;
	char c = 'a';
	print(x);
	print(y);
	print(c);
	print(double(z));
	system("pause");
	return 0;
}
