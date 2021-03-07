#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int n, i, diff, flag = 1;
	scanf("%d", &n);
	int nums[1000];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
	}
	for (i = 0; i+1 < n; i++)
	{
		diff = fabs(nums[i] - nums[i + 1]);
		if (diff > n-1 || diff <1)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		printf("Jolly");
	}
	else
	{
		printf("Not jolly");
	}
	return 0;
}