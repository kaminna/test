int repeatedNTimes(int* A, int ASize)
{
	int n = ASize / 2;
	int Hash[10000] = { 0 };
	for (int i = 0; i < ASize; i++)
	{
		Hash[A[i]]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		if (Hash[i] == n)
		{
			return i;
		}
	}
	return 0;
}