#include <stdio.h>
int main(int argc, char** argv)
{
	int mod[42] = { 0 };
	int nums, cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &nums);
		mod[nums % 42] = 1;
	}
	for (int i = 0; i < 42; i++)
	{
		cnt += mod[i];
	}
	printf("%d", cnt);
	return 0;
}