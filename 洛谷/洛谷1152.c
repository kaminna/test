#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int n, i, diff, next, flag = 1;
	scanf("%d", &n);
	int nums[1000];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
	}
	diff = fabs(nums[0] - nums[1]);
	for (i = 1; i+1 < n; i++)
	{
		next = fabs(nums[i] - nums[i + 1]);
		if (next != diff - 1)
		{
			flag = 0;
			break;
		}
		diff--;
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