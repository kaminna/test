bool isPalindrome(int x)
{
	if (x < 0 || (x % 10 == 0 && x != 0))
	{
		return false;
	}
	int revernum = 0;
	while (x > revernum)
	{
		revernum = revernum * 10 + x % 10;
		x /= 10;
	}
	return x == revernum / 10 || x == revernum;
}