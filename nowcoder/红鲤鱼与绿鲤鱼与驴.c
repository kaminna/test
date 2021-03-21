#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	char n[100];
	scanf("%s", n);
	int i, len = strlen(n);
	for (i = 0; i < len; i++)
	{
		if (n[i] == '1')
		{
			printf("hongliyu");
		}
		else if (n[i] == '2')
		{
			printf("lvliyu");
		}
		else if (n[i] == '3')
		{
			printf("lv");
		}
	}
	return 0;
}