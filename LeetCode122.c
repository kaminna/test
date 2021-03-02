int maxProfit(int* prices, int pricesSize)
{
	int i, total = 0;
	for (i = 0; i + 1 < pricesSize; i++)
	{
		if (prices[i] < prices[i + 1])
		{
			total += prices[i + 1] - prices[i];
		}
	}
	return total;
}
/*
	if (pricesSize <= 1)
	{
		return 0;
	}
	int profits[pricesSize + 1];
	int k, max, profit, i;
	profits[1] = 0;
	for (k = 2; k <= pricesSize; k++)
	{
		max = 0;
		profit = profits[k - 1];
		if (profit > max)
		{
			max = profit;
		}
		for (i = 1; i < k; i++)
		{
			profit = profits[i] + prices[k - 1] - prices[i - 1];
			if (profit > max)
			{
				max = profit;
			}
		}
		profits[k] = max;
	}
	return profits[pricesSize];
*/