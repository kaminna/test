#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y, z;
	for (x = 0; x <= 33;x++)
	for (y = 0; y <= 50; y++)
	{
		z = 100 - x - y;
		if (3 * x + 2 * y + z / 2.0 == 100)
			printf("大马有%d只，小马有%d只，马驹有%d只。\n", x, y, z);
	}
	system("pause");
	return 0;
}
