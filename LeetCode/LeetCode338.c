int countOnes(int x)
{
	int ones = 0;
	while (x > 0)
	{
		x &= (x - 1);
		ones++;
	}
	return ones;
}
int* countBits(int num, int* returnSize)
{
	int* bits = malloc(sizeof(int) * (num + 1));
	*returnSize = num + 1;
	for (int i = 0; i <= num; i++)
	{
		bits[i] = countOnes(i);
	}
	return bits;
}