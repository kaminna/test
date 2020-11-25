#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 23, 12, 45, 33, 67 }, *p = a, i;
	cout << "下标方式： ";
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << "\n地址方式：";
	for (i = 0; i < 5; i++)
		cout << *(a + i) << " ";
	cout << "\n指针方式1： ";
	for (i = 0; i < 5; i++)
		cout << *(p + i) << " ";
	cout << "\n指针方式2： ";
	for (p = a; p < a + 5; p++)
		cout << *p << " ";
	return 0;
}
