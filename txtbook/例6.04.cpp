#include<iostream>
using namespace std;
int main(void)
{
	int a[10];
	int i, j, t;
	cout << "input 10 numbers : "<<endl;
	for (i = 0; i < 10; i++)
		cin>>a[i];
	cout << endl;
	for (i = 0; i < 9;i++)
	for (j = 0; j < 9 - i;j++)
	if (a[j]>a[j + 1])
	{
		t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
	}
	cout << "the sorted numbers : " << endl;
	for (i = 0; i < 10; i++)
		cout << a[i] << "	";
	cout << endl;
	return 0;
}
