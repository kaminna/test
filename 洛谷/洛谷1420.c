#include <stdio.h>
int main(int argc, char** argv)
{
	int n, i = 1, arr[10000];
	int MaxEqul = 1, ispuls = 1;
	scanf("%d", &n);
	scanf("%d", &arr[0]);
	while (i < n)
	{
		scanf("%d", &arr[i]);
		if (arr[i - 1] + 1 == arr[i])
		{
			ispuls++;
		}
		else
		{
			ispuls = 1;
		}
		if (ispuls > MaxEqul)
		{
			MaxEqul = ispuls;
		}
		i++;
	}
	printf("%d", MaxEqul);
	return 0;
}