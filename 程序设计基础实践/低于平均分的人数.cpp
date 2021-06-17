#include <cstdio>
int main(int argc, char** argv)
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	int nums[200];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
		sum += nums[i];
	}
	sum = sum / n;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (nums[i] < sum)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
} 


