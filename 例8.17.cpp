#include<iostream>
using namespace std;
void copystr(char*s1, char*s2)
{
	while (*s2 != '\0')
		*s1++ = *s2++;
	*s1 = '\0';
}
int main()
{
	char ps[] = "ok";
	char pd[] = "hello";
	copystr(pd, ps);
	cout << ps << endl;
	cout << pd << endl;
	return 0;
}
