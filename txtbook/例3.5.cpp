#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	ch = (ch >= 'A'&&ch <= 'Z') ? (ch + 32) : ch;
	cout << ch << endl;
	system("pause");
	return 0;
}
