int numJewelsInStones(char * jewels, char * stones)
{
	int count = 0;
	for (int i = 0; i < strlen(stones); i++)
	{
		for (int k = 0; k < strlen(jewels); k++)
		{
			if (jewels[k] == stones[i])
			{
				count++;
			}
		}
	}
	return count;
}