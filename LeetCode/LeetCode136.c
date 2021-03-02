int singleNumber(int* nums, int numsSize)
{
	int i, n = nums[0];
	for (i = 1; i < numsSize; i++)
	{
		n ^= nums[i];
	}
	return n;
	/*    int i,j,count;
		for(i=0;i<numsSize;i++)
		{
			count=0;
			for(j=0;j<numsSize;j++)
			{
				if(nums[i]==nums[j])
				{
					count++;
				}
			}
			if(count==1)
			{
				return nums[i];
			}
		}
		return -1;
	*/
}