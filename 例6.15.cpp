#include<iostream>
#include<iomanip>
using namespace std;
void sort(int a[], int n)
{
	int i, j, k, t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n;j++)
		if (a[k] < a[j]) k = j;
		if (k != i)
		{
			t = a[i]; a[i] = a[k]; a[k] = t;
		}
	}
}
int main(void)
{
	int i;
	int score[10];
	for (i = 0; i < 10; i++)
		cin >> score[i];
	sort(score, 10);
	for (i = 0; i < 10; i++)
		cout << setw(5) << score[i];
	return 0;
}
