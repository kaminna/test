#include <stdio.h>
int main(int argc, char** argv)
{
	long long l, p, arr[5];
	scanf("%lld%lld", &l, &p);
	for (int i = 0; i < 5; i++)
	{
		scanf("%lld", &arr[i]);
		arr[i] -= l * p;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%lld", arr[i]);
		if (i != 4)
		{
			printf(" ");
		}
	}
	return 0;
}