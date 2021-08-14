int maxSubArray(int* nums, int numsSize)
{
	int i, j, sum, max = nums[0];
	for (i = 0; i < numsSize; i++)
	{
		sum = 0;
		for (j = i; j < numsSize; j++)
		{
			sum += nums[j];
			if (sum > max)
			{
				max = sum;
			}
		}
	}
	return max;
}
/* dp
int maxSubArray(int* nums, int numsSize) {
	int pre = 0, maxAns = nums[0];
	for (int i = 0; i < numsSize; i++) {
		pre = fmax(pre + nums[i], nums[i]);
		maxAns = fmax(maxAns, pre);
	}
	return maxAns;
}
*/