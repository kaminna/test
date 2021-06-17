#include <cstdio>
int main()
{
	int nums[101], i = 0;
	do
	{
		scanf("%d", &nums[i]);
		if (nums[i] == 0)
		{
			break;
		}
		i++;
	}while (1);
	for (int j = i-1; j >= 0; j--)
	{
		printf("%d ", nums[j]);
	}
	return 0;
} 

