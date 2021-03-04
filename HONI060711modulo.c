#include <stdio.h>
int main(int argc, char** argv)
{
	int nums[10], cnt[43] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &nums[i]);
		nums[i] = nums[i] % 42;
	}
	for (int i = 0; i < 10; i++)
	{
		cnt[nums[i]]++;
	}
	for (int i = 0; i < 42; i++)
	{
		if (cnt[i])
		{
			cnt[42]++;
		}
	}
	printf("%d", cnt[42]);
	return 0;
}