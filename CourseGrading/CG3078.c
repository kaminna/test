#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	char s[1001];
	scanf("%s", s);
	int i, len = strlen(s), cnt = 0;
	for (i = 0; i < len; i++)
	{
		switch (cnt)
		{
			case 0: {if (s[i] == 'h') cnt++; break; }
			case 1: {if (s[i] == 'e') cnt++; break; }
			case 2: {if (s[i] == 'i') cnt++; break; }
			case 3: {if (s[i] == 'd') cnt++; break; }
			case 4: {if (s[i] == 'i') cnt++; break; }
			default:break;
		}
	}
	if (cnt == 5)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}