#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	char ufo[7], usa[7];
	int mul1 = 1, mul2 = 1;
	scanf("%s%s", ufo, usa);
	int ufosize = strlen(ufo), usasize = strlen(usa);
	for (int i = 0; i < ufosize; i++)
	{
		mul1 *= ufo[i] - 64;
	}
	for (int i = 0; i < usasize; i++)
	{
		mul2 *= usa[i] - 64;
	}
	if (mul1%47 == mul2%47)
	{
		printf("GO");
	}
	else
	{
		printf("STAY");
	}
	return 0;
}