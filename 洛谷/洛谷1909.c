#include <stdio.h>
int main(int argc, char** argv)
{
	int n, i, j, money, tmp, min = 100000000;
	scanf("%d", &n);
	int price[3][2];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &price[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		tmp = 0;
		if (n%price[i][0] == 0)
		{
			tmp = n / price[i][0];
		}
		else
		{
			tmp = (n / price[i][0]) + 1;
		}
		money = tmp * price[i][1];
		if (money <= min)
		{
			min = money;
		}
	}
	printf("%d", min);
	return 0;
}