#include <stdio.h>
int main(int argc, char** argv)
{
	int n, diff = 0, max = 0;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i+1 < n; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			diff += arr[i + 1] - arr[i];
		}
		else
		{
			if (max < diff)
			{
				max = diff;
				if (diff > max)
				{
					max = diff;
				}
			}
			diff = 0;
		}
	}
	printf("%d", max);
	return 0;
}