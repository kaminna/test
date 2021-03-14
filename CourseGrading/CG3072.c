#include <stdio.h>
int main(int argc, char** argv)
{
	int i;
	for (i = 100; i < 1000; i++)
	{
		if (i*i % 1000 == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}