#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	int cup[3] = { 1,0,0 };
	char change[50];
	scanf("%s", change);
	int i, tmp = 0;
	for (i = 0; i < strlen(change); i++)
	{
		if (change[i] == 'A')
		{
			tmp = cup[0];
			cup[0] = cup[1];
			cup[1] = tmp;
		}
		else if (change[i] == 'B')
		{
			tmp = cup[1];
			cup[1] = cup[2];
			cup[2] = tmp;
		}
		else
		{
			tmp = cup[2];
			cup[2] = cup[0];
			cup[0] = tmp;
		}
	}
	for (i = 0; i < 3; i++)
	{
		if (cup[i] == 1)
		{
			printf("%d", i + 1);
		}
	}
	return 0;
}