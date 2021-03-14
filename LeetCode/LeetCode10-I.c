long long nums[1001] = { 0, 1 };
long long a = 1000000007;
long long fib(int n)
{
	if (n < 2)
	{
		nums[n] = nums[n] % a;
		return nums[n];
	}
	if (nums[n])
	{
		nums[n] = nums[n] % a;
		return nums[n];
	}
	else
	{
		nums[n] = (fib(n - 1) + fib(n - 2)) % a;
		return nums[n];
	}
}