void moveZeroes(int* nums, int numsSize)
{
	int i, j;
	j = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] != 0)
		{
			nums[j] = nums[i];
			j++;
		}
	}
	while (j < numsSize)
	{
		nums[j] = 0;
		j++;
	}
/*	int count, i, temp;
	while (1)
	{
		count = 0;
		for (i = 0; i + 1 < numsSize; i++)
		{
			if (nums[i] == 0 && nums[i + 1] != 0)
			{
				count++;
				temp = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = temp;
			}
		}
		if (count == 0)
		{
			break;
		}
	}
*/
}