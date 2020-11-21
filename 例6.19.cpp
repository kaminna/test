#include<iostream>
#include<string>
using namespace std;
void encrypt(char a[])
{
	for (int i = 0; i < strlen(a); i++)
	{
		a[i] = a[i] + 2;
		if (a[i]>64 + 26 && a[i] < 97) a[i] -= 26;
		if (a[i]>96 + 26) a[i] -= 26;
	}
}
void dencrypt(char a[])
{
	for (int i = 0; i < strlen(a); i++)
	{
		a[i] = a[i] - 2;
		if (a[i] < 65) a[i] += 26;
		if (a[i] < 97 && a[i] >= 95) a[i] += 26;
	}
}
int main(void)
{
	char input[80];
	cout << "请输入原文： ";
	cin.getline(input, 80);
	cout << "原文的密文为：";
	encrypt(input);
	cout << input;
	cout << endl << "按该密码解密的原文为：";
	dencrypt(input);
	cout << input << endl;
	return 0;
}
