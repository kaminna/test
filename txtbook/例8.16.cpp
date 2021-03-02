#include<iostream>
using namespace std;
void sum(int *array, int n)
{
	int sum = 0;
	int i = 0;
	while (i < n)
		sum += array[i++];
	cout << sum << endl;
}
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	sum(a, 10);
	return 0;
}
