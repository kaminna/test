int pivotIndex(int* nums, int numsSize)
{
	int sum = 0;
	for (int i = 0; i < numsSize; i++)
	{
		sum += nums[i];
	}
	int left = 0, right = 0;
	for (int i = 0; i < numsSize; i++)
	{
		right = sum - left - nums[i];
		if (left == right)
		{
			return i;
		}
		left += nums[i];
	}
	return -1;
}