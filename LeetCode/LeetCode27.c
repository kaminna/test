int removeElement(int* nums, int numsSize, int val)
{
	int i = 0, j = numsSize - 1, cnt = 0;
	while (i <= j && j >= 0)
	{
		if (nums[i] == val)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];
				nums[j] = val;
			}
			cnt++;
			j--;
		}
		else
		{
			i++;
		}
	}
	return numsSize - cnt;
}