#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const int SIZE = 10;
int main(void)
{
	int arr[SIZE];
	int i, high, low, n = 0,sum;
	float average;
	srand(time(0));
	for (i = 0; i < SIZE; i++)
		arr[i] = rand() % 100;
	for (i = 0; i < SIZE; i++)
		cout << arr[i] << '\t';
	cout << endl;
	high = arr[0];
	low = arr[0];
	sum = arr[0];
	for (i = 1; i < SIZE; i++)
	{
		if (arr[i]>high) high = arr[i];
		if (arr[i]<low) low = arr[i];
		sum += arr[i];
	}
	cout << "highest value is " << high << endl;
	cout << "lowest value is " << low << endl;
	average = (float)sum / i;
	for (i = 0; i<SIZE;i++)
	if (arr[i]>average)
	{
		cout << arr[i] << '\t';
		n++;
	}
	cout << endl << "higher counter is:" << n << endl;
	return 0;
}
