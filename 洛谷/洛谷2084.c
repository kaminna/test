#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	int m, len, i, bit;
	scanf("%d", &m);
	char nums[1000];
	scanf("%s", &nums);
	len = strlen(nums);
	bit = len - 1;
	for (i = 0; i < len; i++)
	{
		if (nums[i] == '0')
		{
			if (nums[i + 1] != '0' && i != len - 1)
			{
				printf("+");
			}
			bit--;
			continue;
		}
		else
		{
			printf("%c*%d^%d", nums[i], m, bit);
			if (nums[i + 1] != '0'&&i != len - 1)
			{
				printf("+");
			}
			bit--;
		}
	}
	return 0;
}
//2 1100100000