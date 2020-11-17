#include<iostream>
using namespace std;
int sum(int array[], int);
int main(void)
{
	static int a[5] = { 2, 3, 6, 8, 10 };
	int sumOfArray;
	sumOfArray = sum(a, 5);
	cout << "数组元素的和等于" << sumOfArray << endl;
	return 0;
}
int sum(int array[], int len)
{
	int s = 0;
	for (int i = 0; i < len; i++)
		s += array[i];
	return s;
}
