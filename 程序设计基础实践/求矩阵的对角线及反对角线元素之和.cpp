#include <cstdio>
int main()
{
	int nums[3][3], sum1 = 0, sum2 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &nums[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		sum1 += nums[i][i];
	}
	for (int i = 0; i < 3; i++)
	{
		sum2 += nums[i][2-i];
	}
	printf("%d\n", sum1);
	printf("%d", sum2);
	return 0;
}

