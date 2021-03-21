#include <stdio.h>
int main(int argc, char** argv)
{
	int base, sign = 0;
	int cost[12], i, profit = 0, left = 0;
	for (i = 0; i < 12; i++)
	{
		base = 300 + left;
		scanf("%d", &cost[i]);
		left = base - cost[i];
		if (left >= 100)
		{
			profit += left - (left % 100);
			left = left % 100;
		}
		else if (left < 0)
		{
			cost[i] = -1 * (i + 1);
		}
	}
	for (i = 0; i < 12; i++)
	{
		if (cost[i] < 0)
		{
			printf("%d", cost[i]);
			return 0;
		}
	}
	printf("%.lf", (double)(profit*1.2 + left));
	return 0;
}