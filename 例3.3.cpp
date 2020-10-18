#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a, b, c, t;
	cin >> a >> b >> c;
	if (b > a){ t = a; a = b; b = t; }
	if (c > a){ t = a; a = c; c = t; }
	if (c > b){ t = b; b = c; c = t; }
	cout << "从大到小排序输出：" << a << '\t' << b << '\t' << c << endl;
	system("pause");
	return 0;
}
