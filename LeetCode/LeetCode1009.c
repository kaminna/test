int bitwiseComplement(int N)
{
	if (N == 0)
	{
		return 1;
	}
	int n = N, count = 0, Const = 4294967295;
	while (n)
	{
		count++;
		Const &= (Const - 1);
		n /= 2;
	}
	return 4294967295 - N - Const;
}