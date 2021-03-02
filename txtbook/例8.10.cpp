#include<iostream>
using namespace std;
int main()
{
	char s1[10], s2[10];
	char *pc = s2;
	cout << "请输入两个字符串：" << endl;
	cin >> s1 >> pc;
	cout << "s1:" << s1 << endl;
	cout << "pc:" << pc << endl;
	return 0;
}
