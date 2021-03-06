#include <stdio.h>
int main(int argc, char** argv)
{
	int apple[10], high, cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &apple[i]);
	}
	scanf("%d", &high);
	high += 30;
	for (int i = 0; i < 10; i++)
	{
		if (high >= apple[i])
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}