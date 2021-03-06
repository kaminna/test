#include <stdio.h>
int main(int argc, char** argv)
{
	int a = 10, b = 5, c = 1, cnt = 0;
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			for (int k = 0; k <= 50; k++)
			{
				if (i*a + j * b + k * c == 50)
				{
					cnt++;
				}
			}
		}
	}
	printf("%d", cnt);
	return 0;
}