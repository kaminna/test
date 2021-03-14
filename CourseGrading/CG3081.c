#include <stdio.h>
int main(int argc, char** argv)
{
	int n, i = 0;
	scanf("%d", &n);
	if (n == 0)
	{
		printf("0");
		return 0;
	}
	int nums[20];
	while (n)
	{
		nums[i] = n % 8;
		n /= 8;
		i++;
	}
	while (i)
	{
		i--;
		printf("%d", nums[i]);
	}
	return 0;
}