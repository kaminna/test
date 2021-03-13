int extractMax(int* counter, int upperBound)
{
	for (int i = upperBound; i > 0; i--)
	{
		if (counter[i] > 0)
		{
			counter[i]--;
			return i;
		}
	}
	return 0;
}
void insert(int* counter, int value)
{
	counter[value]++;
}
int lastStoneWeight(int* stones, int stonesSize)
{
	int counter[1001] = { 0 };
	for (int i = 0; i < stonesSize; i++)
	{
		counter[stones[i]]++;
	}
	int upperBound = 1000;
	while (1)
	{
		int y = extractMax(counter, upperBound);
		int x = extractMax(counter, upperBound);
		upperBound = y;
		if (x == 0)
		{
			return y;
		}
		if (x != y)
		{
			insert(counter, y - x);
		}
	}
	return 0;
}