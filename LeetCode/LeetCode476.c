int findComplement(int num)
{
	int n = num, count = 0, Const = 4294967295;
	while (n)
	{
		count++;
		Const &= (Const - 1);
		n /= 2;
	}
	return 4294967295 - num - Const;
}