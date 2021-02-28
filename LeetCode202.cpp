int next_n(int n)
{
	int sum = 0;
	while (n)
	{
		sum += (n % 10) * (n % 10);
		n /= 10;
	}
	return sum;
}
bool isHappy(int n)
{
	int slow = n, fast = n;//¹êÍÃÈüÅÜ
	do
	{
		slow = next_n(slow);
		fast = next_n(fast);
		fast = next_n(fast);
	} while (slow != fast);
	return fast == 1;//ÅĞ¶ÏfastÊÇ·ñÎª1
}