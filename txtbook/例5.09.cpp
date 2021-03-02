//file1.cpp
#include<iostream>
using namespace std;
static int n;
void fn();
int main()
{
	n = 20;
	cout << n << endl;
	fn();
	return 0;
}
//file2.cpp
#include<iostream>
using namespace std;
static int n;
void fn()
{
	n = n + 1;
	cout << n << endl;
}
