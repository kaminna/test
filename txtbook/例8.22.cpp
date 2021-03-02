#include<iostream>
using namespace std;
int main()
{
	char s[] = "asked";
	char *const p = s;
	p = "xyz";
	cout << *p;
	*p = 's';
	cout << *p;
	p++;
	*p = 'q';
	cout << *p << endl;
	return 0;
}
