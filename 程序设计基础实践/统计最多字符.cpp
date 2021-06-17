#include <cstdio>
#include <cstring>
int main(int argc, char** argv)
{
	char s[100000];
	scanf("%s", &s);
	int nums[26], len = strlen(s);
	memset(nums, 0, sizeof(nums));
	for (int i = 0; i < len; i++)
	{
		int index = s[i] - 'a';
	//	printf("%d\n", index);
		nums[index]++;
	}
	int max = 0;
	for (int i = 0; i < 26; i++)
	{
		if (max < nums[i])
		{
			max = nums[i];
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if(nums[i] == max)
		{
			printf("%c ", i+'a');
		}
	}
	printf("%d", max);
	return 0;
}

