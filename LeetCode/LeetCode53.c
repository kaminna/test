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