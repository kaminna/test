#include <stdio.h>
int main(int argc, char** argv)
{
	int n, i, j;
	scanf("%d", &n);
	int nums[10000];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
	}
	j = n - 1;
	for (i = n - 1; i >= 0; i--)
	{
		if (nums[i])
		{
			nums[j] = nums[i];
			j--;
		}
	}
	while (j >= 0)
	{
		nums[j] = 0;
		j--;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", nums[i]);
		if (i != n - 1)
		{
			printf(" ");
		}
	}
	return 0;
}