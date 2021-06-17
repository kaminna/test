#include <cstdio>
#include <climits>
int main()
{
	int nums[10], min = INT_MAX, max = 0, sum = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &nums[i]);
		sum += nums[i];
		if (nums[i] > max)
		{
			max = nums[i];
		}
		if (nums[i] < min)
		{
			min = nums[i];
		}
	}
	double average = 1.0 * sum / 10.0;
	printf("max:%d\nmin:%d\n", max, min);
	if (average - (int)average == 0)
	{
		printf("average:%d", (int)average);
	}
	else
	{
		printf("average:%.1lf", average);
	}
	return 0;
}


