#include <stdio.h>
int main(int argc, char** argv)
{
	int i, k, flag = 0;
	int s1, s2, s3;
	scanf("%d", &k);
	for (i = 10000; i <= 30000; i++)
	{
		s1 = i / 100;
		s3 = i % 1000;
		s2 = s3 / 10 + ((i /1000) % 10) * 100;
		if (s1%k == 0 && s2%k == 0 && s3%k == 0)
		{
			printf("%d\n", i);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("No");
	}
	return 0;
}