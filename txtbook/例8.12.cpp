#include<iostream>
#include<stdlib.h>
#include<malloc.h>
using namespace std;
int main()
{
	int i, n, sum = 0;
	cout << "输入数组长度n:";
	cin >> n;
	int *p = (int *)malloc(n*sizeof(int));
	if (p == NULL)
	{
		cout << "Memory Heap Allocation Failure!";
		exit(1);
	}
	cout << "输入" << n << "个元素值：";
	for (i = 0; i < n; i++)
		cin >> p[i];
	for (i = 0; i < n; i++)
		sum += p[i];
	cout << "sum=" << sum << endl;
	free(p);
	return 0;
}
