int cindex(int j)
{
	return j + 1;
}
int findex(int j, int numsSize)
{
	return j + numsSize;
}
int findMaxLength(int* nums, int numsSize)
{
	int countDiff[numsSize + 1];
	countDiff[cindex(-1)] = 0;
	for (int k = 0; k < numsSize; k++)
	{
		if (nums[k] == 0)
		{
			countDiff[cindex(k)] = countDiff[cindex(k - 1)] + 1;
		}
		else
		{
			countDiff[cindex(k)] = countDiff[cindex(k - 1)] - 1;
		}
	}
	int findMaxJ[2 * numsSize + 1];
	for (int k = -numsSize; k <= numsSize; k++)
	{
		findMaxJ[findex(k, numsSize)] = -1;
	}
	for (int j = 0; j < numsSize; j++)
	{
		findMaxJ[findex(countDiff[cindex(j)], numsSize)] = j;
	}
	int maxLength = 0;
	for (int i = 0; i < numsSize; i++)
	{
		int target = countDiff[cindex(i - 1)];
		int length = findMaxJ[findex(target, numsSize)] - i + 1;
		if (length > maxLength)
		{
			maxLength = length;
		}
	}
	return maxLength;
}