double fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}
double factsum(int n)
{
	double sum = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		sum += fact(i);
	}
	return sum;
}