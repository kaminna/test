#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int n;
	scanf("%d", &n);
	int nums[10], sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
		nums[i] = pow(nums[i] / 10, nums[i] % 10);
		sum += nums[i];
	}
	printf("%d", sum);
	return 0;
}